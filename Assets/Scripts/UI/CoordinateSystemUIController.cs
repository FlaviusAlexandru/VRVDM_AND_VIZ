using UnityEngine;
using UnityEngine.UI;

namespace DataViz
{
    /// <summary>
    /// Minimal UI controls for the coordinate system: dock, uniform scale
    /// slider, and reset. 
    /// </summary>
    public class CoordinateSystemUIController : MonoBehaviour
    {
        [Header("References")]
        public CoordinateSystemInteractable m_CoordinateSystemInteractable;

        [Header("Dock Controls")]
        public Button m_DockButton;

        [Header("Scale Controls")]
        public Slider m_ScaleSlider;
        public Text m_ScaleValueText;
        public Button m_ResetScaleButton;

        private void Start()
        {
            if (m_CoordinateSystemInteractable == null)
            {
                m_CoordinateSystemInteractable = Object.FindAnyObjectByType<CoordinateSystemInteractable>();
            }

            if (m_CoordinateSystemInteractable == null)
            {
                Debug.LogWarning("[CoordinateSystemUIController] No CoordinateSystemInteractable found. UI controls disabled.");
                return;
            }

            if (m_DockButton != null)
            {
                m_DockButton.onClick.AddListener(() => m_CoordinateSystemInteractable.DockToTable());
            }

            if (m_ScaleSlider != null)
            {
                m_ScaleSlider.minValue = m_CoordinateSystemInteractable.m_MinScale;
                m_ScaleSlider.maxValue = m_CoordinateSystemInteractable.m_MaxScale;
                m_ScaleSlider.value = 1f;
                m_ScaleSlider.onValueChanged.AddListener(OnScaleSliderChanged);
            }

            if (m_ResetScaleButton != null)
            {
                m_ResetScaleButton.onClick.AddListener(() =>
                {
                    m_CoordinateSystemInteractable.ResetScale();
                    if (m_ScaleSlider != null) m_ScaleSlider.value = 1f;
                });
            }
        }

        private void OnScaleSliderChanged(float value)
        {
            if (m_CoordinateSystemInteractable == null)
                return;

            m_CoordinateSystemInteractable.SetScale(value);

            if (m_ScaleValueText != null)
            {
                m_ScaleValueText.text = value.ToString("F2") + "x";
            }
        }
    }
}