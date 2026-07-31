# VRVDM&VIZ - VR Data Visualization

A Unity 6-based VR data visualization system for interactive 3D scatterplot exploration in virtual reality environments.

## Features

- **GPU-Instanced Rendering**: Efficient rendering of large datasets using GPU instancing
- **Interactive 3D Scatterplots**: Explore data in 3D space with intuitive VR controls
- **Categorical & Numeric Color Mapping**: Support for both gradient and palette-based coloring
- **Real-time Data Updates**: Dynamic dataset loading and visualization updates
- **VR Interaction**: Built-in XR interaction toolkit for hover detection and data inspection
- **Tooltip System**: Detailed data point information on hover with color-coded categories
- **Multiplayer Ready**: Photon networking integration for collaborative data exploration - !!CURRENTLY NOT FULLY IMPLEMENTED!!

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
│   │   ├── Dataset.cs              # Core data structure
│   │   ├── DatasetRow.cs           # Row data management
│   │   ├── DatasetColumn.cs        # Column metadata and type inference
│   │   ├── CSVImporter.cs          # CSV data import and parsing (legacy)
│   │   ├── BinaryImporter.cs       # Fast binary data import
│   │   ├── preprocess_csv.py       # Python preprocessing script
│   │   └── DatasetManager.cs       # Dataset singleton manager
│   └── Scatterplot/
│       ├── ScatterplotVisualizer.cs    # Main visualization controller
│       ├── ScatterplotInstancedRenderer.cs  # GPU instancing renderer
│       ├── GPUPointInteractable.cs       # Raycast-based interaction
│       ├── MultiplayerScatterplotManager.cs # Data state management
│       ├── ScatterplotUI.cs             # UI controls and dropdowns
│       └── DataPointInteractable.cs     # Individual point interaction
├── Prefabs/
│   └── DataVisualizationTable.prefab  # Main visualization prefab
└── Assets/
    └── StreamingAssetsRawData/
        ├── *.csv                      # Original CSV files
        └── ProcessedData/            # Pre-processed JSON files
            └── *.dataset
```

## Setup Instructions

### 1. Project Setup
- Clone the repository
- Open the project in Unity 6000.5.2f1 or later
- Wait for Unity to import packages and compile scripts

### 2. Dataset Preparation
The system uses a two-step data loading process for optimal performance:

**Step 1: Raw Data Placement**
- Place your CSV files in `Assets/StreamingAssetsRawData/` folder
- The system supports:
  - Numeric columns (for X, Y, Z axes)
  - Categorical columns (for color mapping)
  - Automatic type inference

**Step 2: Data Preprocessing**
- Run the Python preprocessing script: `Assets/Scripts/Data/preprocess_csv.py`
- This script uses pandas to efficiently process CSV files
- Processed data is saved to `Assets/StreamingAssetsRawData/ProcessedData/` as JSON
- Unity loads from processed data for instant loading (15-20 seconds → <1 second)

**To preprocess data:**
```bash
python Assets/Scripts/Data/preprocess_csv.py
```

**Workflow:**
1. Add/update CSV files in `Assets/StreamingAssetsRawData/`
2. Run preprocessing script
3. Unity automatically loads from processed data
4. For new datasets, repeat steps 1-2

### 3. XR Configuration
- Navigate to `Project Settings > XR > Plug-in Management`
- Configure OpenXR settings for your VR headset
- For desktop-only mode, OpenXR can be disabled

### 4. Scene Setup
- Add the `DataVisualizationTable` prefab to your scene
- Configure the `ScatterplotVisualizer` component references
- Set up UI dropdowns for column selection

## Usage

### Basic Workflow
1. **Load Dataset**: Select a CSV file from the dataset dropdown
2. **Configure Axes**: Choose X, Y, Z columns from respective dropdowns
3. **Color Mapping**: Select a column for color coding (numeric gradient or categorical palette)
4. **Adjust Point Size**: Use the slider to change point visibility
5. **Explore Data**: Use VR controllers or mouse to interact with data points

### VR Controls
- **Hover**: Point controller at data points to see detailed tooltips
- **Navigation**: Use VR locomotion system to move around the visualization
- **Inspection**: Get detailed information about individual data points

### Desktop Controls
- **Mouse**: Hover over points for tooltips
- **Camera**: Use standard Unity camera controls for navigation

## Data Format

### CSV Structure
```csv
Column1,Column2,Column3,CategoryColumn
1.5,2.3,0.8,CategoryA
3.2,1.1,2.4,CategoryB
0.9,4.5,1.2,CategoryA
```

### Supported Data Types
- **Numeric**: Float values for continuous data
- **Categorical**: String values for discrete categories
- **Boolean**: true/false values

## Architecture

### Data Pipeline
1. **Import**: CSVImporter parses CSV files and infers column types
2. **Normalization**: Values are normalized to 0-1 range for consistent visualization
3. **Rendering**: GPU instancing renders thousands of points efficiently
4. **Interaction**: Raycast-based detection for hover states and tooltips


## Development

### Branching Strategy
- `main`: Stable production code
- `Work-in-progress`: Active development and feature testing

### Key Components
- **ScatterplotVisualizer**: Main visualization controller
- **GPUPointInteractable**: Handles raycast detection and tooltips
- **MultiplayerScatterplotManager**: Manages dataset state and settings
- **CSVImporter**: Handles data parsing and type inference

### Adding New Features
1. Create feature branch from `Work-in-progress`
2. Implement changes following existing patterns
3. Test with various dataset types
4. Ensure proper cleanup in OnDestroy methods
5. Submit pull request with detailed description

## Known Issues

- **Unity 6 Compatibility**: Some XR features may have compatibility issues with Unity 6 preview
- **Large Dataset Performance**: Datasets >100k points may experience performance degradation
## Future Enhancements

- [ ] Additional visualization types (heatmaps, parallel coordinates)
- [ ] Advanced filtering and selection tools
- [ ] Data export and sharing capabilities
- [ ] Improved categorical color palette customization
- [ ] Real-time data streaming support
- [ ] Collaborative annotation features
- [ ] Shuffle button that shuffles for example how the data source is mapped, or the data source itself etc., maybe expand to include colors etc.

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

- Unity Technologies for Unity 6 and XR Interaction Toolkit
- Photon for multiplayer networking capabilities

## Contact

For questions or issues, please open an issue in the GitHub repository.
Alternatively you can reach me at my AAU affiliated email:
flmi@create.aau.dk

---

**Last Updated**: 2026-07-24  
**Unity Version**: 6000.5.2f1  
**Project Status**: Active Development