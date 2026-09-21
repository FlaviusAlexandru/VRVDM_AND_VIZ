using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace DataViz
{
    /// <summary>
    /// Lives on the small wrist-mounted shortcut canvas specifically (NOT the
    /// big full-screen summoned menu - that's a separate canvas entirely).
    ///
    /// This used to also own docking/visibility, but HandMenu (XR Interaction
    /// Toolkit's built-in component, UnityEngine.XR.Interaction.Toolkit.UI.
    /// BodyUI.HandMenu) now handles both of those directly - IMPORTANT:
    /// HandMenu must live on a SEPARATE GameObject from the canvas it manages
    /// (its own OnDisable() calls SetActive(true) on whatever GameObject its
    /// "Hand Menu UI Game Object" field points to, which causes a SetActive
    /// reentrancy error if that's the same object HandMenu itself is
    /// attached to).
    ///
    /// What's left here is just: which of this wrist panel's controls the
    /// player has chosen to show, persisted to disk across sessions. One
    /// entry in m_ShortcutItems per toggleable item on this specific canvas.
    /// </summary>
    public class WristShortcutMenu : MonoBehaviour
    {
        [Header("Shortcut Customization")]
        [Tooltip("One entry per toggleable item on this wrist panel. Key must be stable across " +
                 "sessions (it's what gets saved to disk) - don't rename an existing Key once " +
                 "players may have saved preferences referencing it, add a new one instead.")]
        public List<ShortcutItem> m_ShortcutItems = new();

        [Serializable]
        public class ShortcutItem
        {
            [Tooltip("Stable identifier saved to disk - NOT a display name, don't rename after shipping.")]
            public string Key;

            [Tooltip("The child GameObject on this wrist canvas that this shortcut controls the visibility of.")]
            public GameObject Target;

            [Tooltip("Shown/hidden by default the first time a player runs the app, before they've customized anything.")]
            public bool DefaultEnabled = true;
        }

        private HashSet<string> m_EnabledShortcutKeys = new();

        private void Awake()
        {
            // Awake() runs once regardless of the component's own enabled
            // checkbox in Unity - only OnEnable/Update respect it. Kept as a
            // defensive guard for consistency with the rest of this project's
            // components, even though nothing currently disables this one.
            if (!enabled)
                return;

            LoadShortcutPrefs();
            ApplyShortcutVisibility();
        }

        // ==================== Shortcut Customization (persisted) ====================

        [Serializable]
        private class ShortcutPrefsFile
        {
            public List<string> EnabledKeys = new();
        }

        private string ShortcutPrefsFilePath => Path.Combine(Application.persistentDataPath, "wearable_shortcut_prefs.json");

        private void LoadShortcutPrefs()
        {
            try
            {
                if (File.Exists(ShortcutPrefsFilePath))
                {
                    string json = File.ReadAllText(ShortcutPrefsFilePath);
                    ShortcutPrefsFile data = JsonUtility.FromJson<ShortcutPrefsFile>(json);

                    if (data?.EnabledKeys != null)
                    {
                        m_EnabledShortcutKeys = new HashSet<string>(data.EnabledKeys);
                        return;
                    }
                }
            }
            catch (Exception e)
            {
                Debug.LogWarning($"[WristShortcutMenu] Failed to load shortcut prefs from {ShortcutPrefsFilePath}: {e.Message}");
            }

            // No saved file yet (first run) or it failed to load - fall back to
            // each item's configured DefaultEnabled rather than showing nothing.
            m_EnabledShortcutKeys = new HashSet<string>();
            foreach (ShortcutItem item in m_ShortcutItems)
            {
                if (item.DefaultEnabled && !string.IsNullOrEmpty(item.Key))
                {
                    m_EnabledShortcutKeys.Add(item.Key);
                }
            }
        }

        private void SaveShortcutPrefs()
        {
            try
            {
                ShortcutPrefsFile data = new ShortcutPrefsFile
                {
                    EnabledKeys = new List<string>(m_EnabledShortcutKeys)
                };
                File.WriteAllText(ShortcutPrefsFilePath, JsonUtility.ToJson(data, true));
            }
            catch (Exception e)
            {
                Debug.LogWarning($"[WristShortcutMenu] Failed to save shortcut prefs to {ShortcutPrefsFilePath}: {e.Message}");
            }
        }

        /// <summary>
        /// Applies the current enabled/disabled state to every configured
        /// shortcut's Target GameObject. Call after loading prefs, and again
        /// any time m_ShortcutItems changes at runtime.
        /// </summary>
        private void ApplyShortcutVisibility()
        {
            foreach (ShortcutItem item in m_ShortcutItems)
            {
                if (item.Target == null || string.IsNullOrEmpty(item.Key))
                    continue;

                item.Target.SetActive(m_EnabledShortcutKeys.Contains(item.Key));
            }
        }

        /// <summary>
        /// Public hook for a future picker UI (the full-screen summoned menu)
        /// to call when the player changes which shortcuts they want on this
        /// wrist panel. Persists immediately and re-applies visibility.
        /// </summary>
        public void SetShortcutEnabled(string key, bool enabled)
        {
            if (string.IsNullOrEmpty(key))
                return;

            if (enabled)
            {
                m_EnabledShortcutKeys.Add(key);
            }
            else
            {
                m_EnabledShortcutKeys.Remove(key);
            }

            SaveShortcutPrefs();
            ApplyShortcutVisibility();
        }

        /// <summary>
        /// Public query for a future picker UI to show current state
        /// (e.g. which checkboxes should already be ticked).
        /// </summary>
        public bool IsShortcutEnabled(string key)
        {
            return !string.IsNullOrEmpty(key) && m_EnabledShortcutKeys.Contains(key);
        }
    }
}