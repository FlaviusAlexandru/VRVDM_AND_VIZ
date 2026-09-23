using UnityEngine;

/// <summary>
/// The "widget" you link the sample UI's row prefabs into. Create one via
/// Assets > Create > DataViz > New UI Row Prefabs Config, drag in the four
/// row prefabs from Spatial Panel Manipulator UI Examples (List Item Slider,
/// List Item Button, List Item Dropdown, List Item Toggle), then run
/// Tools > DataViz > New UI Setup.
///
/// Editor-only by design (lives in an Editor folder) - nothing at runtime
/// needs to know about this asset, it's purely a one-time authoring input.
/// </summary>
[CreateAssetMenu(fileName = "NewUIRowPrefabs", menuName = "DataViz/New UI Row Prefabs Config")]
public class NewUIRowPrefabsConfig : ScriptableObject
{
    [Header("Row Prefabs (from Spatial Panel Manipulator UI Examples)")]
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

    [Header("Optional: parent new rows under a child of the canvas instead of the canvas root")]
    [Tooltip("Leave blank to parent directly under SummonedMenuCanvas. Otherwise a child path, " +
             "e.g. 'Scroll View/Viewport/Content' if you want rows to land in a scrollable list.")]
    public string SummonedContainerPath = "";

    [Tooltip("Leave blank to parent directly under WristUIHolderCanvas (matches your current flat layout).")]
    public string WristContainerPath = "";
}
