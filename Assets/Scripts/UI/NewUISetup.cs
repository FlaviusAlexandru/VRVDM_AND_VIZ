using System.Collections.Generic;
using System.Reflection;
using DataViz;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Populates WristUIHolderCanvas from your hand-built panel prefabs
/// (AxisControlPanelBackground, DatasetControlPanelBackground, etc. - linked
/// via a NewUIRowPrefabsConfig asset), mirroring each wrist control against
/// its already-hand-placed SummonedMenuCanvas counterpart and updating
/// WristShortcutMenu's shortcut list.
///
/// IMPORTANT: this tool NEVER creates, renames, or modifies anything on
/// SummonedMenuCanvas - you've built and styled those panels by hand, so it
/// only ever *looks up* existing summoned controls (by panel name, then by
/// control name inside it) to (a) mirror the wrist copy against and (b)
/// re-wire ScatterplotUI's field. If a summoned control can't be found, the
/// wrist row is still created (unmirrored) with a warning logged - it won't
/// drive real logic until the lookup is fixed (usually a naming mismatch
/// between this table and your actual hierarchy).
///
/// The wrist side IS destructively rebuilt each run, same as before, just at
/// panel granularity now instead of per-control: any existing wrist panel
/// with a matching name gets renamed "<name>_Legacy" first, then a fresh one
/// is instantiated from its prefab and repopulated.
///
/// Run via Tools > DataViz > New UI Setup.
/// </summary>
public static class NewUISetup
{
    private enum RowType { Dropdown, Slider, Toggle, Button }

    private class ControlSpec
    {
        public string Key;                     // GameObject name, both canvases + WristShortcutMenu Key
        public string PanelKey;                // which panel this control lives under, both canvases
        public RowType Type;
        public string Label;
        public string ScatterplotUIFieldName;  // exact public field name on ScatterplotUI
        public bool WristDefaultEnabled;
    }

    // PanelKey must match a PanelKey entry on the config asset's Panels list (for
    // wrist creation) AND the actual GameObject name of that panel under
    // SummonedMenuCanvas (for lookup). Whether a panel - and therefore every
    // control tagged with its key - gets built on the wrist is controlled
    // entirely by whether that PanelKey has an entry in config.Panels, not
    // anything in this table.
    private static readonly ControlSpec[] kControlSpecs =
    {
        new ControlSpec { Key = "xDropDown",               PanelKey = "AxisControlPanelBackground",         Type = RowType.Dropdown, Label = "X Axis",          ScatterplotUIFieldName = "m_XColumnDropdown",         WristDefaultEnabled = true },
        new ControlSpec { Key = "yDropDown",               PanelKey = "AxisControlPanelBackground",         Type = RowType.Dropdown, Label = "Y Axis",          ScatterplotUIFieldName = "m_YColumnDropdown",         WristDefaultEnabled = true },
        new ControlSpec { Key = "zDropDown",               PanelKey = "AxisControlPanelBackground",         Type = RowType.Dropdown, Label = "Z Axis",          ScatterplotUIFieldName = "m_ZColumnDropdown",         WristDefaultEnabled = true },
        new ControlSpec { Key = "XAxisLockToggle",         PanelKey = "AxisControlPanelBackground",         Type = RowType.Toggle,   Label = "Lock X",          ScatterplotUIFieldName = "m_XAxisLockToggle",         WristDefaultEnabled = false },
        new ControlSpec { Key = "YAxisLockToggle",         PanelKey = "AxisControlPanelBackground",         Type = RowType.Toggle,   Label = "Lock Y",          ScatterplotUIFieldName = "m_YAxisLockToggle",         WristDefaultEnabled = false },
        new ControlSpec { Key = "ZAxisLockToggle",         PanelKey = "AxisControlPanelBackground",         Type = RowType.Toggle,   Label = "Lock Z",          ScatterplotUIFieldName = "m_ZAxisLockToggle",         WristDefaultEnabled = false },

        new ControlSpec { Key = "DatasetDropdown",         PanelKey = "DatasetControlPanelBackground",      Type = RowType.Dropdown, Label = "Dataset",         ScatterplotUIFieldName = "m_DatasetDropdown",         WristDefaultEnabled = true },
        new ControlSpec { Key = "TooltipsToggle",          PanelKey = "DatasetControlPanelBackground",      Type = RowType.Toggle,   Label = "Tooltips",        ScatterplotUIFieldName = "m_TooltipsToggle",          WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleButton",           PanelKey = "DatasetControlPanelBackground",      Type = RowType.Button,   Label = "Shuffle",         ScatterplotUIFieldName = "m_ShuffleButton",           WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleBackwardButton",   PanelKey = "DatasetControlPanelBackground",      Type = RowType.Button,   Label = "<<",              ScatterplotUIFieldName = "m_ShuffleBackwardButton",   WristDefaultEnabled = true },
        new ControlSpec { Key = "ShuffleForwardButton",    PanelKey = "DatasetControlPanelBackground",      Type = RowType.Button,   Label = ">>",              ScatterplotUIFieldName = "m_ShuffleForwardButton",    WristDefaultEnabled = true },

        new ControlSpec { Key = "ColorColumnDropdown",     PanelKey = "PointControlPanelBackground",        Type = RowType.Dropdown, Label = "Color",           ScatterplotUIFieldName = "m_ColorColumnDropdown",     WristDefaultEnabled = true },
        new ControlSpec { Key = "PointSizeSlider",         PanelKey = "PointControlPanelBackground",        Type = RowType.Slider,   Label = "Point Size",      ScatterplotUIFieldName = "m_PointSizeSlider",         WristDefaultEnabled = true },

        new ControlSpec { Key = "TimeColumnDropdown",      PanelKey = "TimeControlsPanelBackground",        Type = RowType.Dropdown, Label = "Time Column",     ScatterplotUIFieldName = "m_TimeColumnDropdown",      WristDefaultEnabled = true },
        new ControlSpec { Key = "TimeScrubSlider",         PanelKey = "TimeControlsPanelBackground",        Type = RowType.Slider,   Label = "Time Scrub",      ScatterplotUIFieldName = "m_TimeScrubSlider",         WristDefaultEnabled = true },
        new ControlSpec { Key = "PlayPauseButton",         PanelKey = "TimeControlsPanelBackground",        Type = RowType.Button,   Label = "Play / Pause",    ScatterplotUIFieldName = "m_PlayPauseButton",         WristDefaultEnabled = true },

        new ControlSpec { Key = "BlacklistColumnDropdown", PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Dropdown, Label = "Blacklist Column",ScatterplotUIFieldName = "m_BlacklistColumnDropdown", WristDefaultEnabled = false },
        new ControlSpec { Key = "BlacklistToggle",         PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Toggle,   Label = "Blacklisted",     ScatterplotUIFieldName = "m_BlacklistToggle",         WristDefaultEnabled = false },
        new ControlSpec { Key = "BookmarkColumnDropdown",  PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Dropdown, Label = "Bookmark Column", ScatterplotUIFieldName = "m_BookmarkColumnDropdown",  WristDefaultEnabled = false },
        new ControlSpec { Key = "BookmarkToggle",          PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Toggle,   Label = "Bookmarked",      ScatterplotUIFieldName = "m_BookmarkToggle",          WristDefaultEnabled = false },
        new ControlSpec { Key = "FilterLabelDropdown",     PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Dropdown, Label = "Filter Column",   ScatterplotUIFieldName = "m_FilterLabelDropdown",     WristDefaultEnabled = false },
        new ControlSpec { Key = "FilterIndexDropdown",     PanelKey = "PreferencesControlsPanelBackground", Type = RowType.Dropdown, Label = "Filter Value",    ScatterplotUIFieldName = "m_FilterIndexDropdown",     WristDefaultEnabled = false },

        new ControlSpec { Key = "GlyphColumnDropdown",     PanelKey = "GlyphControlsPanelBackground",       Type = RowType.Dropdown, Label = "Glyph Column",    ScatterplotUIFieldName = "m_GlyphColumnDropdown",     WristDefaultEnabled = false },
        new ControlSpec { Key = "GlyphLabelDropdown",      PanelKey = "GlyphControlsPanelBackground",       Type = RowType.Dropdown, Label = "Glyph Label",     ScatterplotUIFieldName = "m_GlyphLabelDropdown",      WristDefaultEnabled = false },
        new ControlSpec { Key = "GlyphShapeDropdown",      PanelKey = "GlyphControlsPanelBackground",       Type = RowType.Dropdown, Label = "Glyph Shape",     ScatterplotUIFieldName = "m_GlyphShapeDropdown",      WristDefaultEnabled = false },
    };

    [MenuItem("Tools/DataViz/New UI Setup")]
    private static void RunSetup()
    {
        NewUIRowPrefabsConfig config = FindConfig();
        if (config == null)
        {
            Debug.LogError("[NewUISetup] No NewUIRowPrefabsConfig asset found. Create one via " +
                            "Assets > Create > DataViz > New UI Row Prefabs Config, assign the four " +
                            "row prefabs and your panel prefabs, then run this again.");
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

        Undo.RegisterCompleteObjectUndo(ui, "New UI Setup");
        if (shortcutMenu != null)
            Undo.RegisterCompleteObjectUndo(shortcutMenu, "New UI Setup");

        int wired = 0, wristCreated = 0, notFoundOnSummoned = 0;
        Dictionary<string, Transform> wristPanelCache = new();

        foreach (ControlSpec spec in kControlSpecs)
        {
            // --- Summoned side: LOOK UP ONLY. Never created, renamed, or modified. ---
            Transform summonedRow = FindSummonedRow(summonedCanvas.transform, spec);
            Component summonedControl = summonedRow != null ? GetControlComponent(summonedRow.gameObject, spec.Type) : null;

            if (summonedControl != null)
            {
                if (WireScatterplotUIField(ui, spec.ScatterplotUIFieldName, summonedControl))
                    wired++;
            }
            else
            {
                notFoundOnSummoned++;
                Debug.LogWarning($"[NewUISetup] Couldn't find '{spec.Key}' under panel '{spec.PanelKey}' on " +
                                  $"{config.SummonedCanvasName} - check the panel/control are named exactly that.");
            }

            // --- Wrist side: rebuilt fresh, only for panels present in config.Panels. ---
            PanelPrefabEntry panelEntry = config.Panels.Find(p => p.PanelKey == spec.PanelKey);
            if (panelEntry == null || panelEntry.PanelPrefab == null)
                continue;

            if (!wristPanelCache.TryGetValue(spec.PanelKey, out Transform wristPanel))
            {
                wristPanel = GetOrCreateWristPanel(wristCanvas.transform, panelEntry);
                wristPanelCache[spec.PanelKey] = wristPanel;
            }

            RenameExistingIfPresent(wristPanel, spec.Key);

            GameObject rowPrefab = RowPrefabFor(config, spec.Type);
            GameObject wristRow = CreateRow(spec, wristPanel, rowPrefab);
            Component wristControl = GetControlComponent(wristRow, spec.Type);

            if (summonedRow is RectTransform summonedRowRect && wristRow.transform is RectTransform wristRowRect)
                CopyRectTransform(summonedRowRect, wristRowRect);

            if (summonedControl != null)
                AddMirror(wristRow, summonedControl, wristControl);

            if (shortcutMenu != null)
                AddOrUpdateShortcutItem(shortcutMenu, spec.Key, wristRow, spec.WristDefaultEnabled);

            wristCreated++;
        }

        ArrangeWristPanels(wristCanvas.GetComponent<RectTransform>(), config, wristPanelCache);

        EditorUtility.SetDirty(ui);
        if (shortcutMenu != null)
            EditorUtility.SetDirty(shortcutMenu);

        Debug.Log($"[NewUISetup] Wired {wired} ScatterplotUI field(s) from existing summoned controls, " +
                  $"created {wristCreated} wrist row(s), {notFoundOnSummoned} summoned lookup(s) failed " +
                  "(see warnings above). SummonedMenuCanvas itself was never modified.");
    }

    /// <summary>
    /// Positions every wrist panel built this run in a left-to-right, wrap-when-overflowing
    /// layout - like CSS flex-wrap, computed here rather than via a Unity Layout Group
    /// component, specifically to avoid Grid Layout Group's forced-uniform-cell-size problem.
    /// Each panel keeps its own real size (times its configured WristLocalScale); only its
    /// position changes. Order follows config.Panels' list order - reorder entries there to
    /// change placement order. Assumes each panel's RectTransform uses a centered (0.5, 0.5)
    /// anchor, matching every panel prefab seen so far in this project.
    /// </summary>
    private static void ArrangeWristPanels(RectTransform wristCanvasRect, NewUIRowPrefabsConfig config, Dictionary<string, Transform> wristPanelCache)
    {
        if (wristCanvasRect == null) return;

        float canvasWidth = wristCanvasRect.rect.width;
        float canvasHeight = wristCanvasRect.rect.height;

        float cursorX = 0f;
        float cursorY = 0f;
        float rowHeight = 0f;

        foreach (PanelPrefabEntry entry in config.Panels)
        {
            if (!wristPanelCache.TryGetValue(entry.PanelKey, out Transform panel))
                continue; // not built this run (no control referenced it, or prefab missing)

            if (!(panel is RectTransform panelRect))
                continue;

            float panelWidth = panelRect.rect.width * entry.WristLocalScale.x;
            float panelHeight = panelRect.rect.height * entry.WristLocalScale.y;

            if (cursorX > 0f && cursorX + panelWidth > canvasWidth)
            {
                cursorX = 0f;
                cursorY -= rowHeight + config.WristPanelSpacing;
                rowHeight = 0f;
            }

            // Convert a top-left-origin cursor into an anchoredPosition offset from
            // the canvas's own center, matching a centered-pivot RectTransform.
            float posX = -canvasWidth / 2f + cursorX + panelWidth / 2f;
            float posY = canvasHeight / 2f + cursorY - panelHeight / 2f;
            panelRect.anchoredPosition = new Vector2(posX, posY);

            cursorX += panelWidth + config.WristPanelSpacing;
            rowHeight = Mathf.Max(rowHeight, panelHeight);
        }
    }

    private static NewUIRowPrefabsConfig FindConfig()
    {
        string[] guids = AssetDatabase.FindAssets("t:NewUIRowPrefabsConfig");
        if (guids.Length == 0) return null;
        string path = AssetDatabase.GUIDToAssetPath(guids[0]);
        return AssetDatabase.LoadAssetAtPath<NewUIRowPrefabsConfig>(path);
    }

    /// <summary>Finds spec.Key's row anywhere inside a same-named panel child of summonedCanvasRoot,
    /// at any depth - not just as a direct child, since your panel reorganizing may have nested
    /// some controls deeper than others. Returns the row's own Transform (not just its control
    /// component) so its RectTransform can be copied onto the wrist version.</summary>
    private static Transform FindSummonedRow(Transform summonedCanvasRoot, ControlSpec spec)
    {
        Transform panel = summonedCanvasRoot.Find(spec.PanelKey);
        if (panel == null) return null;

        return FindDeepChild(panel, spec.Key);
    }

    /// <summary>Copies anchors/pivot/position/size from one RectTransform onto another, so a
    /// wrist row lands in the exact same relative spot its summoned counterpart occupies within
    /// its panel - scaling to fit the wrist canvas is then just the panel's own localScale.</summary>
    private static void CopyRectTransform(RectTransform source, RectTransform target)
    {
        target.anchorMin = source.anchorMin;
        target.anchorMax = source.anchorMax;
        target.pivot = source.pivot;
        target.anchoredPosition = source.anchoredPosition;
        target.sizeDelta = source.sizeDelta;
    }

    private static Transform FindDeepChild(Transform parent, string name)
    {
        foreach (Transform child in parent)
        {
            if (child.name == name)
                return child;

            Transform found = FindDeepChild(child, name);
            if (found != null)
                return found;
        }
        return null;
    }

    /// <summary>Renames any existing same-named wrist panel to "_Legacy", then instantiates a fresh one.</summary>
    private static Transform GetOrCreateWristPanel(Transform wristCanvasRoot, PanelPrefabEntry panelEntry)
    {
        Transform existing = wristCanvasRoot.Find(panelEntry.PanelKey);
        if (existing != null)
            existing.name = panelEntry.PanelKey + "_Legacy";

        GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(panelEntry.PanelPrefab, wristCanvasRoot);
        instance.name = panelEntry.PanelKey;
        instance.transform.localScale = panelEntry.WristLocalScale;
        Undo.RegisterCreatedObjectUndo(instance, "New UI Setup");

        return instance.transform;
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
            existing.name = name + "_Legacy";
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

    private static bool WireScatterplotUIField(ScatterplotUI ui, string fieldName, Component value)
    {
        if (string.IsNullOrEmpty(fieldName) || value == null)
            return false;

        FieldInfo field = typeof(ScatterplotUI).GetField(fieldName);
        if (field == null)
        {
            Debug.LogWarning($"[NewUISetup] ScatterplotUI has no field '{fieldName}'.");
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
