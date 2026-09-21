using System.Collections.Generic;
using DataViz;
using UnityEditor;
using UnityEngine;

/// <summary>
/// Editor-only utility to bulk-populate WristShortcutMenu.m_ShortcutItems from
/// the wrist canvas's own children, instead of dragging each one into the
/// Inspector by hand. Put this file in an "Editor" folder anywhere under
/// Assets (e.g. Assets/Editor/WristShortcutMenuSetup.cs).
///
/// Run via Tools > DataViz > Setup Wrist Shortcut Keys with the
/// WristUIHolderCanvas (or any object holding a WristShortcutMenu) selected.
///
/// This CLEARS and REBUILDS the whole list each time it runs, matching
/// Key -> child name and DefaultEnabled from kDesiredShortcuts below. Edit
/// that list to add/remove/reorder items or change defaults, then re-run.
///
/// NOTE: per WristShortcutMenu's own warning, Key is what gets saved to
/// wearable_shortcut_prefs.json - don't rename a Key here once players may
/// have saved prefs referencing it. Add a new entry instead of renaming.
/// </summary>
public static class WristShortcutMenuSetup
{
    // (Key, DefaultEnabled) - Key must exactly match the name of a direct
    // child GameObject under the WristShortcutMenu's own transform.
    //
    // DefaultEnabled below is a reasonable starting guess (core axis/data
    // controls on, secondary toggles off to keep the wrist panel less
    // cluttered on first run) - tune to taste, either here or afterward in
    // the Inspector.
    //
    // TooltipAnchor is deliberately left out: it reads as a positioning
    // transform for tooltip placement, not a toggleable UI control. Add it
    // below if you actually want players to be able to hide/show it.
    private static readonly List<(string Key, bool DefaultEnabled)> kDesiredShortcuts = new()
    {
        ("DatasetDropdown",          true),
        ("xDropDown",                true),
        ("yDropDown",                true),
        ("zDropDown",                true),
        ("ColorColumnDropdown",      true),
        ("PointSizeSlider",          true),
        ("TooltipsToggle",           true),
        ("FilteringEnableToggle",    false),
        ("TimeAnimationEnableToggle",false),
        ("ShuffleButton",            true),
        ("GlyphControlToggle",       false),
    };

    [MenuItem("Tools/DataViz/Setup Wrist Shortcut Keys")]
    private static void SetupKeys()
    {
        WristShortcutMenu menu = Selection.activeGameObject != null
            ? Selection.activeGameObject.GetComponent<WristShortcutMenu>()
            : null;

        if (menu == null)
        {
            menu = Object.FindFirstObjectByType<WristShortcutMenu>();
        }

        if (menu == null)
        {
            Debug.LogError("[WristShortcutMenuSetup] No WristShortcutMenu found (select the " +
                            "GameObject it's on, e.g. WristUIHolderCanvas, or make sure one exists in the scene).");
            return;
        }

        Undo.RecordObject(menu, "Setup Wrist Shortcut Keys");

        SerializedObject serialized = new SerializedObject(menu);
        SerializedProperty itemsProp = serialized.FindProperty("m_ShortcutItems");
        itemsProp.ClearArray();

        int index = 0;
        List<string> missing = new List<string>();

        foreach ((string key, bool defaultEnabled) in kDesiredShortcuts)
        {
            Transform child = menu.transform.Find(key);
            if (child == null)
            {
                missing.Add(key);
                continue;
            }

            itemsProp.InsertArrayElementAtIndex(index);
            SerializedProperty element = itemsProp.GetArrayElementAtIndex(index);
            element.FindPropertyRelative("Key").stringValue = key;
            element.FindPropertyRelative("Target").objectReferenceValue = child.gameObject;
            element.FindPropertyRelative("DefaultEnabled").boolValue = defaultEnabled;
            index++;
        }

        serialized.ApplyModifiedProperties();
        EditorUtility.SetDirty(menu);

        Debug.Log($"[WristShortcutMenuSetup] Populated {index} shortcut item(s) on '{menu.name}'.");
        if (missing.Count > 0)
        {
            Debug.LogWarning("[WristShortcutMenuSetup] Skipped (no matching child found): " + string.Join(", ", missing));
        }
    }
}