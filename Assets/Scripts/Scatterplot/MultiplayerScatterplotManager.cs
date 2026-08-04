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
            string processedDataPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", "ProcessedData");

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

            // Fallback to legacy processed datasets
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
                    CurrentDatasetName = Path.GetFileName(rawCsvFiles[0]).Replace(".csv", ".cdataset");
                    LoadLocalDataset(CurrentDatasetName);
                    return;
                }
            }

            // Final fallback to regular streaming assets
            string[] csvFiles = Directory.GetFiles(Application.streamingAssetsPath, "*.csv");

            if (csvFiles.Length > 0)
            {
                CurrentDatasetName = Path.GetFileName(csvFiles[0]).Replace(".csv", ".cdataset");
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
                    $"Assets/StreamingAssetsRawData/ProcessedData/ (run preprocess_csv_columnar.py if not)."
                );

                // Fallback to CSV importer
                string csvFileName = fileName.Replace(".cdataset", ".csv");
                Dataset legacyDataset = CSVImporter.Load(csvFileName);

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