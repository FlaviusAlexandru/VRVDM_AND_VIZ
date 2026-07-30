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
            string[] csvFiles = Directory.GetFiles(
                Application.streamingAssetsPath,
                "*.csv"
            );

            if (csvFiles.Length > 0)
            {
                CurrentDatasetName = Path.GetFileName(csvFiles[0]);
                LoadLocalDataset(CurrentDatasetName);
            }
            else
            {
                Debug.LogError("No CSV files found in StreamingAssets.");
            }
        }

        public void LoadLocalDataset(string fileName)
        {
            string path = Path.Combine(Application.streamingAssetsPath, fileName);

            if (!File.Exists(path))
            {
                Debug.LogError($"Dataset file not found: {path}");
                return;
            }

            LoadedDataset = CSVImporter.Load(path);

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
            PointSize = Mathf.Clamp(size, 0, 1);
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