using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace DataViz
{
    public class MultiplayerScatterplotManager : MonoBehaviour
    {
        public static MultiplayerScatterplotManager Instance { get; private set; }

        [Header("Dataset Settings")]
        public string CurrentDatasetName = "test.csv";

        [Header("Visualization Settings")]
        public int XColumnIndex = 0;
        public int YColumnIndex = 1;
        public int ZColumnIndex = 2;
        public int ColorColumnIndex = -1;
        public float PointSize = 0.1f;

        [Header("Temporal Settings")]
        public int TimeColumnIndex = -1;
        [Range(0f, 1f)]
        public float TimeScrub = 0f;
        public bool IsPlaying = false;
        public float PlaybackSpeed = 0.25f; // scrub units (0-1) per second

        [Header("Interaction Settings")]
        public bool ShowTooltips = false;

        [Header("Loaded Dataset")]
        public DatasetColumnar LoadedDataset;

        public event Action OnDatasetLoaded;
        public event Action OnPlotSettingsChanged;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            else
            {
                Destroy(gameObject);
                return;
            }
        }

        private void OnDestroy()
        {
            if (Instance == this)
            {
                Instance = null;
            }
            Debug.Log($"[MultiplayerScatterplotManager] OnDestroy called, clearing Instance {GetEntityId()}");
        }

        private void Start()
        {
            // Check for columnar processed datasets first
            string processedDataPath = Path.Combine(Application.streamingAssetsPath, "DataCSV", "ProcessedData");

            if (Directory.Exists(processedDataPath))
            {
                string[] columnarFiles = Directory.GetFiles(processedDataPath, "*.cdataset");

                if (columnarFiles.Length > 0)
                {
                    CurrentDatasetName = Path.GetFileName(columnarFiles[0]);
                    LoadLocalDataset(CurrentDatasetName);
                    return;
                }
            }

            // Fallback to CSV files in DataCSV
            string csvDataPath = Path.Combine(Application.streamingAssetsPath, "DataCSV");

            if (Directory.Exists(csvDataPath))
            {
                string[] csvFiles = Directory.GetFiles(csvDataPath, "*.csv");

                if (csvFiles.Length > 0)
                {
                    string csvFileName = Path.GetFileName(csvFiles[0]);
                    CurrentDatasetName = csvFileName.Replace(".csv", ".cdataset");
                    LoadLocalDataset(CurrentDatasetName);
                    return;
                }
            }

            // Final fallback to regular streaming assets
            string[] streamingCsvFiles = Directory.GetFiles(Application.streamingAssetsPath, "*.csv");

            if (streamingCsvFiles.Length > 0)
            {
                CurrentDatasetName = Path.GetFileName(streamingCsvFiles[0]).Replace(".csv", ".cdataset");
                LoadLocalDataset(CurrentDatasetName);
            }
            else
            {
                Debug.LogError("No dataset files found in any expected directory.");
            }
        }

        public void LoadLocalDataset(string fileName)
        {
            // Try to load as columnar dataset first
            if (!fileName.EndsWith(".cdataset"))
            {
                fileName = fileName.Replace(".csv", ".cdataset").Replace(".dataset", ".cdataset");
            }

            LoadedDataset = ColumnarBinaryImporter.Load(fileName);

            if (LoadedDataset != null)
            {
                CurrentDatasetName = fileName;

                Debug.Log(
                    $"Loaded columnar dataset '{LoadedDataset.Name}' " +
                    $"({LoadedDataset.RowCount} rows, {LoadedDataset.ColumnCount} columns)"
                );

                OnDatasetLoaded?.Invoke();
                OnPlotSettingsChanged?.Invoke();
            }
            else
            {
                Debug.LogError(
                    $"[MultiplayerScatterplotManager] FALLING BACK TO SLOW CSV IMPORT\n" +
                    $"Columnar binary dataset failed to load: '{fileName}'\n" +
                    $"This dataset will be parsed via the legacy row-based CSVImporter, " +
                    $"which is significantly slower and was NOT the intended fast path.\n" +
                    $"Check that a matching .cdataset file exists in " +
                    $"Assets/StreamingAssets/DataCSV/ProcessedData/ (run preprocess_csv_columnar.py if not)."
                );

                // Fallback to CSV importer
                string csvFileName = fileName.Replace(".cdataset", ".csv");
                string csvPath = Path.Combine(Application.streamingAssetsPath, "DataCSV", csvFileName);
                Dataset legacyDataset = CSVImporter.Load(csvPath);

                if (legacyDataset != null)
                {
                    // Convert to columnar format (simple wrapper for now)
                    LoadedDataset = ConvertToColumnar(legacyDataset);
                    CurrentDatasetName = csvFileName;

                    Debug.Log(
                        $"Loaded legacy CSV dataset as columnar '{LoadedDataset.Name}' " +
                        $"({LoadedDataset.RowCount} rows, {LoadedDataset.ColumnCount} columns)"
                    );

                    OnDatasetLoaded?.Invoke();
                    OnPlotSettingsChanged?.Invoke();
                }
                else
                {
                    Debug.LogError($"Failed to load dataset: {fileName}");
                }
            }
        }

        private DatasetColumnar ConvertToColumnar(Dataset legacyDataset)
        {
            // Simple conversion from legacy Dataset to DatasetColumnar
            // This is a temporary compatibility layer
            DatasetColumnar columnar = new DatasetColumnar(legacyDataset.Name, legacyDataset.RowCount, legacyDataset.ColumnCount);

            // Copy column metadata
            foreach (var legacyColumn in legacyDataset.Columns)
            {
                columnar.Columns.Add(legacyColumn);
                columnar.ColumnMapping[legacyColumn.Name] = columnar.Columns.Count - 1;
            }

            // Extract column data from rows
            for (int colIndex = 0; colIndex < legacyDataset.ColumnCount; colIndex++)
            {
                DatasetColumn column = legacyDataset.Columns[colIndex];

                if (column.IsNumeric)
                {
                    float[] numericData = new float[legacyDataset.RowCount];
                    for (int rowIndex = 0; rowIndex < legacyDataset.RowCount; rowIndex++)
                    {
                        numericData[rowIndex] = legacyDataset.Rows[rowIndex].GetNumericValue(colIndex);
                    }
                    columnar.SetNumericColumn(colIndex, numericData);
                }
                else if (column.IsCategorical)
                {
                    // Build category table
                    string[] categoryTable = new string[column.UniqueCount];
                    int idx = 0;
                    foreach (string cat in column.UniqueValues)
                    {
                        categoryTable[idx++] = cat;
                    }

                    int[] categoryIndices = new int[legacyDataset.RowCount];
                    for (int rowIndex = 0; rowIndex < legacyDataset.RowCount; rowIndex++)
                    {
                        string rawValue = legacyDataset.Rows[rowIndex].GetRawValue(colIndex);
                        int catIndex = Array.IndexOf(categoryTable, rawValue);
                        categoryIndices[rowIndex] = catIndex >= 0 ? catIndex : 0;
                    }

                    columnar.SetCategoricalColumn(colIndex, categoryIndices, categoryTable);
                }
            }

            columnar.FinalizeDatasetMetadata();
            return columnar;
        }

        public void RequestLoadDatasetRpc(string fileName)
        {
            LoadLocalDataset(fileName);

            if (LoadedDataset != null)
            {
                XColumnIndex = 0;
                YColumnIndex = Mathf.Clamp(
                    1,
                    0,
                    LoadedDataset.ColumnCount - 1
                );

                ZColumnIndex = Mathf.Clamp(
                    2,
                    0,
                    LoadedDataset.ColumnCount - 1
                );

                ColorColumnIndex = -1;
                TimeColumnIndex = -1;
                TimeScrub = 0f;
                IsPlaying = false;

                OnPlotSettingsChanged?.Invoke();
            }
        }

        public void RequestXColumnRpc(int columnIndex)
        {
            XColumnIndex = columnIndex;
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestYColumnRpc(int columnIndex)
        {
            YColumnIndex = columnIndex;
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestZColumnRpc(int columnIndex)
        {
            ZColumnIndex = columnIndex;
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestColorColumnRpc(int columnIndex)
        {
            ColorColumnIndex = columnIndex;
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestPointSizeRpc(float size)
        {
            PointSize = Mathf.Clamp(size, 0f, 0.1f);
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestTimeColumnRpc(int columnIndex)
        {
            TimeColumnIndex = columnIndex;
            IsPlaying = false; // stop any running playback when the column changes
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestTimeScrubRpc(float normalizedValue)
        {
            TimeScrub = Mathf.Clamp01(normalizedValue);
            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestPlaybackToggleRpc(bool isPlaying)
        {
            IsPlaying = isPlaying;

            // If pressing play after having reached the end, loop back to the start
            if (IsPlaying && TimeScrub >= 1f)
            {
                TimeScrub = 0f;
            }

            OnPlotSettingsChanged?.Invoke();
        }

        public void RequestTooltipsToggleRpc(bool showTooltips)
        {
            ShowTooltips = showTooltips;
            // Usually, we would refresh the toggle when switching datasets, but user testing found this to be annoying, so we don't refresh the toggle anymore.
            //Code stays commented out for posterity, in case we want to re-enable this behavior in the future.
            //OnPlotSettingsChanged?.Invoke();
        }

        /// <summary>
        /// Randomizes X/Y/Z/Color/Time column selection for data exploration.
        ///
        /// Not a uniform random pick across all columns - with high-dimensional
        /// datasets that mix a handful of meaningful columns with many
        /// noise/near-constant ones (e.g. synthetic test data), a pure random
        /// pick would mostly land on uninteresting axes. Instead:
        ///   - X/Y/Z are chosen without replacement, weighted by each numeric
        ///     column's value range (MaxValue - MinValue). Wider range tends
        ///     to correlate with "carries real structure" vs. narrow-range
        ///     noise columns, and this is essentially free since range is
        ///     already computed at import time.
        ///   - Color prefers an existing categorical column (usually the
        ///     most narratively useful choice, e.g. a class/cluster label),
        ///     falling back to a weighted-random numeric column otherwise.
        ///   - Time is only enabled some of the time, and only from columns
        ///     whose name suggests they represent time steps - there's no
        ///     way to infer that purely from the data itself.
        /// </summary>
        public void RequestShuffleColumnsRpc()
        {
            if (LoadedDataset == null || LoadedDataset.ColumnCount == 0)
                return;

            int columnCount = LoadedDataset.ColumnCount;

            float[] weights = new float[columnCount];
            for (int i = 0; i < columnCount; i++)
            {
                DatasetColumn col = LoadedDataset.GetColumn(i);

                if (col == null)
                {
                    weights[i] = 0f;
                }
                else if (col.IsNumeric)
                {
                    weights[i] = Mathf.Max(0.0001f, col.MaxValue - col.MinValue);
                }
                else if (col.IsCategorical)
                {
                    // Flat weight: categorical columns can still be chosen
                    // as an axis (e.g. plotting by category ordinal), but
                    // shouldn't dominate over genuinely high-range numeric ones.
                    weights[i] = 1f;
                }
                else
                {
                    weights[i] = 0.0001f;
                }
            }

            List<int> usedIndices = new List<int>();

            int xIdx = WeightedRandomIndex(weights, usedIndices);
            usedIndices.Add(xIdx);

            int yIdx = WeightedRandomIndex(weights, usedIndices);
            usedIndices.Add(yIdx);

            int zIdx = WeightedRandomIndex(weights, usedIndices);
            usedIndices.Add(zIdx);

            XColumnIndex = xIdx;
            YColumnIndex = yIdx;
            ZColumnIndex = zIdx;

            // Color: prefer a categorical column if one exists.
            // Commented out for now, since for now we want the user to have full control over color mapping and not have it change on shuffle.
            /*List<int> categoricalCandidates = new List<int>();
            for (int i = 0; i < columnCount; i++)
            {
                DatasetColumn col = LoadedDataset.GetColumn(i);
                if (col != null && col.IsCategorical)
                {
                    categoricalCandidates.Add(i);
                }
            }
            
            if (categoricalCandidates.Count > 0)
            {
                ColorColumnIndex = categoricalCandidates[UnityEngine.Random.Range(0, categoricalCandidates.Count)];
            }
            else
            {
                ColorColumnIndex = WeightedRandomIndex(weights, usedIndices);
            }*/

            // Time: only sometimes, and only from columns that look like
            // they represent discrete time steps by name.
            // Commented out for now, since shuffling time columns is not a great user experience and can be confusing.
            /*TimeColumnIndex = -1;

            if (UnityEngine.Random.value < 0.3f)
            {
                List<int> timeCandidates = new List<int>();
                for (int i = 0; i < columnCount; i++)
                {
                    DatasetColumn col = LoadedDataset.GetColumn(i);
                    if (col != null && col.IsNumeric &&
                        col.Name.IndexOf("time", StringComparison.OrdinalIgnoreCase) >= 0)
                    {
                        timeCandidates.Add(i);
                    }
                }

                if (timeCandidates.Count > 0)
                {
                    TimeColumnIndex = timeCandidates[UnityEngine.Random.Range(0, timeCandidates.Count)];
                }
            }*/

            TimeScrub = 0f;
            IsPlaying = false;

            Debug.Log(
                $"[MultiplayerScatterplotManager] Shuffled -> " +
                $"X={LoadedDataset.GetColumn(XColumnIndex)?.Name}, " +
                $"Y={LoadedDataset.GetColumn(YColumnIndex)?.Name}, " +
                $"Z={LoadedDataset.GetColumn(ZColumnIndex)?.Name}, " +
                $"Color={(ColorColumnIndex >= 0 ? LoadedDataset.GetColumn(ColorColumnIndex)?.Name : "None")}, " +
                $"Time={(TimeColumnIndex >= 0 ? LoadedDataset.GetColumn(TimeColumnIndex)?.Name : "None")}"
            );

            OnPlotSettingsChanged?.Invoke();
        }

        /// <summary>
        /// Picks a random column index, weighted by the given weights array,
        /// skipping any index already present in excludeIndices. Falls back
        /// to uniform-random among non-excluded columns if all weights are
        /// zero (e.g. every remaining column somehow has no range).
        /// </summary>
        private int WeightedRandomIndex(float[] weights, List<int> excludeIndices)
        {
            float totalWeight = 0f;
            for (int i = 0; i < weights.Length; i++)
            {
                if (excludeIndices.Contains(i)) continue;
                totalWeight += weights[i];
            }

            if (totalWeight <= 0f)
            {
                List<int> candidates = new List<int>();
                for (int i = 0; i < weights.Length; i++)
                {
                    if (!excludeIndices.Contains(i)) candidates.Add(i);
                }
                return candidates.Count > 0 ? candidates[UnityEngine.Random.Range(0, candidates.Count)] : 0;
            }

            float roll = UnityEngine.Random.Range(0f, totalWeight);
            float cumulative = 0f;

            for (int i = 0; i < weights.Length; i++)
            {
                if (excludeIndices.Contains(i)) continue;
                cumulative += weights[i];
                if (roll <= cumulative)
                {
                    return i;
                }
            }

            for (int i = weights.Length - 1; i >= 0; i--)
            {
                if (!excludeIndices.Contains(i)) return i;
            }

            return 0;
        }

        private void Update()
        {
            if (!IsPlaying || TimeColumnIndex < 0)
                return;

            TimeScrub += PlaybackSpeed * Time.deltaTime;

            if (TimeScrub >= 1f)
            {
                TimeScrub = 1f;
                IsPlaying = false; // stop at the end rather than looping silently
            }

            OnPlotSettingsChanged?.Invoke();
        }
    }
}