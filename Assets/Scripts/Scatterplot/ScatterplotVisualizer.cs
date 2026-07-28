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

        [Header("Visualization Settings")]
        public float m_AxisLength = 1.0f; // Size of the 3D grid
        public Material m_PointMaterial; // Shared material to clone
        public Material m_AxisMaterial;

        // Parent container for points
        private Transform m_PointsContainer;
        private Transform m_AxesContainer;

        private List<GameObject> m_ActivePoints = new();
        private List<GameObject> m_ActiveAxes = new();

        public ScatterplotInstancedRenderer m_GPUPoints;
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

            if (m_GPUPoints == null) { m_GPUPoints = GetComponent<ScatterplotInstancedRenderer>(); }
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

            Dataset dataset = m_Manager.LoadedDataset;
            int xCol = m_Manager.XColumnIndex;
            int yCol = m_Manager.YColumnIndex;
            int zCol = m_Manager.ZColumnIndex;
            int colorCol = m_Manager.ColorColumnIndex;
            float pointSize = m_Manager.PointSize;

            // 1. Build Grid and Axes Visuals
            BuildAxesAndGrid(dataset, xCol, yCol, zCol);

            // 2. Spawn Data Points
            Color[] palette = new Color[]
            {
                Color.red, Color.blue, Color.green, Color.yellow, Color.cyan, Color.magenta,
                new Color(1f, 0.5f, 0f), new Color(0.5f, 0f, 0.5f), new Color(0f, 0.5f, 0.5f),
                new Color(0.7f, 0.2f, 0.2f), new Color(0.2f, 0.7f, 0.2f), new Color(0.2f, 0.2f, 0.7f)
            };

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

            // GPU Instanced Rendering
            List<Vector3> positions = new();
            List<Color> colors = new();

            // Gather categorical values if color col is categorical
            List<string> uniqueColorCategories = new();
            if (colorCol >= 0 && colorCol < dataset.ColumnCount)
            {
                var column = dataset.Columns[colorCol];
                if (column.IsCategorical)
                {
                    uniqueColorCategories = new List<string>(column.UniqueValues);
                    Debug.Log($"[ScatterplotVisualizer] Found categorical column with {uniqueColorCategories.Count} unique values");
                }
                else
                {
                    Debug.Log($"[ScatterplotVisualizer] Color column is numeric, not categorical");
                }
            }

            // Define categorical color palette
            Color[] categoricalPalette = new Color[]
            {
                Color.red, Color.blue, Color.green, Color.yellow, Color.cyan, Color.magenta,
                new Color(1f, 0.5f, 0f), new Color(0.5f, 0f, 0.5f), new Color(0f, 0.5f, 0.5f),
                new Color(0.7f, 0.2f, 0.2f), new Color(0.2f, 0.7f, 0.2f), new Color(0.2f, 0.2f, 0.7f)
            };

            // Calculate the base position (same as the points container)
            Vector3 basePosition = m_PointsContainer.position;

            for (int i = 0; i < dataset.RowCount; i++)
            {
                DatasetRow row = dataset.Rows[i];

                float xNorm =
                    row.GetNormalizedValue(xCol);

                float yNorm =
                    row.GetNormalizedValue(yCol);

                float zNorm =
                    row.GetNormalizedValue(zCol);

                // Calculate world position: base + normalized offset scaled by axis length
                Vector3 worldPos = basePosition + (new Vector3(xNorm, yNorm, zNorm) * m_AxisLength);
                positions.Add(worldPos);

                Color pointColor = Color.cyan;

                if (colorCol >= 0 && colorCol < dataset.ColumnCount)
                {
                    var meta =
                        dataset.Columns[colorCol];

                    if (meta.IsNumeric)
                    {
                        float norm =
                            row.GetNormalizedValue(colorCol);

                        pointColor =
                            Color.Lerp(
                                Color.blue,
                                Color.red,
                                norm
                            );
                    }
                    else if (meta.IsCategorical)
                    {
                        string rawVal =
                            row.GetRawValue(colorCol);

                        int catIdx =
                            uniqueColorCategories.IndexOf(rawVal);

                        if (catIdx >= 0)
                        {
                            pointColor =
                                categoricalPalette[
                                    catIdx %
                                    categoricalPalette.Length
                                ];
                        }
                        else
                        {
                            Debug.LogWarning($"[ScatterplotVisualizer] Unknown category '{rawVal}' at index {i}");
                        }
                    }
                    else
                    {
                        // No color column selected
                        pointColor = Color.cyan;
                    }
                }
                colors.Add(pointColor);
            }

        

            m_GPUPoints.Build(
                positions,
                colors,
                pointSize
            );

            // Also update the interactable with point data

            if (m_GPUInteractable != null)
            {
                m_GPUInteractable.SetPointData(
                    positions,
                    colors,
                    pointSize
                );
            }


        }

        private void BuildAxesAndGrid(Dataset dataset, int xCol, int yCol, int zCol)
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
            Dataset dataset,
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
            labelObj.transform.localScale = Vector3.one * 0.03f; // Small but readable scale

            GameObject textObj = new GameObject("Text");
            textObj.transform.SetParent(labelObj.transform, false);
            TextMeshProUGUI tmpText = textObj.AddComponent<TextMeshProUGUI>();
            tmpText.fontSize = 1;
            tmpText.alignment = TextAlignmentOptions.Center;
            tmpText.color = Color.white;

            // Display column name plus range if numeric
            if (column.IsNumeric)
            {
                tmpText.text = $"{column.Name}\n[{column.MinValue:F1} to {column.MaxValue:F1}]";
            }
            else
            {
                tmpText.text = $"{column.Name}\n[{column.UniqueCount} cats]";
            }

            RectTransform textRect = textObj.GetComponent<RectTransform>();
            textRect.anchorMin = Vector2.zero;
            textRect.anchorMax = Vector2.one;
            textRect.sizeDelta = Vector2.zero;
            textRect.anchoredPosition = Vector2.zero;

            m_ActiveAxes.Add(labelObj);
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
