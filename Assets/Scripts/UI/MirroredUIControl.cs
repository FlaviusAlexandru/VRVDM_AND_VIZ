using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DataViz
{
    /// <summary>
    /// Makes a visual duplicate of a UI control (e.g. the wrist panel's copy of
    /// DatasetDropdown) act as a remote control for the "authoritative" control
    /// ScatterplotUI is actually wired to (the SummonedMenuCanvas copy).
    ///
    /// ScatterplotUI holds exactly one reference per control and wires its
    /// business logic (RPCs, dependent-dropdown population, manager sync, etc.)
    /// to that one instance's onValueChanged/onClick. A second, unwired copy of
    /// the same control elsewhere in the scene does nothing on its own - this
    /// component bridges the two, purely additively (it never touches
    /// ScatterplotUI itself):
    ///   - player input on the mirror is applied to the authoritative control,
    ///     which fires its own event and runs ScatterplotUI's normal logic.
    ///   - whenever the authoritative control's value, option list, or
    ///     interactable state changes (from ScatterplotUI code, RPCs, manager
    ///     sync, etc.), the same state is copied down onto the mirror every
    ///     frame. This is polled rather than event-driven because ScatterplotUI
    ///     changes these directly from code without raising any event we could
    ///     hook into.
    ///
    /// Add one of these per duplicated control (wrist DatasetDropdown paired
    /// with SummonedMenuCanvas's DatasetDropdown, and so on). Supports
    /// TMP_Dropdown, Slider, Toggle, and Button - Authoritative and Mirror must
    /// be the same type as each other.
    /// </summary>
    public class MirroredUIControl : MonoBehaviour
    {
        private enum ControlKind { Dropdown, Slider, Toggle, Button }

        [Tooltip("The control ScatterplotUI is actually wired to (e.g. SummonedMenuCanvas's copy).")]
        [SerializeField] private Behaviour m_Authoritative;

        [Tooltip("The visual duplicate the player interacts with here (e.g. this wrist panel's copy). " +
                 "Usually lives on the same GameObject as this component.")]
        [SerializeField] private Behaviour m_Mirror;

        private ControlKind m_Kind;
        private int m_LastKnownOptionCount = -1;

        private void Awake()
        {
            if (m_Authoritative == null || m_Mirror == null)
            {
                Debug.LogError($"[MirroredUIControl] '{name}': both Authoritative and Mirror must be assigned.", this);
                enabled = false;
                return;
            }

            if (m_Authoritative is TMP_Dropdown && m_Mirror is TMP_Dropdown) m_Kind = ControlKind.Dropdown;
            else if (m_Authoritative is Slider && m_Mirror is Slider) m_Kind = ControlKind.Slider;
            else if (m_Authoritative is Toggle && m_Mirror is Toggle) m_Kind = ControlKind.Toggle;
            else if (m_Authoritative is Button && m_Mirror is Button) m_Kind = ControlKind.Button;
            else
            {
                Debug.LogError($"[MirroredUIControl] '{name}': Authoritative ({m_Authoritative?.GetType().Name}) and " +
                                $"Mirror ({m_Mirror?.GetType().Name}) must be the same control type " +
                                "(TMP_Dropdown, Slider, Toggle, or Button).", this);
                enabled = false;
            }
        }

        private void OnEnable()
        {
            switch (m_Kind)
            {
                case ControlKind.Dropdown:
                    ((TMP_Dropdown)m_Mirror).onValueChanged.AddListener(OnMirrorDropdownChanged);
                    PullDropdown(force: true);
                    break;
                case ControlKind.Slider:
                    ((Slider)m_Mirror).onValueChanged.AddListener(OnMirrorSliderChanged);
                    PullSlider(force: true);
                    break;
                case ControlKind.Toggle:
                    ((Toggle)m_Mirror).onValueChanged.AddListener(OnMirrorToggleChanged);
                    PullToggle(force: true);
                    break;
                case ControlKind.Button:
                    ((Button)m_Mirror).onClick.AddListener(OnMirrorButtonClicked);
                    PullInteractableOnly(force: true);
                    break;
            }
        }

        private void OnDisable()
        {
            switch (m_Kind)
            {
                case ControlKind.Dropdown:
                    ((TMP_Dropdown)m_Mirror).onValueChanged.RemoveListener(OnMirrorDropdownChanged);
                    break;
                case ControlKind.Slider:
                    ((Slider)m_Mirror).onValueChanged.RemoveListener(OnMirrorSliderChanged);
                    break;
                case ControlKind.Toggle:
                    ((Toggle)m_Mirror).onValueChanged.RemoveListener(OnMirrorToggleChanged);
                    break;
                case ControlKind.Button:
                    ((Button)m_Mirror).onClick.RemoveListener(OnMirrorButtonClicked);
                    break;
            }
        }

        private void LateUpdate()
        {
            switch (m_Kind)
            {
                case ControlKind.Dropdown: PullDropdown(force: false); break;
                case ControlKind.Slider: PullSlider(force: false); break;
                case ControlKind.Toggle: PullToggle(force: false); break;
                case ControlKind.Button: PullInteractableOnly(force: false); break;
            }
        }

        // ---- player -> authoritative (drives ScatterplotUI's real logic) ----

        private void OnMirrorDropdownChanged(int value) => ((TMP_Dropdown)m_Authoritative).value = value;
        private void OnMirrorSliderChanged(float value) => ((Slider)m_Authoritative).value = value;
        private void OnMirrorToggleChanged(bool value) => ((Toggle)m_Authoritative).isOn = value;
        private void OnMirrorButtonClicked() => ((Button)m_Authoritative).onClick.Invoke();

        // ---- authoritative -> mirror (keeps the wrist copy showing reality) ----
        // Uses SetValueWithoutNotify so these never re-trigger the listeners above.

        private void PullDropdown(bool force)
        {
            var auth = (TMP_Dropdown)m_Authoritative;
            var mirror = (TMP_Dropdown)m_Mirror;

            // Cheap heuristic: this codebase always Clear+AddOptions together when
            // a dropdown's contents change, so a count change is a reliable signal.
            bool optionsChanged = force || auth.options.Count != m_LastKnownOptionCount;
            if (optionsChanged)
            {
                m_LastKnownOptionCount = auth.options.Count;

                List<TMP_Dropdown.OptionData> copied = new List<TMP_Dropdown.OptionData>(auth.options.Count);
                foreach (TMP_Dropdown.OptionData opt in auth.options)
                    copied.Add(new TMP_Dropdown.OptionData { text = opt.text, image = opt.image });

                mirror.ClearOptions();
                mirror.AddOptions(copied);
            }

            if (optionsChanged || auth.value != mirror.value)
            {
                mirror.SetValueWithoutNotify(auth.value);
                mirror.RefreshShownValue();
            }

            if (auth.interactable != mirror.interactable)
                mirror.interactable = auth.interactable;
        }

        private void PullSlider(bool force)
        {
            var auth = (Slider)m_Authoritative;
            var mirror = (Slider)m_Mirror;

            if (force || !Mathf.Approximately(auth.value, mirror.value))
                mirror.SetValueWithoutNotify(auth.value);

            if (auth.interactable != mirror.interactable)
                mirror.interactable = auth.interactable;
        }

        private void PullToggle(bool force)
        {
            var auth = (Toggle)m_Authoritative;
            var mirror = (Toggle)m_Mirror;

            if (force || auth.isOn != mirror.isOn)
                mirror.SetIsOnWithoutNotify(auth.isOn);

            if (auth.interactable != mirror.interactable)
                mirror.interactable = auth.interactable;
        }

        private void PullInteractableOnly(bool force)
        {
            var auth = (Selectable)m_Authoritative;
            var mirror = (Selectable)m_Mirror;

            if (force || auth.interactable != mirror.interactable)
                mirror.interactable = auth.interactable;
        }
    }
}