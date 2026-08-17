using UnityEngine;
using UnityEngine.InputSystem;

namespace DataViz
{
    /// <summary>
    /// Docks a UI Canvas to a hand/controller transform (wrist-mounted UI)
    /// and toggles its visibility on a button press.
    ///
    /// Uses a CanvasGroup rather than GameObject.SetActive() to hide the UI -
    /// this avoids re-running Awake/OnEnable/OnDisable on every toggle (which
    /// would re-trigger ScatterplotUI's dropdown population, listener
    /// wiring, etc. every time), and makes fading in/out trivial to add later
    /// if wanted.
    ///
    /// Docking itself is just standard Transform parenting under m_DockAnchor -
    /// same principle as the tooltip's dock anchor. There is no per-frame
    /// position-following code because parenting already handles that.
    /// </summary>
    [RequireComponent(typeof(CanvasGroup))]
    public class WearableUIController : MonoBehaviour
    {
        [Header("Docking")]
        [Tooltip("Hand/controller transform this UI should follow. Typically the NON-dominant " +
                 "hand, since pointing/poking at your own wrist with the same hand it's " +
                 "attached to is awkward. Assign at Editor time or leave empty and set via " +
                 "code (DockTo) once your XR rig is resolved at runtime.")]
        public Transform m_DockAnchor;

        [Tooltip("Local position offset from the dock anchor. Iterate on this in Play mode " +
                 "rather than fighting the nested Transform hierarchy directly.")]
        public Vector3 m_LocalPositionOffset = Vector3.zero;

        [Tooltip("Local rotation offset from the dock anchor, in Euler angles. Hand-tracking/" +
                 "controller local axis conventions vary - expect to tune this by eye.")]
        public Vector3 m_LocalRotationOffsetEuler = Vector3.zero;

        [Header("Visibility")]
        [Tooltip("Whether the UI starts visible or hidden.")]
        public bool m_StartVisible = false;

        [Tooltip("Optional. Bind to a controller button to show/hide the UI. " +
                 "ToggleVisibility() is also public, so this can be left empty and wired " +
                 "to something else instead (a gesture, a different input path, etc).")]
        public InputActionReference m_ToggleVisibilityAction;

        public bool IsVisible => m_CanvasGroup != null && m_CanvasGroup.alpha > 0.5f;

        private CanvasGroup m_CanvasGroup;

        private void Awake()
        {
            m_CanvasGroup = GetComponent<CanvasGroup>();

            if (m_DockAnchor != null)
            {
                DockTo(m_DockAnchor);
            }

            SetVisible(m_StartVisible, immediate: true);
        }

        private void OnEnable()
        {
            if (m_ToggleVisibilityAction != null && m_ToggleVisibilityAction.action != null)
            {
                m_ToggleVisibilityAction.action.performed += OnToggleActionPerformed;
                m_ToggleVisibilityAction.action.Enable();
            }
        }

        private void OnDisable()
        {
            if (m_ToggleVisibilityAction != null && m_ToggleVisibilityAction.action != null)
            {
                m_ToggleVisibilityAction.action.performed -= OnToggleActionPerformed;
            }
        }

        /// <summary>
        /// Parents this UI under the given anchor and applies the configured
        /// local position/rotation offsets. Call this at runtime if your dock
        /// anchor (e.g. a hand-tracking joint transform) isn't available yet
        /// at Awake time - for example, resolve it once your XR rig/hand
        /// tracking has finished initializing, then call DockTo(handTransform).
        /// </summary>
        public void DockTo(Transform anchor)
        {
            m_DockAnchor = anchor;

            transform.SetParent(m_DockAnchor, false);
            transform.localPosition = m_LocalPositionOffset;
            transform.localRotation = Quaternion.Euler(m_LocalRotationOffsetEuler);
        }

        //TEMPORARY: Update the local position/rotation offsets in Play mode for tuning, without having to press play every time I want to make a change to the local offsets
        private void Update()
        {
            if (m_DockAnchor != null)
            {
                transform.localPosition = m_LocalPositionOffset;
                transform.localRotation = Quaternion.Euler(m_LocalRotationOffsetEuler);
            }
        }

        public void ToggleVisibility()
        {
            SetVisible(!IsVisible);
        }

        public void SetVisible(bool visible, bool immediate = false)
        {
            if (m_CanvasGroup == null)
                return;

            // Immediate on/off for now (alpha snaps rather than fades).
            // Swap this for a coroutine/tween if you want a fade transition later -
            // the interactable/blocksRaycasts toggle below matters either way,
            // otherwise a fully-transparent panel would still eat clicks/pokes.
            m_CanvasGroup.alpha = visible ? 1f : 0f;
            m_CanvasGroup.interactable = visible;
            m_CanvasGroup.blocksRaycasts = visible;
        }

        private void OnToggleActionPerformed(InputAction.CallbackContext ctx)
        {
            ToggleVisibility();
        }
    }
}