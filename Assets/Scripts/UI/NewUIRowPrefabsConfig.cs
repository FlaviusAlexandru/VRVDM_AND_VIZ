using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// The "widget" you link prefabs into. Create one via
/// Assets > Create > DataViz > New UI Row Prefabs Config.
///
/// Editor-only by design (lives in an Editor folder) - nothing at runtime
/// needs to know about this asset, it's purely a one-time authoring input.
/// </summary>
[CreateAssetMenu(fileName = "NewUIRowPrefabs", menuName = "DataViz/New UI Row Prefabs Config")]
public class NewUIRowPrefabsConfig : ScriptableObject
{
    [Header("Row Prefabs (individual controls, from Spatial Panel Manipulator UI Examples)")]
    [Tooltip("Prefab with a Slider component nested inside (e.g. 'List Item Slider').")]
    public GameObject SliderRowPrefab;

    [Tooltip("Prefab with a Button component nested inside (e.g. 'List Item Button').")]
    public GameObject ButtonRowPrefab;

    [Tooltip("Prefab with a TMP_Dropdown component nested inside (e.g. 'List Item Dropdown').")]
    public GameObject DropdownRowPrefab;

    [Tooltip("Prefab with a Toggle component nested inside (e.g. 'List Item Toggle').")]
    public GameObject ToggleRowPrefab;

    [Header("Target Canvases (must already exist in the open scene)")]
    public string SummonedCanvasName = "SummonedMenuCanvas";
    public string WristCanvasName = "WristUIHolderCanvas";

    [Header("Wrist Auto-Arrange")]
    [Tooltip("Gap in pixels between wrist panels when they're auto-arranged to fit the wrist canvas's " +
             "own width/height (wraps to a new row when the next panel would overflow the canvas width). " +
             "Reorder entries in Panels above to control left-to-right/top-to-bottom placement order.")]
    public float WristPanelSpacing = 24f;

    [Header("Panel Prefabs (your own hand-built panel backgrounds)")]
    [Tooltip("Only add an entry for a panel you actually want built on the wrist - a panel with no entry " +
             "here is simply never touched by the wrist-build step (its summoned controls are still looked " +
             "up and wired into ScatterplotUI regardless, since that lookup doesn't use this list). " +
             "PanelKey must exactly match the panel's GameObject name under SummonedMenuCanvas, and the " +
             "matching PanelKey in NewUISetup's kControlSpecs table.")]
    public List<PanelPrefabEntry> Panels = new();
}

[System.Serializable]
public class PanelPrefabEntry
{
    public string PanelKey;
    public GameObject PanelPrefab;

    [Header("Wrist placement")]
    [Tooltip("Applied to the wrist instance's localScale after creation. Leave (1,1,1) unless the " +
             "panel needs shrinking to fit comfortably on the wrist relative to the summoned version. " +
             "Position is computed automatically each run - see WristPanelSpacing above.")]
    public Vector3 WristLocalScale = Vector3.one;
}
