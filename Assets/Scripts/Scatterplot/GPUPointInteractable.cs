using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
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

        [Header("Docked Tooltip")]
        [Tooltip("Fixed anchor the tooltip is docked to - it no longer follows the raycast hit point. " +
                 "Assign anything (a wrist transform, a spot on your existing UI panel, etc). If left " +
                 "empty, a default HUD-style anchor is auto-created as a child of the main camera.")]
        public Transform m_DockAnchor;

        [Tooltip("Local offset used only when auto-creating the fallback camera-child anchor (m_DockAnchor left empty).")]
        public Vector3 m_DockLocalOffset = new Vector3(0.15f, -0.1f, 0.5f);

        [Tooltip("If true, the tooltip rotates each frame to face the camera - useful if m_DockAnchor is a " +
                 "static world position the player can walk around; redundant (but harmless) if the anchor " +
                 "is already a camera child.")]
        public bool m_BillboardToCamera = true;

        [Header("Pin Control")]
        [Tooltip("Optional. Bind to a controller button to pin/unpin the tooltip content. " +
                 "TogglePin() is also public, so this can be left empty and wired to a UI Button instead.")]
        public InputActionReference m_PinButtonAction;

        /// <summary>Fired whenever pin state changes - useful for a UI button label ("Pin"/"Unpin").</summary>
        public event Action OnPinStateChanged;

        public bool IsPinned => m_IsPinned;

        private GameObject m_ActiveTooltip;
        private TextMeshProUGUI m_TooltipText;
        private Camera m_MainCamera;
        private Transform m_ResolvedDockAnchor;

        private List<Vector3> m_PointPositions = new();
        private List<Color> m_PointColors = new();
        private List<int> m_RowIndices = null; // maps positions[i] -> dataset.Rows[originalIndex]; null means identity mapping

        private int m_HoveredPointIndex = -1;
        private bool m_IsPinned = false;
        private int m_PinnedPointIndex = -1;

        private void Awake()
        {
            m_MainCamera = Camera.main;
            ResolveDockAnchor();
        }

        private void OnEnable()
        {
            if (m_PinButtonAction != null && m_PinButtonAction.action != null)
            {
                m_PinButtonAction.action.performed += OnPinActionPerformed;
                m_PinButtonAction.action.Enable();
            }
        }

        private void OnDisable()
        {
            if (m_PinButtonAction != null && m_PinButtonAction.action != null)
            {
                m_PinButtonAction.action.performed -= OnPinActionPerformed;
            }
        }

        private void OnDestroy()
        {
            if (m_ActiveTooltip != null)
            {
                Destroy(m_ActiveTooltip);
                m_ActiveTooltip = null;
            }

            m_PointPositions.Clear();
            m_PointColors.Clear();
            m_RowIndices = null;
            m_HoveredPointIndex = -1;
            m_IsPinned = false;
            m_PinnedPointIndex = -1;
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

        private void ResolveDockAnchor()
        {
            if (m_DockAnchor != null)
            {
                m_ResolvedDockAnchor = m_DockAnchor;
                return;
            }

            if (m_MainCamera == null)
            {
                m_MainCamera = Camera.main;
            }

            if (m_MainCamera == null)
            {
                // No camera yet (e.g. XR rig not initialized this frame) - try again later.
                return;
            }

            GameObject fallbackAnchor = new GameObject("TooltipDockAnchor (auto)");
            fallbackAnchor.transform.SetParent(m_MainCamera.transform, false);
            fallbackAnchor.transform.localPosition = m_DockLocalOffset;
            fallbackAnchor.transform.localRotation = Quaternion.identity;

            m_ResolvedDockAnchor = fallbackAnchor.transform;
        }

        /// <summary>
        /// Pins or unpins the tooltip content.
        /// - Pin: freezes the currently-displayed/hovered point's data, ignoring
        ///   further hover changes, until unpinned.
        /// - Unpin: resumes live hover-following.
        /// No-ops if tooltips are globally disabled.
        /// </summary>
        public void TogglePin()
        {
            if (m_Visualizer == null || m_Visualizer.m_Manager == null || !m_Visualizer.m_Manager.ShowTooltips)
                return;

            if (m_IsPinned)
            {
                m_IsPinned = false;
                m_PinnedPointIndex = -1;

                if (m_HoveredPointIndex >= 0)
                {
                    ShowDockedTooltip(m_HoveredPointIndex);
                }
                else
                {
                    HideTooltip();
                }
            }
            else
            {
                if (m_HoveredPointIndex < 0)
                    return; // nothing currently hovered/displayed to pin

                m_IsPinned = true;
                m_PinnedPointIndex = m_HoveredPointIndex;
                ShowDockedTooltip(m_PinnedPointIndex);
            }

            OnPinStateChanged?.Invoke();
        }

        private void OnPinActionPerformed(InputAction.CallbackContext ctx)
        {
            TogglePin();
        }

        private void Update()
        {
            if (m_Visualizer == null || m_PointPositions.Count == 0)
                return;

            if (m_ResolvedDockAnchor == null)
            {
                ResolveDockAnchor();
                if (m_ResolvedDockAnchor == null)
                    return;
            }

            bool tooltipsEnabled = m_Visualizer.m_Manager == null || m_Visualizer.m_Manager.ShowTooltips;

            if (!tooltipsEnabled)
            {
                // Make sure a tooltip that was already showing gets hidden
                // the moment the setting is switched off, rather than
                // lingering until the next hover change.
                if (m_ActiveTooltip != null && m_ActiveTooltip.activeSelf)
                {
                    HideTooltip();
                }

                m_IsPinned = false;
                m_PinnedPointIndex = -1;
                m_HoveredPointIndex = -1;
                return;
            }

            Ray ray = GetInteractionRay();
            m_HoveredPointIndex = FindClosestPoint(ray);

            // While pinned, hover changes are tracked (so unpinning resumes
            // cleanly) but do NOT change what's currently displayed.
            if (!m_IsPinned)
            {
                if (m_HoveredPointIndex >= 0)
                {
                    ShowDockedTooltip(m_HoveredPointIndex);
                }
                else
                {
                    HideTooltip();
                }
            }

            if (m_BillboardToCamera && m_ActiveTooltip != null && m_ActiveTooltip.activeSelf)
            {
                BillboardTooltip();
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
            float closestDistance = m_HoverThreshold;

            for (int i = 0; i < m_PointPositions.Count; i++)
            {
                Vector3 pointPos = m_PointPositions[i];
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

            if (projection < 0)
                return Vector3.Distance(ray.origin, point);

            return Vector3.Distance(closestPointOnRay, point);
        }

        /// <summary>
        /// Builds/updates the tooltip's text content for the given point and
        /// ensures it's visible, docked at m_ResolvedDockAnchor. Does NOT
        /// move the tooltip to the point's world position - that's the
        /// entire point of docking it.
        /// </summary>
        private void ShowDockedTooltip(int pointIndex)
        {
            if (m_Visualizer == null || m_Visualizer.m_Manager == null ||
                m_Visualizer.m_Manager.LoadedDataset == null)
                return;

            DatasetColumnar dataset = m_Visualizer.m_Manager.LoadedDataset as DatasetColumnar;
            if (dataset == null)
            {
                Debug.LogError("GPUPointInteractable requires DatasetColumnar");
                return;
            }

            int rowIndex = ResolveRowIndex(pointIndex);
            DatasetRowView row = dataset.GetRow(rowIndex);

            int xCol = m_Visualizer.m_Manager.XColumnIndex;
            int yCol = m_Visualizer.m_Manager.YColumnIndex;
            int zCol = m_Visualizer.m_Manager.ZColumnIndex;
            int colorCol = m_Visualizer.m_Manager.ColorColumnIndex;

            EnsureTooltipCreated();

            if (m_TooltipText != null)
            {
                string text = $"<b>Row #{rowIndex + 1}</b>{(m_IsPinned ? " <color=#88CCFF>(pinned)</color>" : "")}\n";

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
        }

        private void EnsureTooltipCreated()
        {
            if (m_ActiveTooltip != null)
                return;

            if (m_TooltipPrefab != null)
            {
                m_ActiveTooltip = Instantiate(m_TooltipPrefab, m_ResolvedDockAnchor, false);
            }
            else
            {
                m_ActiveTooltip = CreateDefaultTooltip();
                m_ActiveTooltip.transform.SetParent(m_ResolvedDockAnchor, false);
            }

            // Docked at zero local offset from the anchor - parenting handles
            // "follow the anchor" automatically, no per-frame position code needed.
            m_ActiveTooltip.transform.localPosition = Vector3.zero;
            m_ActiveTooltip.transform.localRotation = Quaternion.identity;

            m_TooltipText = m_ActiveTooltip.GetComponentInChildren<TextMeshProUGUI>();
        }

        private GameObject CreateDefaultTooltip()
        {
            GameObject tooltipObj = new GameObject("GPU Tooltip");

            tooltipObj.transform.localScale = Vector3.one * 0.002f; // Scale down for world space

            Canvas canvas = tooltipObj.AddComponent<Canvas>();
            canvas.renderMode = RenderMode.WorldSpace;

            RectTransform rect = tooltipObj.GetComponent<RectTransform>();
            rect.sizeDelta = new Vector2(300, 180);

            GameObject bgObj = new GameObject("Background");
            bgObj.transform.SetParent(tooltipObj.transform, false);
            UnityEngine.UI.Image bgImg = bgObj.AddComponent<UnityEngine.UI.Image>();
            bgImg.color = new Color(0, 0, 0, 0.85f);
            RectTransform bgRect = bgObj.GetComponent<RectTransform>();
            bgRect.anchorMin = Vector2.zero;
            bgRect.anchorMax = Vector2.one;
            bgRect.sizeDelta = Vector2.zero;

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

        private void BillboardTooltip()
        {
            if (m_MainCamera == null)
                return;

            m_ActiveTooltip.transform.rotation = Quaternion.LookRotation(
                m_ActiveTooltip.transform.position - m_MainCamera.transform.position,
                m_MainCamera.transform.up
            );
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