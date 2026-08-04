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

            //Debug.Log($"[ScatterplotUI] Dataset loaded: {m_Manager.CurrentDatasetName}, Columns: {string.Join(", ", columns)}");

            foreach (var col in m_Manager.LoadedDataset.Columns)
            {

                //Debug.Log(col.Name);
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

        #endregion
    }
}