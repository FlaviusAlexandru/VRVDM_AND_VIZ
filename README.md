# VRVDM&VIZ - VR Data Visualization

<img width="1299" height="751" alt="image" src="https://github.com/user-attachments/assets/ee5fba77-ed20-4f9c-9763-f90e6bcc3f28" />


A Unity 6-based VR data visualization system for interactive 3D scatterplot exploration in virtual reality environments.

## Features

- **VFX Graph Point Rendering**: Points are streamed to a VFX Graph through a `GraphicsBuffer` (`ScatterplotVFXRenderer`), so large datasets render on the GPU without one GameObject per point
- **Columnar Data Architecture**: Structure-of-Arrays layout built for large datasets
- **Binary Data Format**: Pre-processed `.cdataset` files (Python + pandas) for fast loading
- **Interactive 3D Scatterplots**: Pick X / Y / Z columns, grab, move and two-hand scale the whole plot (`CoordinateSystemInteractable`, XRI grab)
- **Categorical & Numeric Color Mapping**: Gradient for numeric columns, palette for categorical columns
- **Point Size**: 0-100 % slider, where 100 % = `MultiplayerScatterplotManager.MaxPointSize`
- **Time Animation**: Pick a time column, scrub through time steps or play them back
- **Filtering**: Pick a column and a value; non-matching points are dimmed (not removed)
- **Glyphs**: Assign a shape per label of a chosen column
- **Axis Locks**: Lock X / Y / Z so shuffles leave that axis alone
- **Shuffle**: Randomly re-maps columns to the axes/color/time, with back / forward through previous shuffles
- **Column Preferences**: Blacklist or bookmark columns (saved to disk between sessions)
- **Tooltips**: Gaze-based hover shows a point's values in a docked tooltip with a highlight aura; pin it with the right trigger
- **VR Menus**: A wrist hand menu (XRI `HandMenu`) with customizable shortcuts, plus a full summoned menu (left grip)
- **Multiplayer (planned)**: The state manager's API is RPC-shaped, but no networking is wired up yet - see [Known Issues](#known-issues)

## Developed and Tested on the following System Specifications:

- **Unity Version**: Unity 6000.5.2f1 (Unity 6)
- **Platform**: Windows 11
- **CPU**: Intel(R) Core(TM) Ultra 9 285K
- **Graphics**: NVIDIA RTX PRO 4000 (24GB VRAM) 
- **VR Headset**: Vive Focus Vision Pro
- **RAM**: 64GB

## Project Structure

```
Assets/
├── Scripts/
│   ├── Data/
│   │   ├── DatasetColumnar.cs          # Columnar data structure (Structure-of-Arrays)
│   │   ├── DatasetColumn.cs            # Column metadata and type
│   │   ├── DatasetRowView.cs           # Thin row view for backward compatibility
│   │   ├── ColumnarBinaryImporter.cs   # Loads .cdataset files (current format)
│   │   ├── preprocess_csv_columnar.py  # CSV -> .cdataset converter (pandas)
│   │   ├── CSVImporter.cs              # Legacy row-based CSV import (fallback)
│   │   ├── BinaryImporter.cs           # Legacy binary import
│   │   ├── Dataset.cs / DatasetRow.cs  # Legacy row-based data structure
│   │   └── DatasetManager.cs           # Legacy singleton for the row-based path
│   ├── Grid/
│   │   └── VisualizationGridSettings.cs
│   ├── Scatterplot/
│   │   ├── MultiplayerScatterplotManager.cs  # Plot state: dataset, columns, size, time, filters, shuffle
│   │   ├── ScatterplotVisualizer.cs          # Builds axes/grid and point data from the state
│   │   ├── ScatterplotVFXRenderer.cs         # VFX Graph + GraphicsBuffer point renderer (in use)
│   │   ├── ScatterplotInstancedRenderer.cs   # Older GPU-instancing renderer (not in use)
│   │   ├── ScatterplotParticleRenderer.cs    # Older Particle System renderer (not in use)
│   │   ├── GPUPointInteractable.cs           # Gaze hover, tooltip, pin, aura
│   │   ├── CoordinateSystemInteractable.cs   # Grab / dock / two-hand scale of the plot
│   │   ├── DataPointInteractable.cs          # Per-GameObject point interaction (legacy)
│   │   └── ScatterplotUI.cs                  # Wires the menu controls to the manager
│   └── UI/
│       ├── WristhShortcutMenu.cs       # Which wrist controls are shown (saved to disk)
│       ├── SummonedMenuController.cs   # Summons the full menu in front of the player
│       ├── MirroredUIControl.cs        # Makes wrist controls drive the summoned-menu controls
│       ├── DropdownItemSound.cs        # Hover/click sound on dropdown items
│       ├── UISharedAudio.cs            # One shared AudioSource for UI sounds
│       ├── NewUISetup.cs               # Editor tool: Tools > DataViz > New UI Setup
│       └── NewUIRowPrefabsConfig.cs    # Config asset for NewUISetup
├── Prefabs/
│   ├── DataVisualizationTable.prefab   # Main visualization prefab
│   └── SummonedMenuCanvas.prefab
├── Scenes/
│   └── SampleScene.unity               # Main scene (the only scene in the build)
└── StreamingAssets/
    └── DataCSV/
        ├── *.csv                        # Original CSV files
        └── ProcessedData/
            └── *.cdataset               # Columnar binary files the app loads
```

## Setup Instructions

### 1. Project Setup
- Clone the repository
- Open the project in Unity 6000.5.2f1 or later
- Wait for Unity to import packages and compile scripts
- Open `Assets/Scenes/SampleScene.unity`

### 2. Dataset Preparation
The system uses a columnar data architecture built for large datasets.

**Architecture Benefits:**
- **Structure-of-Arrays**: Each column stored as a contiguous array (float32 for numeric, int32 indices for categorical)
- **Memory Efficiency**: Eliminates per-row object allocations and array overhead
- **Cache Locality**: Column-major layout optimized for data visualization workloads
- **On-Demand Computation**: Normalized values computed on-demand (one subtraction + divide)
- **Binary Format**: Direct binary serialization without JSON overhead
- **Build Compatibility**: Data stored in StreamingAssets for proper build support

**Step 1: Raw Data Placement**
- Place your CSV files in `Assets/StreamingAssets/DataCSV/`
- Column types are inferred automatically (see [Supported Data Types](#supported-data-types))

**Step 2: Data Preprocessing**
- Requires Python 3 with `pandas` and `numpy`
- Run `Assets/Scripts/Data/preprocess_csv_columnar.py` - it converts **every** CSV in `DataCSV/`
- Output goes to `Assets/StreamingAssets/DataCSV/ProcessedData/` as `.cdataset` files (format `DVCB`, version 2)

**To preprocess data:**
```bash
pip install pandas numpy
python Assets/Scripts/Data/preprocess_csv_columnar.py
```

**Workflow:**
1. Add/update CSV files in `Assets/StreamingAssets/DataCSV/`
2. Run the preprocessing script
3. The dataset dropdown lists the `.cdataset` files in `ProcessedData/`
4. If a `.cdataset` is missing, the app falls back to parsing the CSV with the legacy `CSVImporter` (slow, and logs a warning)

### 3. XR Configuration
- Navigate to `Project Settings > XR Plug-in Management`
- OpenXR is enabled for both Windows (Standalone) and Android
- Configure the OpenXR features/interaction profiles for your headset (VIVE OpenXR, Meta and Android XR packages are included)

### 4. Scene Setup
`SampleScene` is already set up. To build a new scene:
- Add the `DataVisualizationTable` prefab (includes `ScatterplotVisualizer`, `GPUPointInteractable`, `ScatterplotVFXRenderer` and the grab setup)
- Add a `MultiplayerScatterplotManager` and a `ScatterplotUI`, and assign the UI controls on `ScatterplotUI`
- For the wrist menu: run **Tools > DataViz > New UI Setup** (needs a `NewUIRowPrefabsConfig` asset, `SummonedMenuCanvas` and `WristUIHolderCanvas` in the scene)
- Put the XRI `HandMenu` component on a separate GameObject from the wrist canvas it shows/hides

## Usage

### Basic Workflow
1. **Load Dataset**: Select a dataset from the dataset dropdown
2. **Configure Axes**: Choose X, Y, Z columns (or press **Shuffle**)
3. **Color Mapping**: Select a column for color coding (numeric gradient or categorical palette)
4. **Adjust Point Size**: Use the 0-100 % slider
5. **Time / Filter / Glyphs**: Optionally pick a time column, a filter value, or glyph shapes per label
6. **Explore Data**: Look at points to inspect them, grab the plot to move or scale it

### VR Controls
- **Hover**: Look at a point - hover follows your **head gaze** (center of view), not the controller ray
- **Pin tooltip**: Right trigger
- **Summoned menu**: Left grip toggles the full menu in front of you
- **Wrist menu**: Turn your palm / controller towards your face (XRI `HandMenu`, see below)
- **Move / scale the plot**: Grab it; grab with both hands to scale
- **Navigation**: XRI locomotion (teleport / move)

#### How the wrist menu activates
The XRI `HandMenu` checks a pose every frame. It takes the palm anchors (Left / Right Controller) and uses the active Follow Preset to decide which local axis counts as the "palm" (in the XRI sample presets: Down for hand tracking, Right for controllers). The menu shows when that "palm" faces the camera, points roughly up, is within the gaze angle, and that hand isn't grabbing anything. `Menu Handedness = Either` means whichever hand meets the conditions gets it.

Which controls appear on the wrist is saved per player in `wearable_shortcut_prefs.json` (in `Application.persistentDataPath`). Delete that file to go back to the defaults.

## Data Format

### CSV Structure
```csv
Column1,Column2,Column3,CategoryColumn
1.5,2.3,0.8,CategoryA
3.2,1.1,2.4,CategoryB
0.9,4.5,1.2,CategoryA
```

### Supported Data Types
The preprocessing script infers one of three types per column:
- **Numeric**: 90 % or more of the values parse as numbers
- **DateTime**: otherwise, 90 % or more of the values parse as dates/times
- **Categorical**: everything else (stored as int32 indices + a string table)

Booleans and text are treated as categorical.

## Architecture

### Data Pipeline
1. **Import**: Python preprocessing script converts CSV to columnar binary format
2. **Loading**: `ColumnarBinaryImporter` reads binary data into contiguous arrays
3. **State**: `MultiplayerScatterplotManager` holds the plot settings; UI changes go through its `Request...Rpc` methods, and it raises `OnPlotSettingsChanged`
4. **Build**: `ScatterplotVisualizer` rebuilds axes/grid and per-point position/color/size/glyph data (time steps filtered, filtered-out points dimmed)
5. **Rendering**: `ScatterplotVFXRenderer` uploads the point data to a `GraphicsBuffer` read by the VFX Graph
6. **Interaction**: `GPUPointInteractable` finds the point closest to the head-gaze ray for hover, tooltip and pin

### Columnar Data Structure
- **DatasetColumnar**: Main container using Structure-of-Arrays layout
- **Per-Column Storage**: 
  - Numeric: `float32[rowCount]` per column
  - Categorical: `int32[rowCount]` indices + `string[]` category table
- **Row Views**: DatasetRowView provides backward-compatible row access without allocations
- **Memory Layout**: Column-major arrays optimized for cache locality and GPU uploads

### Saved Preferences
Stored in `Application.persistentDataPath`:
- `scatterplot_column_prefs.json` - blacklisted columns
- `scatterplot_bookmark_prefs.json` - bookmarked columns
- `wearable_shortcut_prefs.json` - which wrist-menu controls are shown

## Development

### Branching Strategy
- `main`: Stable production code
- `Work-in-progress`: Active development and feature testing

### Key Components
- **DatasetColumnar**: Columnar data structure with Structure-of-Arrays layout
- **ColumnarBinaryImporter**: Binary data loader
- **MultiplayerScatterplotManager**: Holds and changes the plot state (local only for now)
- **ScatterplotVisualizer**: Main visualization controller
- **ScatterplotVFXRenderer**: GPU point rendering via VFX Graph
- **GPUPointInteractable**: Gaze hover, tooltips and pinning
- **ScatterplotUI**: Connects menu controls to the manager
- **preprocess_csv_columnar.py**: Python script for columnar binary conversion

### Adding New Features
1. Create feature branch from `Work-in-progress`
2. Implement changes following existing patterns
3. Test with various dataset types
4. Ensure proper cleanup in OnDestroy methods
5. Submit pull request with detailed description

## Known Issues

- **No networking yet**: `MultiplayerScatterplotManager` is a plain `MonoBehaviour`; its `Request...Rpc` methods only change local state. The Photon PUN assets and the `com.unity.netcode` package are in the project but not used by any project script.
- **Player builds fail**: `NewUISetup.cs`, `WristShortcutMenuSetup.cs` and `WristUIMirrorSetup.cs` use `UnityEditor` but live in `Assets/Scripts/UI` without `#if UNITY_EDITOR`. Move them into an `Editor` folder before building.
- **Large datasets and GC**: Large datasets live in managed memory, so a full garbage collection can cause a noticeable hitch (e.g. when opening a large dropdown).
- **Point size 0**: A point size of 0 makes points invisible and breaks tooltip scaling (`0.2f / pointSize`).
- **Legacy Support**: Old row-based dataset format still supported (CSV fallback) but deprecated.

## Future Enhancements

- [ ] Additional visualization types (heatmaps, parallel coordinates)
- [x] * Advanced filtering and selection tools
- [ ] Data export and sharing capabilities
- [ ] Improved categorical color palette customization
- [ ] Real-time data streaming support
- [ ] Collaborative annotation features
- [ ] Networked multiplayer
- [x] * Shuffle button that shuffles for example how the data source is mapped, or the data source itself etc., maybe expand to include colors etc.

* *As of Sept. 4, 2026* 

## Contributing

Contributions are welcome! Please follow these guidelines:
1. Fork the repository
2. Create a feature branch
3. Make your changes following existing code patterns
4. Test thoroughly with various datasets
5. Submit a pull request with clear description

## License

This project uses Unity Personal License. See individual package licenses for third-party dependencies.

## Acknowledgments

- Unity Technologies for Unity 6, VFX Graph and the XR Interaction Toolkit (including its VR Template UI assets)
- Photon (PUN) is included in the project for future multiplayer work

## Contact

For questions or issues, please open an issue in the GitHub repository.
Alternatively you can reach me at my AAU affiliated email:
flmi@create.aau.dk

---

**Last Updated**: 24-09-2026  
**Unity Version**: 6000.5.2f1  
**Project Status**: Active Development  
