using System.Reflection;
using DataViz;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Builds both SummonedMenuCanvas's and WristUIHolderCanvas's UI from the
/// sample's row prefabs (linked via a NewUIRowPrefabsConfig asset - see that
/// file), wiring each new control into ScatterplotUI's matching field,
/// adding MirroredUIControl on wrist copies, and updating WristShortcutMenu's
/// shortcut list - all in one run, replacing the need to run
/// WristShortcutMenuSetup/WristUIMirrorSetup separately afterward.
///
/// Run via Tools > DataViz > New UI Setup. Requires a NewUIRowPrefabsConfig
/// asset to exist somewhere in the project with all four prefabs assigned.
///
/// Idempotent-ish: re-running renames any existing GameObject with a target
/// row's name to "<name>_Legacy" first (rather than erroring or creating a
/// same-named duplicate silently), then creates a fresh row. Old rows are
/// left in the scene, not deleted - verify the new ones work, then delete
/// the _Legacy objects by hand.
/// </summary>
public static class NewUISetup
{
    private enum RowType { Dropdown, Slider, Toggle, Button }

    private class ControlSpec
    {
        public string Key;                     // GameObject name + WristShortcutMenu Key
        public RowType Type;
        public string Label;
        public string ScatterplotUIFieldName;  // exact public field name on ScatterplotUI
        public bool OnSummoned;
        public bool OnWrist;
        public bool WristDefaultEnabled;
    }

    // Edit this table to add/remove/retarget controls - same pattern as your
    // existing kDesiredShortcuts/kMirroredControls tables. ScatterplotUIFieldName
    // is looked up by reflection: if a field doesn't exist yet (e.g. you haven't
    // added the Bookmark/Lock fields yet), that row is still created, just not
    // wired into ScatterplotUI - you'll get a warning, not an error.
    //
    // ShuffleBackwardButton/ShuffleForwardButton field names are my best guess
    // from your naming convention (m_ShuffleBackwardButton/m_ShuffleForwardButton) -
    // fix the strings below if ScatterplotUI actually names them differently.
    private static readonly ControlSpec[] kControlSpecs =
    {
        new ControlSpec { Key = "DatasetDropdown",         Type = RowType.Dropdown, Label = "Dataset",          ScatterplotUIFieldName = "m_DatasetDropdown",         OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "xDropDown",                Type = RowType.Dropdown, Label = "X Axis",           ScatterplotUIFieldName = "m_XColumnDropdown",         OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "yDropDown",                Type = RowType.Dropdown, Label = "Y Axis",           ScatterplotUIFieldName = "m_YColumnDropdown",         OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "zDropDown",                Type = RowType.Dropdown, Label = "Z Axis",           ScatterplotUIFieldName = "m_ZColumnDropdown",         OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "ColorColumnDropdown",      Type = RowType.Dropdown, Label = "Color",            ScatterplotUIFieldName = "m_ColorColumnDropdown",     OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "PointSizeSlider",          Type = RowType.Slider,   Label = "Point Size",       ScatterplotUIFieldName = "m_PointSizeSlider",         OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "TooltipsToggle",           Type = RowType.Toggle,   Label = "Tooltips",         ScatterplotUIFieldName = "m_TooltipsToggle",          OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleButton",            Type = RowType.Button,   Label = "Shuffle",          ScatterplotUIFieldName = "m_ShuffleButton",           OnSummoned = true, OnWrist = true,  WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleBackwardButton",    Type = RowType.Button,   Label = "Shuffle Back",     ScatterplotUIFieldName = "m_ShuffleBackwardButton",   OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "ShuffleForwardButton",     Type = RowType.Button,   Label = "Shuffle Forward",  ScatterplotUIFieldName = "m_ShuffleForwardButton",    OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "TimeColumnDropdown",       Type = RowType.Dropdown, Label = "Time Column",      ScatterplotUIFieldName = "m_TimeColumnDropdown",      OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "TimeScrubSlider",          Type = RowType.Slider,   Label = "Time Scrub",       ScatterplotUIFieldName = "m_TimeScrubSlider",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "PlayPauseButton",          Type = RowType.Button,   Label = "Play / Pause",     ScatterplotUIFieldName = "m_PlayPauseButton",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "BlacklistColumnDropdown",  Type = RowType.Dropdown, Label = "Blacklist Column", ScatterplotUIFieldName = "m_BlacklistColumnDropdown", OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "BlacklistToggle",          Type = RowType.Toggle,   Label = "Blacklisted",      ScatterplotUIFieldName = "m_BlacklistToggle",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "BookmarkColumnDropdown",   Type = RowType.Dropdown, Label = "Bookmark Column",  ScatterplotUIFieldName = "m_BookmarkColumnDropdown",  OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "BookmarkToggle",           Type = RowType.Toggle,   Label = "Bookmarked",       ScatterplotUIFieldName = "m_BookmarkToggle",          OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "FilterLabelDropdown",      Type = RowType.Dropdown, Label = "Filter Column",    ScatterplotUIFieldName = "m_FilterLabelDropdown",     OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "FilterIndexDropdown",      Type = RowType.Dropdown, Label = "Filter Value",     ScatterplotUIFieldName = "m_FilterIndexDropdown",     OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "GlyphColumnDropdown",      Type = RowType.Dropdown, Label = "Glyph Column",     ScatterplotUIFieldName = "m_GlyphColumnDropdown",     OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "GlyphLabelDropdown",       Type = RowType.Dropdown, Label = "Glyph Label",      ScatterplotUIFieldName = "m_GlyphLabelDropdown",      OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "GlyphShapeDropdown",       Type = RowType.Dropdown, Label = "Glyph Shape",      ScatterplotUIFieldName = "m_GlyphShapeDropdown",      OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "XAxisLockToggle",          Type = RowType.Toggle,   Label = "Lock X",           ScatterplotUIFieldName = "m_XAxisLockToggle",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "YAxisLockToggle",          Type = RowType.Toggle,   Label = "Lock Y",           ScatterplotUIFieldName = "m_YAxisLockToggle",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "ZAxisLockToggle",          Type = RowType.Toggle,   Label = "Lock Z",           ScatterplotUIFieldName = "m_ZAxisLockToggle",         OnSummoned = true, OnWrist = false, WristDefaultEnabled = false },
        new ControlSpec { Key = "ShuffleBackwardButton", Type = RowType.Button, Label = "<<", ScatterplotUIFieldName = "m_ShuffleBackwardButton", OnSummoned = true, OnWrist = true, WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleForwardButton",  Type = RowType.Button, Label = ">>", ScatterplotUIFieldName = "m_ShuffleForwardButton",  OnSummoned = true, OnWrist = true, WristDefaultEnabled = true },
    };

    [MenuItem("Tools/DataViz/New UI Setup")]
    private static void RunSetup()
    {
        NewUIRowPrefabsConfig config = FindConfig();
        if (config == null)
        {
            Debug.LogError("[NewUISetup] No NewUIRowPrefabsConfig asset found. Create one via " +
                            "Assets > Create > DataViz > New UI Row Prefabs Config, assign the four " +
                            "row prefabs, then run this again.");
            return;
        }

        if (config.SliderRowPrefab == null || config.ButtonRowPrefab == null ||
            config.DropdownRowPrefab == null || config.ToggleRowPrefab == null)
        {
            Debug.LogError("[NewUISetup] Assign all four row prefabs on the config asset before running.", config);
            return;
        }

        GameObject summonedCanvas = GameObject.Find(config.SummonedCanvasName);
        GameObject wristCanvas = GameObject.Find(config.WristCanvasName);
        ScatterplotUI ui = Object.FindFirstObjectByType<ScatterplotUI>();
        WristShortcutMenu shortcutMenu = Object.FindFirstObjectByType<WristShortcutMenu>();

        if (summonedCanvas == null || wristCanvas == null || ui == null)
        {
            Debug.LogError($"[NewUISetup] Couldn't find '{config.SummonedCanvasName}', '{config.WristCanvasName}', " +
                            "and/or a ScatterplotUI in the open scene.");
            return;
        }

        if (shortcutMenu == null)
        {
            Debug.LogWarning("[NewUISetup] No WristShortcutMenu found - wrist rows will still be created and " +
                              "mirrored, but won't get shortcut visibility entries.");
        }

        Transform summonedParent = ResolveContainer(summonedCanvas.transform, config.SummonedContainerPath);
        Transform wristParent = ResolveContainer(wristCanvas.transform, config.WristContainerPath);

        Undo.RegisterCompleteObjectUndo(ui, "New UI Setup");
        if (shortcutMenu != null)
            Undo.RegisterCompleteObjectUndo(shortcutMenu, "New UI Setup");

        int created = 0;
        int skippedFields = 0;

        foreach (ControlSpec spec in kControlSpecs)
        {
            GameObject rowPrefab = RowPrefabFor(config, spec.Type);
            Component summonedControl = null;

            if (spec.OnSummoned)
            {
                RenameExistingIfPresent(summonedParent, spec.Key);
                GameObject row = CreateRow(spec, summonedParent, rowPrefab);
                summonedControl = GetControlComponent(row, spec.Type);

                if (!WireScatterplotUIField(ui, spec.ScatterplotUIFieldName, summonedControl))
                    skippedFields++;

                created++;
            }

            if (spec.OnWrist)
            {
                RenameExistingIfPresent(wristParent, spec.Key);
                GameObject row = CreateRow(spec, wristParent, rowPrefab);
                Component wristControl = GetControlComponent(row, spec.Type);

                if (summonedControl != null)
                    AddMirror(row, summonedControl, wristControl);

                if (shortcutMenu != null)
                    AddOrUpdateShortcutItem(shortcutMenu, spec.Key, row, spec.WristDefaultEnabled);

                created++;
            }
        }

        EditorUtility.SetDirty(ui);
        if (shortcutMenu != null)
            EditorUtility.SetDirty(shortcutMenu);

        Debug.Log($"[NewUISetup] Created {created} row instance(s) across both canvases " +
                  $"({skippedFields} ScatterplotUI field(s) skipped - field didn't exist, row still created). " +
                  "Old controls with matching names were renamed to '<name>_Legacy', not deleted - verify the " +
                  "new ones work, then remove the legacy objects by hand.");
    }

    private static NewUIRowPrefabsConfig FindConfig()
    {
        string[] guids = AssetDatabase.FindAssets("t:NewUIRowPrefabsConfig");
        if (guids.Length == 0) return null;

        string path = AssetDatabase.GUIDToAssetPath(guids[0]);
        return AssetDatabase.LoadAssetAtPath<NewUIRowPrefabsConfig>(path);
    }

    private static Transform ResolveContainer(Transform canvasRoot, string path)
    {
        if (string.IsNullOrEmpty(path))
            return canvasRoot;

        Transform found = canvasRoot.Find(path);
        return found != null ? found : canvasRoot;
    }

    private static GameObject RowPrefabFor(NewUIRowPrefabsConfig config, RowType type) => type switch
    {
        RowType.Dropdown => config.DropdownRowPrefab,
        RowType.Slider => config.SliderRowPrefab,
        RowType.Toggle => config.ToggleRowPrefab,
        RowType.Button => config.ButtonRowPrefab,
        _ => null
    };

    private static void RenameExistingIfPresent(Transform parent, string name)
    {
        Transform existing = parent.Find(name);
        if (existing != null)
        {
            existing.name = name + "_Legacy";
        }
    }

    private static GameObject CreateRow(ControlSpec spec, Transform parent, GameObject rowPrefab)
    {
        GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(rowPrefab, parent);
        instance.name = spec.Key;
        Undo.RegisterCreatedObjectUndo(instance, "New UI Setup");

        Transform labelTransform = instance.transform.Find("Label");
        if (labelTransform != null)
        {
            TMP_Text labelText = labelTransform.GetComponentInChildren<TMP_Text>(true);
            if (labelText != null)
                labelText.text = spec.Label;
        }

        return instance;
    }

    private static Component GetControlComponent(GameObject row, RowType type) => type switch
    {
        RowType.Dropdown => row.GetComponentInChildren<TMP_Dropdown>(true),
        RowType.Slider => row.GetComponentInChildren<Slider>(true),
        RowType.Toggle => row.GetComponentInChildren<Toggle>(true),
        RowType.Button => row.GetComponentInChildren<Button>(true),
        _ => null
    };

    /// <summary>Returns false (and logs) if the named field doesn't exist on ScatterplotUI.</summary>
    private static bool WireScatterplotUIField(ScatterplotUI ui, string fieldName, Component value)
    {
        if (string.IsNullOrEmpty(fieldName) || value == null)
            return true; // nothing to wire, not an error

        FieldInfo field = typeof(ScatterplotUI).GetField(fieldName);
        if (field == null)
        {
            Debug.LogWarning($"[NewUISetup] ScatterplotUI has no field '{fieldName}' - row created but not " +
                              "wired. (Bookmark/Lock fields need adding to ScatterplotUI.cs first if that's what this is.)");
            return false;
        }

        field.SetValue(ui, value);
        return true;
    }

    private static void AddMirror(GameObject wristRow, Component authoritative, Component mirror)
    {
        MirroredUIControl mirrorComponent = wristRow.GetComponent<MirroredUIControl>();
        if (mirrorComponent == null)
            mirrorComponent = Undo.AddComponent<MirroredUIControl>(wristRow);

        SerializedObject serialized = new SerializedObject(mirrorComponent);
        serialized.FindProperty("m_Authoritative").objectReferenceValue = authoritative;
        serialized.FindProperty("m_Mirror").objectReferenceValue = mirror;
        serialized.ApplyModifiedProperties();

        EditorUtility.SetDirty(mirrorComponent);
    }

    private static void AddOrUpdateShortcutItem(WristShortcutMenu menu, string key, GameObject target, bool defaultEnabled)
    {
        SerializedObject serialized = new SerializedObject(menu);
        SerializedProperty itemsProp = serialized.FindProperty("m_ShortcutItems");

        for (int i = itemsProp.arraySize - 1; i >= 0; i--)
        {
            SerializedProperty element = itemsProp.GetArrayElementAtIndex(i);
            if (element.FindPropertyRelative("Key").stringValue == key)
                itemsProp.DeleteArrayElementAtIndex(i);
        }

        int newIndex = itemsProp.arraySize;
        itemsProp.InsertArrayElementAtIndex(newIndex);
        SerializedProperty newElement = itemsProp.GetArrayElementAtIndex(newIndex);
        newElement.FindPropertyRelative("Key").stringValue = key;
        newElement.FindPropertyRelative("Target").objectReferenceValue = target;
        newElement.FindPropertyRelative("DefaultEnabled").boolValue = defaultEnabled;

        serialized.ApplyModifiedProperties();
    }
}
