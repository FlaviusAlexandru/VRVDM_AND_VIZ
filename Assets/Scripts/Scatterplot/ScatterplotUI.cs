using System;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DataViz
{
    public class ScatterplotUI : MonoBehaviour
    {
        [Header("References")]
        public MultiplayerScatterplotManager m_Manager;

        [Header("UI Controls")]
        public TMP_Dropdown m_DatasetDropdown;
        public TMP_Dropdown m_XColumnDropdown;
        public TMP_Dropdown m_YColumnDropdown;
        public TMP_Dropdown m_ZColumnDropdown;
        public TMP_Dropdown m_ColorColumnDropdown;
        public Slider m_PointSizeSlider;
        public TextMeshProUGUI m_PointSizeValueText;

        [Header("Temporal Controls")]
        public TMP_Dropdown m_TimeColumnDropdown;
        public Slider m_TimeScrubSlider;
        public TextMeshProUGUI m_TimeScrubValueText;
        public Button m_PlayPauseButton;
        public TextMeshProUGUI m_PlayPauseButtonText;

        [Header("Interaction Controls")]
        public Toggle m_TooltipsToggle;

        [Header("Exploration Controls")]
        public Button m_ShuffleButton;
        public Button m_ShuffleBackwardButton;
        public Button m_ShuffleForwardButton;

        [Header("Filtering Controls")]
        public TMP_Dropdown m_FilterLabelDropdown;
        public TMP_Dropdown m_FilterIndexDropdown;

        private List<string> m_AvailableDatasets = new();
        private bool m_IsUpdatingUI = false;

        private void Start()
        {
            if (m_Manager == null)
                m_Manager = MultiplayerScatterplotManager.Instance;

            // Discover CSV files in StreamingAssets
            DiscoverDatasets();

            // Setup listeners
            if (m_DatasetDropdown != null)
                m_DatasetDropdown.onValueChanged.AddListener(OnDatasetUIChanged);

            if (m_XColumnDropdown != null)
                m_XColumnDropdown.onValueChanged.AddListener(OnXColumnUIChanged);

            if (m_YColumnDropdown != null)
                m_YColumnDropdown.onValueChanged.AddListener(OnYColumnUIChanged);

            if (m_ZColumnDropdown != null)
                m_ZColumnDropdown.onValueChanged.AddListener(OnZColumnUIChanged);

            if (m_ColorColumnDropdown != null)
                m_ColorColumnDropdown.onValueChanged.AddListener(OnColorColumnUIChanged);

            if (m_PointSizeSlider != null)
                m_PointSizeSlider.onValueChanged.AddListener(OnPointSizeUIChanged);

            if (m_TimeColumnDropdown != null)
                m_TimeColumnDropdown.onValueChanged.AddListener(OnTimeColumnUIChanged);

            if (m_TimeScrubSlider != null)
                m_TimeScrubSlider.onValueChanged.AddListener(OnTimeScrubUIChanged);

            if (m_PlayPauseButton != null)
                m_PlayPauseButton.onClick.AddListener(OnPlayPauseButtonClicked);

            if (m_TooltipsToggle != null)
                m_TooltipsToggle.onValueChanged.AddListener(OnTooltipsToggleUIChanged);

            if (m_ShuffleButton != null)
                m_ShuffleButton.onClick.AddListener(OnShuffleButtonClicked);

            if (m_ShuffleBackwardButton != null)
                m_ShuffleBackwardButton.onClick.AddListener(OnShuffleBackwardButtonClicked);

            if (m_ShuffleForwardButton != null)
                m_ShuffleForwardButton.onClick.AddListener(OnShuffleForwardButtonClicked);
           
            if (m_FilterLabelDropdown != null)
                m_FilterLabelDropdown.onValueChanged.AddListener(OnFilterColumnUIChanged);
            
            if (m_FilterIndexDropdown != null)
                m_FilterIndexDropdown.onValueChanged.AddListener(OnFilterIndexUIChanged);

            // Sync with Manager updates
            if (m_Manager != null)
            {
                m_Manager.OnDatasetLoaded += OnDatasetLoadedFromManager;
                m_Manager.OnPlotSettingsChanged += SyncUIWithManager;
            }

            // Perform initial setup
            OnDatasetLoadedFromManager();
            SyncUIWithManager();
        }

        private void OnDestroy()
        {
            if (m_Manager != null)
            {
                m_Manager.OnDatasetLoaded -= OnDatasetLoadedFromManager;
                m_Manager.OnPlotSettingsChanged -= SyncUIWithManager;
            }
        }

        private void DiscoverDatasets()
        {
            if (m_DatasetDropdown == null) return;

            m_AvailableDatasets.Clear();
            m_DatasetDropdown.ClearOptions();

            // Check for columnar datasets first
            string processedDataPath = Path.Combine(Application.streamingAssetsPath, "DataCSV", "ProcessedData");
            if (Directory.Exists(processedDataPath))
            {
                string[] columnarFiles = Directory.GetFiles(processedDataPath, "*.cdataset");
                foreach (string file in columnarFiles)
                {
                    m_AvailableDatasets.Add(Path.GetFileName(file));
                }
            }

            // Fallback to CSV files in DataCSV
            string csvDataPath = Path.Combine(Application.streamingAssetsPath, "DataCSV");
            if (Directory.Exists(csvDataPath) && m_AvailableDatasets.Count == 0)
            {
                string[] csvFiles = Directory.GetFiles(csvDataPath, "*.csv");
                foreach (string file in csvFiles)
                {
                    m_AvailableDatasets.Add(Path.GetFileName(file));
                }
            }

            // Final fallback to streaming assets root
            string saPath = Application.streamingAssetsPath;
            if (Directory.Exists(saPath) && m_AvailableDatasets.Count == 0)
            {
                string[] files = Directory.GetFiles(saPath, "*.csv");
                foreach (string file in files)
                {
                    m_AvailableDatasets.Add(Path.GetFileName(file));
                }
            }

            // Fallback default in case no files found
            if (m_AvailableDatasets.Count == 0)
            {
                m_AvailableDatasets.Add("iris.csv");
                m_AvailableDatasets.Add("cars.csv");
            }

            m_DatasetDropdown.AddOptions(m_AvailableDatasets);
        }

        private void OnDatasetLoadedFromManager()
        {
            if (m_Manager == null || m_Manager.LoadedDataset == null) return;

            // Populate the X, Y, Z, Color column dropdown options
            List<string> columns = new();

            foreach (var col in m_Manager.LoadedDataset.Columns)
            {
                columns.Add(col.Name);
            }

            m_XColumnDropdown.ClearOptions();
            m_XColumnDropdown.AddOptions(columns);

            m_YColumnDropdown.ClearOptions();
            m_YColumnDropdown.AddOptions(columns);

            m_ZColumnDropdown.ClearOptions();
            m_ZColumnDropdown.AddOptions(columns);

            m_ColorColumnDropdown.ClearOptions();
            List<string> colorOptions = new() { "None (Default)" };
            colorOptions.AddRange(columns);
            m_ColorColumnDropdown.AddOptions(colorOptions);

            if (m_TimeColumnDropdown != null)
            {
                m_TimeColumnDropdown.ClearOptions();
                List<string> timeOptions = new() { "None (Static)" };
                timeOptions.AddRange(columns);
                m_TimeColumnDropdown.AddOptions(timeOptions);
            }

            // Populate filter column dropdown options
            if (m_FilterLabelDropdown != null)
            {
                m_FilterLabelDropdown.ClearOptions();
                List<string> filterOptions = new() { "None" };
                filterOptions.AddRange(columns);
                m_FilterLabelDropdown.AddOptions(filterOptions);
                Debug.Log($"[ScatterplotUI] Filter column dropdown options updated. Total options: {filterOptions.Count}");
            }

            SyncUIWithManager();
        }

        private void SyncUIWithManager()
        {
            if (m_Manager == null || m_IsUpdatingUI) return;

            m_IsUpdatingUI = true;

            // Sync Dataset
            string currentDataset = m_Manager.CurrentDatasetName.ToString();
            int datasetIdx = m_AvailableDatasets.IndexOf(currentDataset);
            if (datasetIdx >= 0 && m_DatasetDropdown != null)
            {
                m_DatasetDropdown.value = datasetIdx;
            }

            // Sync Column dropdown values
            if (m_XColumnDropdown != null) m_XColumnDropdown.value = m_Manager.XColumnIndex;
            if (m_YColumnDropdown != null) m_YColumnDropdown.value = m_Manager.YColumnIndex;
            if (m_ZColumnDropdown != null) m_ZColumnDropdown.value = m_Manager.ZColumnIndex;
            if (m_ColorColumnDropdown != null) m_ColorColumnDropdown.value = m_Manager.ColorColumnIndex + 1; // +1 due to "None" option

            // Sync Point Size
            if (m_PointSizeSlider != null)
            {
                m_PointSizeSlider.value = m_Manager.PointSize;
            }
            if (m_PointSizeValueText != null)
            {
                m_PointSizeValueText.text = m_Manager.PointSize.ToString("F3");
            }

            // Sync Time controls
            if (m_TimeColumnDropdown != null)
                m_TimeColumnDropdown.value = m_Manager.TimeColumnIndex + 1; // +1 due to "None" option

            if (m_TimeScrubSlider != null)
                m_TimeScrubSlider.value = m_Manager.TimeScrub;

            if (m_TimeScrubValueText != null)
                m_TimeScrubValueText.text = m_Manager.TimeScrub.ToString("P0");

            if (m_PlayPauseButtonText != null)
                m_PlayPauseButtonText.text = m_Manager.IsPlaying ? "Pause" : "Play";

            // Sync tooltip toggle
            if (m_TooltipsToggle != null)
                m_TooltipsToggle.isOn = m_Manager.ShowTooltips;

            // Sync filter settings
            if (m_FilterLabelDropdown != null)
            {
                int filterColumnUIValue = m_Manager.FilterColumnIndex + 1; // +1 offset for "None"
                m_FilterLabelDropdown.value = filterColumnUIValue;

                // Populate index options for the current active filter column
                PopulateFilterIndexDropdown(m_Manager.FilterColumnIndex);
            }

            if (m_FilterIndexDropdown != null && !string.IsNullOrEmpty(m_Manager.FilterLabel))
            {
                int matchIndex = m_FilterIndexDropdown.options.FindIndex(opt => opt.text == m_Manager.FilterLabel);
                if (matchIndex >= 0)
                {
                    m_FilterIndexDropdown.value = matchIndex;
                }
            }

            m_IsUpdatingUI = false;
        }

        #region UI Change Event Handlers

        private void OnDatasetUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            string selectedFile = m_AvailableDatasets[idx];

            // Convert CSV to .cdataset for loading
            if (selectedFile.EndsWith(".csv"))
            {
                selectedFile = selectedFile.Replace(".csv", ".cdataset");
            }

            m_Manager.RequestLoadDatasetRpc(selectedFile);
        }

        private void OnXColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestXColumnRpc(idx);
        }

        private void OnYColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestYColumnRpc(idx);
        }

        private void OnZColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestZColumnRpc(idx);
        }

        private void OnColorColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestColorColumnRpc(idx - 1); // -1 maps 0 ("None") to -1 (disabled)
        }

        private void OnPointSizeUIChanged(float val)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestPointSizeRpc(val);
        }

        private void OnTimeColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestTimeColumnRpc(idx - 1); // -1 maps 0 ("None") to -1 (disabled)
        }

        private void OnTimeScrubUIChanged(float val)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestTimeScrubRpc(val);
        }

        private void OnPlayPauseButtonClicked()
        {
            if (m_Manager == null) return;
            m_Manager.RequestPlaybackToggleRpc(!m_Manager.IsPlaying);
        }

        private void OnTooltipsToggleUIChanged(bool isOn)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            m_Manager.RequestTooltipsToggleRpc(isOn);
        }

        private void OnShuffleButtonClicked()
        {
            if (m_Manager == null) return;
            m_Manager.RequestShuffleColumnsRpc();
        }

        private void OnShuffleBackwardButtonClicked()
        {
            if (m_Manager == null) return;
            m_Manager.RequestShuffleBackwardRpc();
        }

        private void OnShuffleForwardButtonClicked()
        {
            if (m_Manager == null) return;
            m_Manager.RequestShuffleForwardRpc();
        }
        private void OnFilterColumnUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;

            int actualColumnIndex = idx - 1; // -1 maps 0 ("None") to -1 (disabled)
            m_Manager.RequestFilterIndexRpc(actualColumnIndex);

            // Update the second dropdown (Filter Values/Indices) based on selected column
            PopulateFilterIndexDropdown(actualColumnIndex);
        }

        private void PopulateFilterIndexDropdown(int columnIndex)
        {
            if (m_FilterIndexDropdown == null) return;

            m_FilterIndexDropdown.ClearOptions();

            if (columnIndex < 0 || m_Manager == null || m_Manager.LoadedDataset == null)
            {
                m_FilterIndexDropdown.interactable = false;
                Debug.Log($"[ScatterplotUI] Filter index dropdown disabled: columnIndex={columnIndex}");
                return;
            }

            DatasetColumn col = m_Manager.LoadedDataset.GetColumn(columnIndex);
            if (col == null)
            {
                Debug.LogWarning($"[ScatterplotUI] Column at index {columnIndex} is null");
                return;
            }

            Debug.Log($"[ScatterplotUI] Populating filter for column '{col.Name}' - Type: {col.Type}, IsNumeric: {col.IsNumeric}, IsCategorical: {col.IsCategorical}, UniqueValues.Count: {col.UniqueValues.Count}");

            m_FilterIndexDropdown.interactable = true;
            List<string> options = new List<string>();

            // Handle numeric columns by building unique values from the data
            if (col.IsNumeric && col.UniqueValues.Count == 0)
            {
                Debug.Log($"[ScatterplotUI] Numeric column '{col.Name}' with no UniqueValues - extracting from data...");
                
                HashSet<string> uniqueNumericValues = new HashSet<string>();
                for (int rowIndex = 0; rowIndex < m_Manager.LoadedDataset.RowCount; rowIndex++)
                {
                    float value = m_Manager.LoadedDataset.GetNumericValue(rowIndex, columnIndex);
                    uniqueNumericValues.Add(value.ToString());
                }
                
                List<string> sortedValues = new List<string>(uniqueNumericValues);
                sortedValues.Sort((a, b) =>
                {
                    if (float.TryParse(a, out float numA) && float.TryParse(b, out float numB))
                    {
                        return numA.CompareTo(numB);
                    }
                    return string.Compare(a, b, StringComparison.Ordinal);
                });
                
                options.AddRange(sortedValues);
                Debug.Log($"[ScatterplotUI] Extracted {options.Count} unique numeric values from column '{col.Name}'");
            }
            // Handle categorical columns
            else if (col.UniqueValues != null && col.UniqueValues.Count > 0)
            {
                List<string> sortedValues = new List<string>(col.UniqueValues);
                sortedValues.Sort((a, b) =>
                {
                    // Try to parse both as numbers
                    if (float.TryParse(a, out float numA) && float.TryParse(b, out float numB))
                    {
                        return numA.CompareTo(numB);
                    }
                    
                    return string.Compare(a, b, StringComparison.Ordinal);
                });
                
                options.AddRange(sortedValues);
                Debug.Log($"[ScatterplotUI] Populated filter index dropdown with {options.Count} values for column '{col.Name}'");
            }
            else
            {
                options.Add("All Values");
                Debug.Log($"[ScatterplotUI] No unique values found for column '{col.Name}' - using 'All Values'");
            }

            m_FilterIndexDropdown.AddOptions(options);
        }

        private void OnFilterIndexUIChanged(int idx)
        {
            if (m_IsUpdatingUI || m_Manager == null) return;
            
            // Get the selected filter value from the dropdown
            if (m_FilterIndexDropdown != null && idx >= 0 && idx < m_FilterIndexDropdown.options.Count)
            {
                string selectedValue = m_FilterIndexDropdown.options[idx].text;
                m_Manager.RequestFilterLabelRpc(selectedValue);
            }
        }

        #endregion
    }
}