using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;

namespace DataViz
{
    /// <summary>
    /// One entry per rendering pipeline under test - pairs a human-readable
    /// name (goes straight into the CSV) with the RenderPipelineKind the
    /// harness sets on the manager before triggering each rebuild. There is
    /// no longer a separate GameObject per pipeline - one shared table now
    /// holds all renderers, and ScatterplotVisualizer.RegeneratePlot()
    /// switches on m_Manager.ActivePipeline to decide which one gets fed data.
    ///
    /// Do NOT add a GameObject entry here yet - RegeneratePlot()'s switch has
    /// no case for it (that renderer doesn't exist yet), so setting
    /// ActivePipeline to GameObject would silently leave whatever the
    /// previous condition rendered still on screen, corrupting that
    /// condition's measurements rather than erroring loudly.
    /// </summary>
    [Serializable]
    public class BenchmarkPipelineEntry
    {
        public string PipelineName;
        public MultiplayerScatterplotManager.RenderPipelineKind PipelineKind;
    }

    /// <summary>
    /// Automated benchmark runner for the pipeline x point-count experiment
    /// matrix. Requires:
    ///   - Exactly one MultiplayerScatterplotManager in the scene.
    ///   - One shared table with all renderer scripts attached
    ///     (ScatterplotInstancedRenderer, ScatterplotParticleRenderer,
    ///     ScatterplotVFXRenderer) and ScatterplotVisualizer wired to all
    ///     three - the harness selects which one renders by setting
    ///     m_Manager.ActivePipeline, not by toggling GameObjects.
    ///   - One pre-processed .cdataset file per point-count tier you want to
    ///     test, already sitting in StreamingAssets/DataCSV/ProcessedData.
    ///
    /// Output: a single long-format CSV (one row per frame/build/memory
    /// sample, with a RowType column) written to Application.persistentDataPath.
    /// Long format because it's the easiest shape to reload and reshape with
    /// pandas afterward (filter by RowType, groupby Pipeline/Dataset/Window).
    /// </summary>
    public class BenchmarkingManager : MonoBehaviour
    {
        [Header("References")]
        public MultiplayerScatterplotManager m_Manager;

        [Header("Pipelines Under Test")]
        public List<BenchmarkPipelineEntry> m_Pipelines = new();

        [Header("Datasets (point-count tiers)")]
        [Tooltip(".cdataset file names already in StreamingAssets/DataCSV/ProcessedData - one per point-count tier.")]
        public List<string> m_DatasetFileNames = new();

        [Header("Trial Settings")]
        [Tooltip("Frames to discard after each Build() before measuring - lets shader compilation / buffer allocation settle.")]
        public int m_WarmupFrames = 60;

        [Tooltip("Independent measurement windows per condition, for computing between-run variance.")]
        public int m_WindowsPerCondition = 5;

        [Tooltip("Frames captured per window. ~2700 = 30s @ 90Hz for final data collection; keep this low (e.g. 60) while validating the pipeline runs end to end.")]
        public int m_FramesPerWindow = 300;

        [Tooltip("Randomize condition order to avoid confounding thermal/driver-warmup effects with pipeline identity.")]
        public bool m_RandomizeOrder = true;

        [Tooltip("Independent repeated build/rebuild measurements per condition - previously this was " +
                 "always 1 (a single Stopwatch call, no way to compute variance or test significance " +
                 "on build cost at all). Each repeat reloads + rebuilds the same dataset fresh.")]
        public int m_BuildRepeats = 5;

        [Header("Safety")]
        [Tooltip("Hard wall-clock ceiling (seconds) for warmup + all windows of a single condition. " +
                 "If a pipeline is so slow at a given point count that it can't finish within this " +
                 "budget, the condition is aborted early, logged as 'timeout' in the CSV, and the " +
                 "harness moves on - without this, one infeasible combination (e.g. Instanced at " +
                 "1e7 points) can block the entire run for hours.")]
        public float m_MaxSecondsPerCondition = 300f;

        [Header("Output")]
        public string m_OutputFileName = "benchmark_results.csv";

        [Header("Convenience")]
        public bool m_AutoRunOnStart = false;

        private StreamWriter m_Writer;
        private string m_OutputPath;
        private bool m_IsRunning;

        private struct Condition
        {
            public int PipelineIndex;
            public string DatasetFileName;
        }

        private void Start()
        {
            if (m_AutoRunOnStart)
            {
                RunBenchmark();
            }
        }

        [ContextMenu("Run Benchmark")]
        public void RunBenchmark()
        {
            if (m_IsRunning)
            {
                Debug.LogWarning("[Benchmark] Already running - ignoring duplicate start.");
                return;
            }

            StartCoroutine(RunAllConditions());
        }

        private IEnumerator RunAllConditions()
        {
            m_IsRunning = true;

            if (m_Manager == null)
                m_Manager = MultiplayerScatterplotManager.Instance;

            if (m_Manager == null)
            {
                Debug.LogError("[Benchmark] No MultiplayerScatterplotManager found in scene - aborting.");
                m_IsRunning = false;
                yield break;
            }

            if (m_Pipelines.Count == 0 || m_DatasetFileNames.Count == 0)
            {
                Debug.LogError("[Benchmark] No pipelines or no datasets configured - aborting.");
                m_IsRunning = false;
                yield break;
            }

            OpenCsv();

            List<Condition> conditions = new List<Condition>();
            for (int p = 0; p < m_Pipelines.Count; p++)
            {
                foreach (string dataset in m_DatasetFileNames)
                {
                    conditions.Add(new Condition { PipelineIndex = p, DatasetFileName = dataset });
                }
            }

            if (m_RandomizeOrder)
            {
                ShuffleList(conditions);
            }

            for (int c = 0; c < conditions.Count; c++)
            {
                yield return RunSingleCondition(conditions[c], c, conditions.Count);
            }

            CloseCsv();
            m_IsRunning = false;

            Debug.Log($"[Benchmark] Complete - {conditions.Count} conditions run. Results: {m_OutputPath}");
        }

        private IEnumerator RunSingleCondition(Condition condition, int index, int total)
        {
            BenchmarkPipelineEntry pipeline = m_Pipelines[condition.PipelineIndex];

            Debug.Log($"[Benchmark] ({index + 1}/{total}) pipeline={pipeline.PipelineName} dataset={condition.DatasetFileName}");

            // Select the pipeline. This alone doesn't trigger a rebuild -
            // ActivePipeline is a plain field, not an RPC-style setter that
            // invokes OnPlotSettingsChanged. It takes effect on the NEXT
            // RegeneratePlot(), which RequestLoadDatasetRpc below triggers
            // anyway (it reloads the dataset every condition regardless of
            // whether that dataset was already loaded), so setting it here
            // and relying on that upcoming rebuild is sufficient - no extra
            // trigger needed.
            m_Manager.ActivePipeline = pipeline.PipelineKind;

            yield return null;

            // Combined dataset-parse + full RegeneratePlot (including this
            // pipeline's renderer.Build() call) cost, since
            // MultiplayerScatterplotManager's events fire synchronously within
            // RequestLoadDatasetRpc. NOTE: this conflates binary-parse time
<<<<<<< Updated upstream
            // with GPU buffer upload time. RequestLoadDatasetRpc used to
            // trigger RegeneratePlot twice per call (once via the
            // OnPlotSettingsChanged fired inside LoadLocalDataset, again via
            // the explicit OnPlotSettingsChanged at the end of
            // RequestLoadDatasetRpc itself) - LoadLocalDataset's internal fire
            // is now suppressed on this path (notifyPlotSettingsChanged: false),
            // so this is "1x rebuild cost" again. Wrap ColumnarBinaryImporter.Load
            // and Build() with separate Stopwatches later if you need the
            // split parse-vs-upload number.
            var buildStopwatch = System.Diagnostics.Stopwatch.StartNew();
            m_Manager.RequestLoadDatasetRpc(condition.DatasetFileName);
            buildStopwatch.Stop();
=======
            // with GPU buffer upload time, and RequestLoadDatasetRpc currently
            // triggers RegeneratePlot twice per call (once via OnDatasetLoaded/
            // OnPlotSettingsChanged inside LoadLocalDataset, again via the
            // explicit OnPlotSettingsChanged at the end of RequestLoadDatasetRpc
            // itself) - so this number is "2x rebuild cost", not "1x". Disclose
            // this in Methods, or wrap ColumnarBinaryImporter.Load and Build()
            // with separate Stopwatches later if you need the split/single-pass number.
            //
            // Repeated m_BuildRepeats times (was a single measurement before -
            // with n=1 per condition there was no way to compute variance or
            // test whether build-time differences between pipelines were real).
            long pointCount = 0;
>>>>>>> Stashed changes

            for (int r = 0; r < m_BuildRepeats; r++)
            {
                var buildStopwatch = System.Diagnostics.Stopwatch.StartNew();
                m_Manager.RequestLoadDatasetRpc(condition.DatasetFileName);
                buildStopwatch.Stop();

                pointCount = m_Manager.LoadedDataset != null ? m_Manager.LoadedDataset.RowCount : 0;

                WriteBuildRow(pipeline.PipelineName, condition.DatasetFileName, pointCount, r, buildStopwatch.Elapsed.TotalMilliseconds);

                yield return null;
            }

            // If the dataset never actually loaded - missing/misnamed .cdataset
            // file, or ColumnarBinaryImporter/CSVImporter both failed to parse
            // it (see MultiplayerScatterplotManager.LoadLocalDataset's own
            // error logging for which) - LoadedDataset is null and RowCount
            // reads back as 0. Don't run a full warmup+window cycle measuring
            // whatever the PREVIOUS condition happened to leave on screen and
            // logging it under this condition's Pipeline/Dataset/PointCount -
            // log it plainly and move on to the next condition instead.
            if (m_Manager.LoadedDataset == null || pointCount == 0)
            {
                Debug.LogError($"[Benchmark] Dataset load failed for '{condition.DatasetFileName}' " +
                                $"(missing file, misformatted/misnamed .cdataset, or unparseable data) - " +
                                $"pipeline={pipeline.PipelineName}. Skipping this condition.");
                WriteErrorRow(pipeline.PipelineName, condition.DatasetFileName, "dataset_load_failed");
                m_Writer?.Flush();
                yield break;
            }

            var conditionStopwatch = System.Diagnostics.Stopwatch.StartNew();

            for (int f = 0; f < m_WarmupFrames; f++)
            {
                if (conditionStopwatch.Elapsed.TotalSeconds > m_MaxSecondsPerCondition)
                {
                    Debug.LogWarning($"[Benchmark] TIMEOUT during warmup: pipeline={pipeline.PipelineName} " +
                                      $"dataset={condition.DatasetFileName} - aborting this condition.");
                    WriteTimeoutRow(pipeline.PipelineName, condition.DatasetFileName, pointCount, "warmup", conditionStopwatch.Elapsed.TotalSeconds);
                    m_Writer?.Flush();
                    yield break;
                }

                yield return null;
            }

            for (int w = 0; w < m_WindowsPerCondition; w++)
            {
                bool completed = true;
                yield return CaptureWindow(pipeline.PipelineName, condition.DatasetFileName, pointCount, w, conditionStopwatch, result => completed = result);

                if (!completed)
                {
                    Debug.LogWarning($"[Benchmark] TIMEOUT during window {w}: pipeline={pipeline.PipelineName} " +
                                      $"dataset={condition.DatasetFileName} - aborting remaining windows for this condition.");
                    WriteTimeoutRow(pipeline.PipelineName, condition.DatasetFileName, pointCount, $"window_{w}", conditionStopwatch.Elapsed.TotalSeconds);
                    m_Writer?.Flush();
                    yield break;
                }
            }

            // Flush after every condition, not just at the very end - if a
            // condition hangs/crashes badly enough to need a manual stop,
            // everything completed so far is still safely on disk rather
            // than lost with the in-memory buffer.
            m_Writer?.Flush();

            yield return null;
        }

        private IEnumerator CaptureWindow(string pipelineName, string datasetFileName, long pointCount, int windowIndex, System.Diagnostics.Stopwatch conditionStopwatch, Action<bool> onComplete)
        {
            long memBefore = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();

            // Diagnostic for the near-zero GpuTimeMs readings seen at the
            // largest point-count tiers - tracks how often GetLatestTimings
            // actually returns valid data (got > 0) vs silently failing.
            // If this is low, GpuTimeMs/CpuTimeMs readings for this window
            // should not be trusted as real CPU/GPU bottleneck evidence.
            int gpuTimingHits = 0;

            for (int f = 0; f < m_FramesPerWindow; f++)
            {
                if (conditionStopwatch.Elapsed.TotalSeconds > m_MaxSecondsPerCondition)
                {
                    onComplete(false);
                    yield break;
                }

                yield return new WaitForEndOfFrame();

                // FrameTimingManager field names (cpuFrameTime/gpuFrameTime)
                // are stable across recent Unity versions as far as I'm aware,
                // but verify via IntelliSense on first run rather than trusting
                // this blind - if these don't compile, check the FrameTiming
                // struct's actual member names in your Unity version.
                //
                // GPU timestamps resolve asynchronously and lag the CPU by a
                // variable number of frames - at long frame times (large point
                // counts) the GPU can be perpetually behind a 1-frame lookback,
                // so a single-slot GetLatestTimings(1, ...) call mostly returns
                // a struct whose gpuFrameTime query hasn't resolved yet (reads
                // back near 0, NOT a real "GPU did nothing" measurement).
                // Fix: pull a short history and walk back from most-recent to
                // find the first entry Unity has actually finished resolving
                // (gpuFrameTime > 0 is Unity's own signal for that). This still
                // won't line up exactly frame-for-frame with frameMs below -
                // that slop is inherent to async GPU timing - but it stops
                // logging phantom near-zero GPU times as if they were real.
                const int kTimingHistoryDepth = 8;
                FrameTimingManager.CaptureFrameTimings();
                FrameTiming[] timings = new FrameTiming[kTimingHistoryDepth];
                uint got = FrameTimingManager.GetLatestTimings(kTimingHistoryDepth, timings);

                double cpuMs = -1.0;
                double gpuMs = -1.0;
                for (int i = 0; i < got; i++)
                {
                    if (timings[i].gpuFrameTime > 0)
                    {
                        cpuMs = timings[i].cpuFrameTime;
                        gpuMs = timings[i].gpuFrameTime;
                        break;
                    }
                }

<<<<<<< Updated upstream
=======
                if (got > 0) gpuTimingHits++;

                double cpuMs = got > 0 ? timings[0].cpuFrameTime : -1.0;
                double gpuMs = got > 0 ? timings[0].gpuFrameTime : -1.0;
>>>>>>> Stashed changes
                double frameMs = Time.unscaledDeltaTime * 1000.0;

                WriteFrameRow(pipelineName, datasetFileName, pointCount, windowIndex, f, frameMs, cpuMs, gpuMs);
            }

            float hitRate = m_FramesPerWindow > 0 ? (float)gpuTimingHits / m_FramesPerWindow : 0f;
            if (hitRate < 0.9f)
            {
                Debug.LogWarning($"[Benchmark] GPU timing reliability low for {pipelineName}/{datasetFileName} " +
                                  $"window {windowIndex}: only {hitRate:P0} of frames returned valid FrameTiming data " +
                                  $"({gpuTimingHits}/{m_FramesPerWindow}). CpuTimeMs/GpuTimeMs for this window may not " +
                                  $"be trustworthy - treat -1.0 values and any suspiciously near-zero GpuTimeMs readings " +
                                  $"with caution rather than as real bottleneck evidence.");
            }

            long memAfter = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();
            WriteMemoryRow(pipelineName, datasetFileName, pointCount, windowIndex, memBefore, memAfter);

            onComplete(true);
        }

        private void WriteTimeoutRow(string pipeline, string dataset, long pointCount, string stage, double elapsedSeconds)
        {
            m_Writer?.WriteLine($"timeout,{pipeline},{dataset},{pointCount},,,,,,,,,{DateTime.UtcNow:o},{stage}_after_{elapsedSeconds.ToString("F1", CultureInfo.InvariantCulture)}s");
        }

        private void WriteErrorRow(string pipeline, string dataset, string reason)
        {
            // Separate RowType from "timeout" on purpose - this isn't a wall-clock
            // abort, it's "we never got valid data to measure in the first place".
            // Same 14-column shape as every other row so read_csv()/read_benchmark_csv()
            // in ChartMaker.R keeps working unchanged; it just won't fall into
            // frame_df/build_df/timeout_df's filters, same as memory_df already doesn't.
            m_Writer?.WriteLine($"error,{pipeline},{dataset},0,,,,,,,,,{DateTime.UtcNow:o},{reason}");
        }

        private void OpenCsv()
        {
            // Auto-tag by actual runtime environment (Application.isEditor is
            // determined by Unity itself, not something you can forget to
            // update) - this closes off exactly the "forgot to rename before
            // this run" mistake. Whatever you type in m_OutputFileName, the
            // file on disk always tells you truthfully whether it came from
            // Editor Play or a real standalone build.
            //
            // Also append a timestamp: StreamWriter opens with overwrite=false
            // meaning FALSE for append, i.e. it OVERWRITES - without a unique
            // per-run component in the filename, a second run in the same
            // environment silently destroys the previous run's results with
            // no warning. This closes that off too - every run gets its own
            // permanent file.
            string environmentTag = Application.isEditor ? "editor" : "standalone";
            string timestamp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
            string baseName = Path.GetFileNameWithoutExtension(m_OutputFileName);
            string extension = Path.GetExtension(m_OutputFileName);
            string taggedFileName = $"{baseName}_{environmentTag}_{timestamp}{extension}";

            m_OutputPath = Path.Combine(Application.persistentDataPath, taggedFileName);
            m_Writer = new StreamWriter(m_OutputPath, false);
            m_Writer.WriteLine("RowType,Pipeline,Dataset,PointCount,Window,Frame,FrameTimeMs,CpuTimeMs,GpuTimeMs,BuildTimeMs,MemBeforeBytes,MemAfterBytes,Timestamp,Stage");

            Debug.Log($"[Benchmark] Environment: {(Application.isEditor ? "EDITOR" : "STANDALONE")} - writing to {m_OutputPath}");
        }

        private void WriteFrameRow(string pipeline, string dataset, long pointCount, int window, int frame, double frameMs, double cpuMs, double gpuMs)
        {
            m_Writer?.WriteLine($"frame,{pipeline},{dataset},{pointCount},{window},{frame}," +
                                $"{frameMs.ToString("F4", CultureInfo.InvariantCulture)}," +
                                $"{cpuMs.ToString("F4", CultureInfo.InvariantCulture)}," +
                                $"{gpuMs.ToString("F4", CultureInfo.InvariantCulture)},,,,{DateTime.UtcNow:o},");
        }

        private void WriteBuildRow(string pipeline, string dataset, long pointCount, int repeat, double buildMs)
        {
<<<<<<< Updated upstream
            m_Writer?.WriteLine($"build,{pipeline},{dataset},{pointCount},,,,,,{buildMs.ToString("F4", CultureInfo.InvariantCulture)},,,{DateTime.UtcNow:o},");
=======
            // Reuses the Window column (always blank for build rows before)
            // to carry the repeat index instead of adding a new CSV column -
            // no schema/header change needed, existing parsers still work.
            m_Writer.WriteLine($"build,{pipeline},{dataset},{pointCount},{repeat},,,,,{buildMs.ToString("F4", CultureInfo.InvariantCulture)},,,{DateTime.UtcNow:o},");
>>>>>>> Stashed changes
        }

        private void WriteMemoryRow(string pipeline, string dataset, long pointCount, int window, long memBefore, long memAfter)
        {
            m_Writer?.WriteLine($"memory,{pipeline},{dataset},{pointCount},{window},,,,,,{memBefore},{memAfter},{DateTime.UtcNow:o},");
        }

        private void CloseCsv()
        {
            m_Writer?.Flush();
            m_Writer?.Close();
            m_Writer = null;
        }

        private static void ShuffleList<T>(List<T> list)
        {
            System.Random rng = new System.Random();
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = rng.Next(n + 1);
                (list[k], list[n]) = (list[n], list[k]);
            }
        }

        private void OnDestroy()
        {
            CloseCsv();
        }
    }
}