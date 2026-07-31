using System;
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
        public Dataset LoadedDataset;

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
            // Check for processed datasets first
            string processedDataPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", "ProcessedData");
            
            if (Directory.Exists(processedDataPath))
            {
                string[] processedFiles = Directory.GetFiles(processedDataPath, "*.dataset");
                
                if (processedFiles.Length > 0)
                {
                    CurrentDatasetName = Path.GetFileName(processedFiles[0]);
                    LoadLocalDataset(CurrentDatasetName);
                    return;
                }
            }
            
            // Fallback to raw CSV files
            string rawDataPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData");
            
            if (Directory.Exists(rawDataPath))
            {
                string[] rawCsvFiles = Directory.GetFiles(rawDataPath, "*.csv");
                
                if (rawCsvFiles.Length > 0)
                {
                    CurrentDatasetName = Path.GetFileName(rawCsvFiles[0]).Replace(".csv", ".dataset");
                    LoadLocalDataset(CurrentDatasetName);
                    return;
                }
            }
            
            // Final fallback to regular streaming assets
            string[] csvFiles = Directory.GetFiles(Application.streamingAssetsPath, "*.csv");
            
            if (csvFiles.Length > 0)
            {
                CurrentDatasetName = Path.GetFileName(csvFiles[0]).Replace(".csv", ".dataset");
                LoadLocalDataset(CurrentDatasetName);
            }
            else
            {
                Debug.LogError("No dataset files found in any expected directory.");
            }
        }

        public void LoadLocalDataset(string fileName)
        {
            // Try to load as processed dataset first
            if (!fileName.EndsWith(".dataset"))
            {
                fileName = fileName.Replace(".csv", ".dataset");
            }

            LoadedDataset = BinaryImporter.Load(fileName);

            if (LoadedDataset != null)
            {
                CurrentDatasetName = fileName;

                Debug.Log(
                    $"Loaded dataset '{LoadedDataset.Name}' " +
                    $"({LoadedDataset.RowCount} rows, {LoadedDataset.ColumnCount} columns)"
                );

                OnDatasetLoaded?.Invoke();
                OnPlotSettingsChanged?.Invoke();
            }
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
            OnPlotSettingsChanged?.Invoke();
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