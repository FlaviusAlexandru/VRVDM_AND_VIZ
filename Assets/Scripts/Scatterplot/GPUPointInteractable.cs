using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace DataViz
{
    public class GPUPointInteractable : MonoBehaviour
    {
        [Header("References")]
        public ScatterplotVisualizer m_Visualizer;
        public ScatterplotInstancedRenderer m_GPUPoints;
        public GameObject m_TooltipPrefab;

        [Header("Settings")]
        public float m_PointSize = 0.02f;
        public float m_RaycastDistance = 10f;
        public float m_HoverThreshold = 0.05f;

        private GameObject m_ActiveTooltip;
        private TextMeshProUGUI m_TooltipText;
        private Camera m_MainCamera;
        private List<Vector3> m_PointPositions = new();
        private List<Color> m_PointColors = new();
        private List<int> m_RowIndices = null; // maps positions[i] -> dataset.Rows[originalIndex]; null means identity mapping
        private int m_HoveredPointIndex = -1;

        private void Awake()
        {
            m_MainCamera = Camera.main;
        }

        private void OnDestroy()
        {
            if (m_ActiveTooltip != null)
            {
                Destroy(m_ActiveTooltip);
                m_ActiveTooltip = null;
            }

            // Clear references to prevent memory leaks
            m_PointPositions.Clear();
            m_PointColors.Clear();
            m_RowIndices = null;
            m_HoveredPointIndex = -1;
        }

        public void SetPointData(List<Vector3> positions, List<Color> colors, float pointSize, List<int> rowIndices = null)
        {
            m_PointPositions = positions;
            m_PointColors = colors;
            m_PointSize = pointSize;
            m_RowIndices = rowIndices;
        }

        /// <summary>
        /// Resolves a position-list index back to its original DatasetRow index.
        /// When no filtering is active (m_RowIndices is null), this is the identity
        /// mapping - positions[i] really is dataset.Rows[i].
        /// </summary>
        private int ResolveRowIndex(int pointIndex)
        {
            if (m_RowIndices != null && pointIndex >= 0 && pointIndex < m_RowIndices.Count)
            {
                return m_RowIndices[pointIndex];
            }

            return pointIndex;
        }

        private void Update()
        {
            if (m_Visualizer == null || m_PointPositions.Count == 0)
                return;

            bool tooltipsEnabled = m_Visualizer.m_Manager == null || m_Visualizer.m_Manager.ShowTooltips;

            if (!tooltipsEnabled)
            {
                // Make sure a tooltip that was already showing gets hidden
                // the moment the setting is switched off, rather than
                // lingering until the next hover change.
                if (m_HoveredPointIndex >= 0)
                {
                    m_HoveredPointIndex = -1;
                    HideTooltip();
                }

                return;
            }

            // Get ray from camera
            Ray ray = GetInteractionRay();

            // Find closest point
            int closestPoint = FindClosestPoint(ray);

            if (closestPoint != m_HoveredPointIndex)
            {
                m_HoveredPointIndex = closestPoint;

                if (closestPoint >= 0)
                {
                    ShowTooltip(closestPoint);
                }
                else
                {
                    HideTooltip();
                }
            }

            // Update tooltip position if visible
            if (m_HoveredPointIndex >= 0 && m_ActiveTooltip != null)
            {
                UpdateTooltipPosition();
            }
        }


        private Ray GetInteractionRay()
        {
            if (m_MainCamera == null)
            {
                m_MainCamera = Camera.main;
            }

            if (m_MainCamera == null)
            {
                return new Ray();
            }

            return new Ray(
                m_MainCamera.transform.position,
                m_MainCamera.transform.forward
            );
        }


        private int FindClosestPoint(Ray ray)
        {
            int closestIndex = -1;
            float closestDistance = m_HoverThreshold; // Use configurable threshold

            for (int i = 0; i < m_PointPositions.Count; i++)
            {
                Vector3 pointPos = m_PointPositions[i];

                // Calculate distance from ray to point
                float distance = DistanceToRay(ray, pointPos);

                if (distance < closestDistance)
                {
                    closestDistance = distance;
                    closestIndex = i;
                }
            }

            return closestIndex;
        }

        private float DistanceToRay(Ray ray, Vector3 point)
        {
            Vector3 rayToPoint = point - ray.origin;
            float projection = Vector3.Dot(rayToPoint, ray.direction);
            Vector3 closestPointOnRay = ray.origin + ray.direction * projection;

            // If projection is negative, point is behind the ray origin
            if (projection < 0)
                return Vector3.Distance(ray.origin, point);

            return Vector3.Distance(closestPointOnRay, point);
        }

        private void ShowTooltip(int pointIndex)
        {
            if (m_Visualizer == null || m_Visualizer.m_Manager == null ||
                m_Visualizer.m_Manager.LoadedDataset == null)
                return;

            Dataset dataset = m_Visualizer.m_Manager.LoadedDataset;
            int rowIndex = ResolveRowIndex(pointIndex);
            DatasetRow row = dataset.Rows[rowIndex];

            int xCol = m_Visualizer.m_Manager.XColumnIndex;
            int yCol = m_Visualizer.m_Manager.YColumnIndex;
            int zCol = m_Visualizer.m_Manager.ZColumnIndex;
            int colorCol = m_Visualizer.m_Manager.ColorColumnIndex;

            // Create tooltip if it doesn't exist
            if (m_ActiveTooltip == null)
            {
                if (m_TooltipPrefab != null)
                {
                    m_ActiveTooltip = Instantiate(m_TooltipPrefab, transform);
                }
                else
                {
                    m_ActiveTooltip = CreateDefaultTooltip();
                }

                m_TooltipText = m_ActiveTooltip.GetComponentInChildren<TextMeshProUGUI>();
            }

            // Build tooltip text
            if (m_TooltipText != null)
            {
                string text = $"<b>Row #{rowIndex + 1}</b>\n";

                if (xCol >= 0 && xCol < dataset.ColumnCount)
                    text += $"<color=#FF4444>X ({dataset.Columns[xCol].Name}):</color> {row.GetRawValue(xCol)}\n";

                if (yCol >= 0 && yCol < dataset.ColumnCount)
                    text += $"<color=#44FF44>Y ({dataset.Columns[yCol].Name}):</color> {row.GetRawValue(yCol)}\n";

                if (zCol >= 0 && zCol < dataset.ColumnCount)
                    text += $"<color=#4444FF>Z ({dataset.Columns[zCol].Name}):</color> {row.GetRawValue(zCol)}\n";

                if (colorCol >= 0 && colorCol < dataset.ColumnCount)
                    text += $"<color=#FFFF44>Color ({dataset.Columns[colorCol].Name}):</color> {row.GetRawValue(colorCol)}\n";

                m_TooltipText.text = text.TrimEnd('\n');
            }

            m_ActiveTooltip.SetActive(true);
            UpdateTooltipPosition();
        }

        private GameObject CreateDefaultTooltip()
        {
            GameObject tooltipObj = new GameObject("GPU Tooltip");
            tooltipObj.transform.SetParent(transform, false);

            tooltipObj.transform.localScale = Vector3.one * 0.002f; // Scale down for world space

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
            tmpText.fontSize = 12;
            tmpText.alignment = TextAlignmentOptions.Left;
            tmpText.enableWordWrapping = true;
            tmpText.color = Color.white;

            RectTransform textRect = textObj.GetComponent<RectTransform>();
            textRect.anchorMin = Vector2.zero;
            textRect.anchorMax = Vector2.one;
            textRect.offsetMin = new Vector2(10, 10);
            textRect.offsetMax = new Vector2(-10, -10);

            textRect.anchoredPosition = Vector2.zero;

            return tooltipObj;
        }

        private void UpdateTooltipPosition()
        {
            if (m_ActiveTooltip == null || m_HoveredPointIndex < 0 || m_HoveredPointIndex >= m_PointPositions.Count)
                return;

            Vector3 pointPos = m_PointPositions[m_HoveredPointIndex];
            m_ActiveTooltip.transform.position = pointPos + Vector3.up * (m_PointSize * 2f);

            // Billboard tooltip to face camera
            if (m_MainCamera != null)
            {
                m_ActiveTooltip.transform.LookAt(
                    m_ActiveTooltip.transform.position + m_MainCamera.transform.rotation * Vector3.forward,
                    m_MainCamera.transform.rotation * Vector3.up
                );
            }
        }

        private void HideTooltip()
        {
            if (m_ActiveTooltip != null)
            {
                m_ActiveTooltip.SetActive(false);
            }
        }
    }
}