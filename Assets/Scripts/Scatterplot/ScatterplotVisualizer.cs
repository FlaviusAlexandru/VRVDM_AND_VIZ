using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace DataViz
{
    public class ScatterplotVisualizer : MonoBehaviour
    {
        [Header("References")]
        public MultiplayerScatterplotManager m_Manager;
        public GameObject m_AxisLabelPrefab; // TMPro in world space
        public CoordinateSystemInteractable m_CoordinateSystemInteractable; // For grab/scaling functionality

        [Header("Visualization Settings")]
        public float m_AxisLength = 1.0f; // Size of the 3D grid
        public Material m_PointMaterial; // Shared material to clone
        public Material m_AxisMaterial;

        [Header("Filtering Settings")]
        [Tooltip("Alpha applied to points that don't match the active filter. They stay in the " +
                 "buffer (so tooltips/positions are unaffected) but fade toward transparent instead " +
                 "of being removed from the plot.")]
        [Range(0f, 1f)]
        public float m_FilteredOutAlpha = 0.08f;

        // Parent container for points
        private Transform m_PointsContainer;
        private Transform m_AxesContainer;

        private List<GameObject> m_ActivePoints = new();
        private List<GameObject> m_ActiveAxes = new();

        public ScatterplotVFXRenderer m_GPUPoints;
        public GPUPointInteractable m_GPUInteractable;

        public VisualizationGridSettings m_GridSettings;

        private void Start()
        {
            if (m_Manager == null)
                m_Manager = MultiplayerScatterplotManager.Instance;

            if (m_Manager != null) { m_Manager.OnPlotSettingsChanged += RegeneratePlot; }

            // Create containers
            m_PointsContainer = new GameObject("Points").transform;
            m_PointsContainer.SetParent(transform, false);
            m_PointsContainer.localPosition = new Vector3(-m_AxisLength / 2f, -m_AxisLength / 2f, -m_AxisLength / 2f);

            m_AxesContainer = new GameObject("Axes").transform;
            m_AxesContainer.SetParent(transform, false);
            m_AxesContainer.localPosition = new Vector3(-m_AxisLength / 2f, -m_AxisLength / 2f, -m_AxisLength / 2f);

            // Default material if none assigned
            if (m_PointMaterial == null) { m_PointMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit")); }
            if (m_AxisMaterial == null)
            {
                m_AxisMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit"));
                m_AxisMaterial.color = Color.white;
            }

            if (m_GPUPoints == null) { m_GPUPoints = GetComponent<ScatterplotVFXRenderer>(); }
            if (m_GPUInteractable == null) { m_GPUInteractable = GetComponent<GPUPointInteractable>(); }
            if (m_GPUInteractable != null) { m_GPUInteractable.m_Visualizer = this; }

            if (m_GPUPoints == null)
            {
                Debug.LogError(
                    "ScatterplotVisualizer: No ScatterplotInstancedRenderer found."
                );
            }

            if (m_GPUInteractable == null)
            {
                Debug.LogWarning(
                    "ScatterplotVisualizer: No GPUPointInteractable found."
                );
            }

            if (m_GridSettings == null)
            {
                m_GridSettings = GetComponent<VisualizationGridSettings>();
            }
            if (m_GridSettings == null)
            {
                Debug.LogWarning("ScatterplotVisualizer: No VisualizationGridSettings found. Using default settings.");
            }

            // Find coordinate system interactable if not assigned
            if (m_CoordinateSystemInteractable == null)
            {
                m_CoordinateSystemInteractable = GetComponent<CoordinateSystemInteractable>();
            }

            RegeneratePlot();
        }

        private void OnEnable()
        {
            Debug.Log($"Visualizer enabled {GetEntityId()}");
        }

        private void OnDestroy()
        {
            Debug.Log($"Visualizer destroyed {GetEntityId()}");
            if (m_Manager != null) { m_Manager.OnPlotSettingsChanged -= RegeneratePlot; }
        }

        public void RegeneratePlot()
        {
            ClearPoints();
            ClearAxes();

            Debug.Log($"[ScatterplotVisualizer] Plot Regeneration Called");

            if (m_Manager == null || m_Manager.LoadedDataset == null)
                return;

            DatasetColumnar dataset = m_Manager.LoadedDataset as DatasetColumnar;
            if (dataset == null)
            {
                Debug.LogError("ScatterplotVisualizer requires DatasetColumnar. Current dataset is not columnar.");
                return;
            }
            int xCol = m_Manager.XColumnIndex;
            int yCol = m_Manager.YColumnIndex;
            int zCol = m_Manager.ZColumnIndex;
            int colorCol = m_Manager.ColorColumnIndex;
            int timeCol = m_Manager.TimeColumnIndex;
            float pointSize = m_Manager.PointSize;

            // 1. Build Grid and Axes Visuals
            BuildAxesAndGrid(dataset, xCol, yCol, zCol);

            // 2. Setup GPU Instanced Point Arrays
            List<Vector3> positions = new List<Vector3>(dataset.RowCount);
            List<Color> colors = new List<Color>(dataset.RowCount);

            // Tracks, for each entry in positions/colors, which original
            // dataset row it came from. Needed because time-filtering means
            // positions[i] is NO LONGER guaranteed to be dataset.Rows[i] -
            // GPUPointInteractable relies on this mapping for tooltips.
            List<int> visibleRowIndices = new List<int>(dataset.RowCount);
            List<int> glyphIndices = new List<int>(dataset.RowCount);

            // Column references
            DatasetColumn xColumn = (xCol >= 0 && xCol < dataset.ColumnCount) ? dataset.Columns[xCol] : null;
            DatasetColumn yColumn = (yCol >= 0 && yCol < dataset.ColumnCount) ? dataset.Columns[yCol] : null;
            DatasetColumn zColumn = (zCol >= 0 && zCol < dataset.ColumnCount) ? dataset.Columns[zCol] : null;
            DatasetColumn colorColumn = (colorCol >= 0 && colorCol < dataset.ColumnCount) ? dataset.Columns[colorCol] : null;
            DatasetColumn timeColumn = (timeCol >= 0 && timeCol < dataset.ColumnCount) ? dataset.Columns[timeCol] : null;

            // Time filtering: TimeScrub (0-1) maps across the column's actual
            // min/max range. We snap to the nearest whole step rather than
            // requiring an exact float match, since real time values will
            // rarely land exactly on the interpolated target - and discrete
            // datasets like moving_clusters.csv use whole-number steps anyway.
            bool timeFilterActive = timeColumn != null && timeColumn.IsNumeric;
            int currentTimeStep = 0;

            if (timeFilterActive)
            {
                float targetValue = Mathf.Lerp(timeColumn.MinValue, timeColumn.MaxValue, m_Manager.TimeScrub);
                currentTimeStep = Mathf.RoundToInt(targetValue);
            }

            // Value filtering (FilterColumnIndex / FilterLabel): unlike the time filter above,
            // non-matching rows are NOT skipped - they stay in the buffer at a dimmed alpha so
            // they visually fade away instead of disappearing. This keeps row counts/indices
            // stable for GPUPointInteractable and avoids the plot "jumping" as points vanish.
            int filterCol = m_Manager.FilterColumnIndex;
            bool filterActive = filterCol >= 0 && filterCol < dataset.ColumnCount &&
                                 !string.IsNullOrEmpty(m_Manager.FilterLabel);
            DatasetColumn filterColumn = filterActive ? dataset.Columns[filterCol] : null;

            // Snapshot the categorical lookup table once per regenerate rather than per-row.
            List<string> filterCategoryTable = (filterActive && filterColumn.IsCategorical)
                ? new List<string>(filterColumn.UniqueValues)
                : null;

            if (filterActive && !filterColumn.IsCategorical && !filterColumn.IsNumeric)
            {
                Debug.LogWarning($"[ScatterplotVisualizer] Filter column '{filterColumn.Name}' is neither " +
                                  $"categorical nor numeric - filter will not dim any points.");
            }

            // Glyph column: independent of X/Y/Z (same as colorCol), so users can encode a
            // dimension via shape even when it isn't one of the plotted axes. The actual
            // shape per label is a manual mapping (m_Manager.GlyphAssignments), looked up
            // per row below; labels with no assignment yet default to glyph 0.
            int glyphCol = m_Manager.GlyphColumnIndex;
            bool glyphActive = glyphCol >= 0 && glyphCol < dataset.ColumnCount;
            DatasetColumn glyphColumn = glyphActive ? dataset.Columns[glyphCol] : null;
            List<string> glyphCategoryTable = (glyphActive && glyphColumn.IsCategorical)
                ? new List<string>(glyphColumn.UniqueValues)
                : null;

            if (colorColumn != null)
            {
                Debug.Log($"[Color Debug] Col Name: '{colorColumn.Name}' | Index: {colorCol} | Min: {colorColumn.MinValue} | Max: {colorColumn.MaxValue} | IsNumeric: {colorColumn.IsNumeric}");
            }
            else
            {
                Debug.LogWarning($"[Color Debug] colorColumn is NULL! colorCol index was: {colorCol}");
            }

            Color[] categoricalPalette = new Color[]
            {
                Color.red, Color.blue, Color.green, Color.yellow, Color.cyan, Color.magenta,
                new Color(1f, 0.5f, 0f), new Color(0.5f, 0f, 0.5f), new Color(0f, 0.5f, 0.5f),
                new Color(0.7f, 0.2f, 0.2f), new Color(0.2f, 0.7f, 0.2f), new Color(0.2f, 0.2f, 0.7f)
            };

            Vector3 basePosition = m_PointsContainer.localPosition;

            for (int i = 0; i < dataset.RowCount; i++)
            {
                // 0. Time filter - skip this row entirely if it doesn't
                // belong to the currently-selected time step.
                if (timeFilterActive)
                {
                    float rawTimeValue = dataset.GetNumericValue(i, timeCol);
                    if (Mathf.RoundToInt(rawTimeValue) != currentTimeStep)
                    {
                        continue;
                    }
                }

                // 1. Calculate spatial positions using columnar data
                float xNorm = xColumn != null ? dataset.GetNormalizedValue(i, xCol) : 0f;
                float yNorm = yColumn != null ? dataset.GetNormalizedValue(i, yCol) : 0f;
                float zNorm = zColumn != null ? dataset.GetNormalizedValue(i, zCol) : 0f;

                Vector3 worldPos = basePosition + (new Vector3(xNorm, yNorm, zNorm) * m_AxisLength);
                positions.Add(worldPos);

                // 2. Calculate point color directly using columnar data
                Color pointColor = Color.cyan;

                if (colorColumn != null && colorCol >= 0 && colorCol < dataset.ColumnCount)
                {
                    if (colorColumn.IsNumeric)
                    {
                        // Safely compute normalized gradient directly using global column bounds
                        float rawVal = dataset.GetNumericValue(i, colorCol);
                        float range = colorColumn.MaxValue - colorColumn.MinValue;
                        float norm = 0.5f;

                        if (range > 0.00001f)
                        {
                            norm = (rawVal - colorColumn.MinValue) / range;
                        }

                        norm = Mathf.Clamp01(norm);
                        pointColor = Color.Lerp(Color.blue, Color.red, norm);
                    }
                    else if (colorColumn.IsCategorical)
                    {
                        int catIdx = dataset.GetCategoryIndex(i, colorCol);
                        pointColor = categoricalPalette[catIdx % categoricalPalette.Length];
                    }
                }

                // 3. Dim (rather than exclude) rows that don't match the active filter.
                if (filterActive)
                {
                    bool matches = RowMatchesFilter(dataset, i, filterCol, filterColumn, filterCategoryTable, m_Manager.FilterLabel);
                    pointColor.a = matches ? 1f : m_FilteredOutAlpha;
                }

                // 4. Look up this row's manually-assigned glyph on the active glyph column.
                int glyphIndex = 0;
                if (glyphActive)
                {
                    string rowLabel = GetRowLabel(dataset, i, glyphCol, glyphColumn, glyphCategoryTable);
                    glyphIndex = m_Manager.GetGlyphForLabel(rowLabel, 0);
                }
                glyphIndices.Add(glyphIndex);

                colors.Add(pointColor);
                visibleRowIndices.Add(i);
            }



            m_GPUPoints.BuildAdvanced(
                positions,
                colors,
                pointSize,
                null, // glossiness - not yet exposed as a mapped dimension
                null, // metallic - not yet exposed as a mapped dimension
                glyphIndices
            );

            // Also update the interactable with point data

            if (m_GPUInteractable != null)
            {
                m_GPUInteractable.SetPointData(
                    positions,
                    colors,
                    pointSize,
                    visibleRowIndices
                );
            }

            //TEMPORARILY COMMENTED OUT WHILE I TRY OUT GPU INSTANCING
            /*
            for (int i = 0; i < dataset.RowCount; i++)
            {
                DatasetRow row = dataset.Rows[i];

                float xNorm = row.GetNormalizedValue(xCol);
                float yNorm = row.GetNormalizedValue(yCol);
                float zNorm = row.GetNormalizedValue(zCol);

                Vector3 localPosition = new Vector3(xNorm, yNorm, zNorm) * m_AxisLength;

                // Create point sphere
                GameObject pointObj = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                pointObj.name = $"Point_{i}";
                pointObj.transform.SetParent(m_PointsContainer, false);
                pointObj.transform.localPosition = localPosition;
                pointObj.transform.localScale = Vector3.one * pointSize;

                // Disable default sphere collider collision (avoid pushing player) and set as trigger
                SphereCollider col = pointObj.GetComponent<SphereCollider>();
                if (col != null)
                {
                    col.isTrigger = true;
                }

                // Apply material and color
                Renderer renderer = pointObj.GetComponent<Renderer>();
                if (renderer != null)
                {
                    Material matInstance = Instantiate(m_PointMaterial);
                    
                    Color pointColor = Color.cyan; // Default color
                    if (colorCol >= 0 && colorCol < dataset.ColumnCount)
                    {
                        var colMeta = dataset.Columns[colorCol];
                        if (colMeta.IsNumeric)
                        {
                            // Numeric Gradient: Blue to Red
                            float colorNorm = row.GetNormalizedValue(colorCol);
                            pointColor = Color.Lerp(Color.blue, Color.red, colorNorm);
                        }
                        else if (colMeta.IsCategorical)
                        {
                            // Categorical Palette mapping
                            string rawVal = row.GetRawValue(colorCol);
                            int catIdx = uniqueColorCategories.IndexOf(rawVal);
                            if (catIdx >= 0)
                            {
                                pointColor = palette[catIdx % palette.Length];
                            }
                        }
                    }
                    matInstance.color = pointColor;
                    renderer.sharedMaterial = matInstance;
                }

                // Add Hover/Tooltip mechanics
                DataPointInteractable dpi = pointObj.AddComponent<DataPointInteractable>();
                
                // Add TMPro Tooltip inside each point
                GameObject tooltipObj = new GameObject("TooltipCanvas");
                tooltipObj.transform.SetParent(pointObj.transform, false);
                tooltipObj.transform.localPosition = new Vector3(0, 1.5f, 0); // Position slightly above the point
                tooltipObj.transform.localScale = Vector3.one * (0.2f / pointSize); // Keep tooltip readable regardless of point size

                Canvas canvas = tooltipObj.AddComponent<Canvas>();
                canvas.renderMode = RenderMode.WorldSpace;
                
                RectTransform rect = tooltipObj.GetComponent<RectTransform>();
                rect.sizeDelta = new Vector2(300, 180);

                // Add background panel
                GameObject bgObj = new GameObject("Background");
                bgObj.transform.SetParent(tooltipObj.transform, false);
                UnityEngine.UI.Image bgImg = bgObj.AddComponent<UnityEngine.UI.Image>();
                bgImg.color = new Color(0, 0, 0, 0.85f);
                RectTransform bgRect = bgObj.GetComponent<RectTransform>();
                bgRect.anchorMin = Vector2.zero;
                bgRect.anchorMax = Vector2.one;
                bgRect.sizeDelta = Vector2.zero;

                // Add TextMeshPro
                GameObject textObj = new GameObject("Text");
                textObj.transform.SetParent(tooltipObj.transform, false);
                TextMeshProUGUI tmpText = textObj.AddComponent<TextMeshProUGUI>();
                tmpText.fontSize = 18;
                tmpText.alignment = TextAlignmentOptions.Left;
                tmpText.enableWordWrapping = true;
                tmpText.color = Color.white;
                
                RectTransform textRect = textObj.GetComponent<RectTransform>();
                textRect.anchorMin = Vector2.zero;
                textRect.anchorMax = Vector2.one;
                textRect.sizeDelta = new Vector2(-20, -20); // Margin
                textRect.anchoredPosition = Vector2.zero;

                // Setup tooltip reference
                dpi.m_TooltipObject = tooltipObj;
                dpi.m_TooltipText = tmpText;
                dpi.SetupTooltip(row, dataset, xCol, yCol, zCol, colorCol);

                // Hide tooltip initially
                tooltipObj.SetActive(false);

                m_ActivePoints.Add(pointObj);
            }
            */

        }

        private void BuildAxesAndGrid(DatasetColumnar dataset, int xCol, int yCol, int zCol)
        {
            // Build X, Y, Z Axis cylinders
            CreateAxisLine(Vector3.zero, new Vector3(m_AxisLength, 0, 0), Color.red, "X-Axis");
            CreateAxisLine(Vector3.zero, new Vector3(0, m_AxisLength, 0), Color.green, "Y-Axis");
            CreateAxisLine(Vector3.zero, new Vector3(0, 0, m_AxisLength), Color.blue, "Z-Axis");

            if (m_GridSettings != null && m_GridSettings.ShowGridPlanes)
            {
                CreateGridPlaneXY();
                CreateGridPlaneXZ();
                CreateGridPlaneYZ();
            }
            if (m_GridSettings != null && m_GridSettings.ShowTickMarks)
            {
                CreateTickMarks();
            }
            if (m_GridSettings != null && m_GridSettings.ShowValueLabels)
            {
                CreateTickLabels(
                    dataset,
                    xCol,
                    yCol,
                    zCol);
            }


            // Build Wireframe cube around scatterplot boundaries
            CreateGridLine(new Vector3(m_AxisLength, 0, 0), new Vector3(m_AxisLength, m_AxisLength, 0));
            CreateGridLine(new Vector3(0, m_AxisLength, 0), new Vector3(m_AxisLength, m_AxisLength, 0));
            CreateGridLine(new Vector3(0, 0, m_AxisLength), new Vector3(m_AxisLength, 0, m_AxisLength));
            CreateGridLine(new Vector3(m_AxisLength, 0, 0), new Vector3(m_AxisLength, 0, m_AxisLength));

            CreateGridLine(new Vector3(0, m_AxisLength, 0), new Vector3(0, m_AxisLength, m_AxisLength));
            CreateGridLine(new Vector3(0, 0, m_AxisLength), new Vector3(0, m_AxisLength, m_AxisLength));

            CreateGridLine(new Vector3(m_AxisLength, m_AxisLength, 0), new Vector3(m_AxisLength, m_AxisLength, m_AxisLength));
            CreateGridLine(new Vector3(0, m_AxisLength, m_AxisLength), new Vector3(m_AxisLength, m_AxisLength, m_AxisLength));
            CreateGridLine(new Vector3(m_AxisLength, 0, m_AxisLength), new Vector3(m_AxisLength, m_AxisLength, m_AxisLength));

            // Axis labels names and ranges
            if (xCol >= 0 && xCol < dataset.ColumnCount)
                CreateAxisLabel(dataset.Columns[xCol], new Vector3(m_AxisLength / 2f, -0.1f, 0), "X_Label");

            if (yCol >= 0 && yCol < dataset.ColumnCount)
                CreateAxisLabel(dataset.Columns[yCol], new Vector3(-0.1f, m_AxisLength / 2f, 0), "Y_Label");

            if (zCol >= 0 && zCol < dataset.ColumnCount)
                CreateAxisLabel(dataset.Columns[zCol], new Vector3(0, -0.1f, m_AxisLength / 2f), "Z_Label");
        }


        private void CreateGridPlaneXY()
        {
            float spacing =
                m_GridSettings.MinorGridSpacing;

            float major =
                m_GridSettings.MajorGridSpacing;

            for (float x = 0; x <= m_AxisLength; x += spacing)
            {
                bool isMajor = Mathf.Approximately(x % major, 0f);
                CreateGridLine(
                    new Vector3(x, 0, 0),
                    new Vector3(x, m_AxisLength, 0),
                    isMajor
                );
            }

            for (float y = 0; y <= m_AxisLength; y += spacing)
            {
                bool isMajor = Mathf.Approximately(y % major, 0f);
                CreateGridLine(
                    new Vector3(0, y, 0),
                    new Vector3(m_AxisLength, y, 0),
                    isMajor
                );
            }
        }

        private void CreateGridPlaneXZ()
        {
            float spacing =
                m_GridSettings.MinorGridSpacing;
            float major =
                m_GridSettings.MajorGridSpacing;

            for (float x = 0; x <= m_AxisLength; x += spacing)
            {
                bool isMajor = Mathf.Approximately(x % major, 0f);
                CreateGridLine(
                    new Vector3(x, 0, 0),
                    new Vector3(x, 0, m_AxisLength),
                    isMajor
                );
            }

            for (float z = 0; z <= m_AxisLength; z += spacing)
            {
                bool isMajor = Mathf.Approximately(z % major, 0f);
                CreateGridLine(
                    new Vector3(0, 0, z),
                    new Vector3(m_AxisLength, 0, z),
                    isMajor
                );
            }
        }

        private void CreateGridPlaneYZ()
        {
            float spacing =
                m_GridSettings.MinorGridSpacing;
            float major =
                m_GridSettings.MajorGridSpacing;
            for (float y = 0; y <= m_AxisLength; y += spacing)
            {
                bool isMajor = Mathf.Approximately(y % major, 0f);
                CreateGridLine(
                    new Vector3(0, y, 0),
                    new Vector3(0, y, m_AxisLength),
                    isMajor
                );
            }
            for (float z = 0; z <= m_AxisLength; z += spacing)
            {
                bool isMajor = Mathf.Approximately(z % major, 0f);
                CreateGridLine(
                    new Vector3(0, 0, z),
                    new Vector3(0, m_AxisLength, z),
                    isMajor
                );
            }
        }

        private void CreateTickMarks()
        {
            float spacing =
                m_GridSettings.MajorGridSpacing;

            float tickSize = 0.02f;

            // X Axis
            for (
                float x = 0;
                x <= m_AxisLength;
                x += spacing
            )
            {
                CreateGridLine(
                    new Vector3(x, 0, 0),
                    new Vector3(x, -tickSize, 0),
                    true
                );
            }

            // Y Axis
            for (
                float y = 0;
                y <= m_AxisLength;
                y += spacing
            )
            {
                CreateGridLine(
                    new Vector3(0, y, 0),
                    new Vector3(-tickSize, y, 0),
                    true
                );
            }

            // Z Axis
            for (
                float z = 0;
                z <= m_AxisLength;
                z += spacing
            )
            {
                CreateGridLine(
                    new Vector3(0, 0, z),
                    new Vector3(-tickSize, 0, z),
                    true
                );
            }
        }

        private void CreateTickLabel(
            string text,
            Vector3 position)
        {
            GameObject labelObj =
                new GameObject("TickLabel");

            labelObj.transform.SetParent(
                m_AxesContainer,
                false
            );

            labelObj.transform.localPosition =
                position;

            labelObj.transform.localScale =
                Vector3.one * 0.01f;

            Canvas canvas =
                labelObj.AddComponent<Canvas>();

            canvas.renderMode =
                RenderMode.WorldSpace;

            GameObject textObj =
                new GameObject("Text");

            textObj.transform.SetParent(
                labelObj.transform,
                false
            );

            textObj.transform.localPosition =
                Vector3.zero;

            TextMeshPro tmp =
                textObj.AddComponent<TextMeshPro>();

            tmp.text = text;
            tmp.fontSize = 10f;
            tmp.alignment =
                TextAlignmentOptions.Center;

            m_ActiveAxes.Add(labelObj);
        }

        private void CreateTickLabels(
            DatasetColumnar dataset,
            int xCol,
            int yCol,
            int zCol)
        {
            float spacing =
                m_GridSettings.MajorGridSpacing;

            // X axis labels
            if (xCol >= 0 && xCol < dataset.ColumnCount)
            {
                DatasetColumn col =
                    dataset.Columns[xCol];

                for (float x = 0; x <= m_AxisLength; x += spacing)
                {
                    float value =
                        col.MinValue +
                        (x / m_AxisLength) *
                        (col.MaxValue - col.MinValue);

                    Debug.Log($"[ScatterplotVisualizer] X Axis: {col.Name} | Min={col.MinValue} | Max={col.MaxValue}");

                    CreateTickLabel(
                        value.ToString("F1"),
                        new Vector3(
                            x,
                            -0.05f,
                            0
                        )
                    );
                }
            }

            // Y axis labels
            if (yCol >= 0 && yCol < dataset.ColumnCount)
            {
                DatasetColumn col =
                    dataset.Columns[yCol];

                for (float y = 0; y <= m_AxisLength; y += spacing)
                {
                    float value =
                        col.MinValue +
                        (y / m_AxisLength) *
                        (col.MaxValue - col.MinValue);

                    Debug.Log($"[ScatterplotVisualizer] Y Axis: {col.Name} | Min={col.MinValue} | Max={col.MaxValue}");

                    CreateTickLabel(
                        value.ToString("F1"),
                        new Vector3(
                            -0.05f,
                            y,
                            0
                        )
                    );
                }
            }

            // Z axis labels
            if (zCol >= 0 && zCol < dataset.ColumnCount)
            {
                DatasetColumn col =
                    dataset.Columns[zCol];

                for (float z = 0; z <= m_AxisLength; z += spacing)
                {
                    float value =
                        col.MinValue +
                        (z / m_AxisLength) *
                        (col.MaxValue - col.MinValue);
                    Debug.Log($"[ScatterplotVisualizer] Z Axis: {col.Name} | Min={col.MinValue} | Max={col.MaxValue}");

                    CreateTickLabel(
                        value.ToString("F1"),
                        new Vector3(
                            -0.05f,
                            0,
                            z
                        )
                    );
                }
            }
        }

        private void CreateAxisLine(Vector3 start, Vector3 end, Color color, string name)
        {
            GameObject lineObj = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            lineObj.name = name;
            lineObj.transform.SetParent(m_AxesContainer, false);

            // Set scale and rotation to bridge start and end
            Vector3 direction = end - start;
            float distance = direction.magnitude;
            lineObj.transform.localPosition = start + direction / 2f;
            lineObj.transform.localScale = new Vector3(0.01f, distance / 2f, 0.01f);
            lineObj.transform.localRotation = Quaternion.FromToRotation(Vector3.up, direction);

            // Set color
            Renderer r = lineObj.GetComponent<Renderer>();
            if (r != null)
            {
                Material m = Instantiate(m_AxisMaterial);
                m.color = color;
                r.sharedMaterial = m;
            }

            // Remove collider so it doesn't block rays
            Destroy(lineObj.GetComponent<Collider>());

            m_ActiveAxes.Add(lineObj);
        }

        private void CreateGridLine(Vector3 start, Vector3 end, bool major = false)
        {
            GameObject lineObj = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            lineObj.name = "GridLine";
            lineObj.transform.SetParent(m_AxesContainer, false);

            Vector3 direction = end - start;
            float distance = direction.magnitude;
            lineObj.transform.localPosition = start + direction / 2f;
            float thickness = major ? 0.006f : 0.002f; // Major lines are thicker
            lineObj.transform.localScale = new Vector3(thickness, distance / 2f, thickness); // Thinner than axes
            lineObj.transform.localRotation = Quaternion.FromToRotation(Vector3.up, direction);

            Renderer r = lineObj.GetComponent<Renderer>();
            if (r != null)
            {
                Material m = Instantiate(m_AxisMaterial);
                if (m_GridSettings != null) { m.color = major ? m_GridSettings.MajorGridColor : m_GridSettings.MinorGridColor; }
                else { m.color = new Color(1f, 1f, 1f, 0.1f); } // Default minor grid color
                r.sharedMaterial = m;
            }

            Destroy(lineObj.GetComponent<Collider>());

            m_ActiveAxes.Add(lineObj);
        }

        private void CreateAxisLabel(DatasetColumn column, Vector3 position, string name)
        {
            GameObject labelObj = new GameObject(name);
            labelObj.transform.SetParent(m_AxesContainer, false);
            labelObj.transform.localPosition = position;
            labelObj.transform.localScale = Vector3.one * 0.03f;

            GameObject textObj = new GameObject("Text");
            textObj.transform.SetParent(labelObj.transform, false);

            // --- USE TextMeshPro (3D) INSTEAD OF TextMeshProUGUI ---
            TextMeshPro tmpText = textObj.AddComponent<TextMeshPro>();
            tmpText.fontSize = 3;
            tmpText.alignment = TextAlignmentOptions.Center;
            tmpText.color = Color.white;

            if (column.IsNumeric)
            {
                tmpText.text = $"{column.Name}\n[{column.MinValue:F1} to {column.MaxValue:F1}]";
            }
            else
            {
                tmpText.text = $"{column.Name}\n[{column.UniqueCount} cats]";
            }

            m_ActiveAxes.Add(labelObj);
        }
        /// <summary>
        /// Resolves dataset row i's value on a given column to the same string label
        /// used throughout the UI (categorical: the category's UniqueValues entry;
        /// numeric: float.ToString(), matching ScatterplotUI.PopulateFilterIndexDropdown's
        /// formatting). Shared by filter matching, glyph lookup, and GPUPointInteractable's
        /// tooltip so all three always agree on what a row's "label" is for a given column.
        /// </summary>
        public string GetRowLabel(
            DatasetColumnar dataset,
            int rowIndex,
            int columnIndex,
            DatasetColumn column,
            List<string> categoryTable)
        {
            if (column.IsCategorical)
            {
                int catIdx = dataset.GetCategoryIndex(rowIndex, columnIndex);
                if (catIdx < 0 || categoryTable == null || catIdx >= categoryTable.Count)
                    return null;

                return categoryTable[catIdx];
            }

            if (column.IsNumeric)
            {
                return dataset.GetNumericValue(rowIndex, columnIndex).ToString();
            }

            return null;
        }

        /// <summary>
        /// Checks whether dataset row i matches the active filter's selected value.
        /// </summary>
        private bool RowMatchesFilter(
            DatasetColumnar dataset,
            int rowIndex,
            int filterCol,
            DatasetColumn filterColumn,
            List<string> filterCategoryTable,
            string filterLabel)
        {
            // Unknown column type - treat as non-filterable, don't dim.
            if (!filterColumn.IsCategorical && !filterColumn.IsNumeric)
                return true;

            string rowLabel = GetRowLabel(dataset, rowIndex, filterCol, filterColumn, filterCategoryTable);
            return rowLabel != null && rowLabel == filterLabel;
        }

        private void ClearPoints()
        {
            foreach (var p in m_ActivePoints)
            {
                if (p != null) Destroy(p);
            }

            m_ActivePoints.Clear();

            if (m_GPUPoints != null)
            {
                m_GPUPoints.Clear();
            }
        }

        private void ClearAxes()
        {
            foreach (var a in m_ActiveAxes)
            {
                if (a != null) Destroy(a);
            }
            m_ActiveAxes.Clear();
        }
    }
}