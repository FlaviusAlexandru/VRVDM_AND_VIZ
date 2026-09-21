using DataViz;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Editor-only utility to bulk-wire MirroredUIControl onto every wrist-panel
/// control that ScatterplotUI actually listens to, pairing each one with its
/// SummonedMenuCanvas counterpart (the copy ScatterplotUI is wired to). Put
/// this file in an "Editor" folder anywhere under Assets, alongside
/// WristShortcutMenuSetup.cs.
///
/// Run via Tools > DataViz > Setup Wrist UI Mirrors with WristUIHolderCanvas
/// and SummonedMenuCanvas both present (and named exactly that) in the open
/// scene.
/// </summary>
public static class WristUIMirrorSetup
{
    private const string kWristCanvasName = "WristUIHolderCanvas";
    private const string kSummonedCanvasName = "SummonedMenuCanvas";

    // Child name -> control type. Must match a same-named direct child under
    // BOTH canvases. Only controls ScatterplotUI actually listens to belong
    // here - the section-visibility toggles (FilteringEnableToggle,
    // TimeAnimationEnableToggle, GlyphControlToggle) aren't ScatterplotUI
    // fields at all, so they're deliberately left out. Add Blacklist/Filter/
    // Glyph/Temporal controls here once those are ported onto the wrist panel.
    private static readonly (string Name, System.Type Type)[] kMirroredControls =
    {
        ("DatasetDropdown",     typeof(TMP_Dropdown)),
        ("xDropDown",           typeof(TMP_Dropdown)),
        ("yDropDown",           typeof(TMP_Dropdown)),
        ("zDropDown",           typeof(TMP_Dropdown)),
        ("ColorColumnDropdown", typeof(TMP_Dropdown)),
        ("PointSizeSlider",     typeof(Slider)),
        ("TooltipsToggle",      typeof(Toggle)),
        ("ShuffleButton",       typeof(Button)),
    };

    [MenuItem("Tools/DataViz/Setup Wrist UI Mirrors")]
    private static void SetupMirrors()
    {
        GameObject wristCanvas = GameObject.Find(kWristCanvasName);
        GameObject summonedCanvas = GameObject.Find(kSummonedCanvasName);

        if (wristCanvas == null || summonedCanvas == null)
        {
            Debug.LogError($"[WristUIMirrorSetup] Couldn't find '{kWristCanvasName}' and/or '{kSummonedCanvasName}' " +
                            "in the open scene - both must be present (and named exactly that) to wire mirrors.");
            return;
        }

        int wired = 0;
        foreach ((string name, System.Type type) in kMirroredControls)
        {
            Transform wristChild = wristCanvas.transform.Find(name);
            Transform summonedChild = summonedCanvas.transform.Find(name);

            if (wristChild == null || summonedChild == null)
            {
                Debug.LogWarning($"[WristUIMirrorSetup] Skipping '{name}': missing under " +
                                  $"{(wristChild == null ? kWristCanvasName : kSummonedCanvasName)}.");
                continue;
            }

            Component mirrorControl = wristChild.GetComponent(type);
            Component authControl = summonedChild.GetComponent(type);

            if (mirrorControl == null || authControl == null)
            {
                Debug.LogWarning($"[WristUIMirrorSetup] Skipping '{name}': expected a {type.Name} component on both copies.");
                continue;
            }
            
            MirroredUIControl mirror = wristChild.GetComponent<MirroredUIControl>();
            if (mirror == null)
            {
                mirror = Undo.AddComponent<MirroredUIControl>(wristChild.gameObject);
            }
            else
            {
                Undo.RecordObject(mirror, "Setup Wrist UI Mirrors");
            }

            SerializedObject serialized = new SerializedObject(mirror);
            serialized.FindProperty("m_Authoritative").objectReferenceValue = authControl;
            serialized.FindProperty("m_Mirror").objectReferenceValue = mirrorControl;
            serialized.ApplyModifiedProperties();

            EditorUtility.SetDirty(mirror);
            wired++;
        }

        Debug.Log($"[WristUIMirrorSetup] Wired {wired} of {kMirroredControls.Length} wrist control mirror(s).");
    }
}