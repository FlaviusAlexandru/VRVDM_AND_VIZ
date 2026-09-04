# VRVDM&VIZ - VR Data Visualization

A Unity 6-based VR data visualization system for interactive 3D scatterplot exploration in virtual reality environments.

## Features

- **GPU-Instanced Rendering**: Efficient rendering of large datasets using GPU instancing
- **Columnar Data Architecture**: Structure-of-Arrays layout for optimal performance with 1M+ row datasets
- **Binary Data Format**: Efficient binary serialization reducing file size and load times
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
│   │   ├── DatasetColumnar.cs       # Columnar data structure (Structure-of-Arrays)
│   │   ├── DatasetRowView.cs        # Thin row view for backward compatibility
│   │   ├── DatasetColumn.cs        # Column metadata and type inference
│   │   ├── CSVImporter.cs          # CSV data import and parsing (legacy)
│   │   ├── BinaryImporter.cs       # Legacy JSON binary data import
│   │   ├── ColumnarBinaryImporter.cs # New binary columnar data import
│   │   ├── preprocess_csv_columnar.py # New columnar Python preprocessing
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
└── StreamingAssets/
    └── DataCSV/
        ├── *.csv              # Original CSV files
        └── ProcessedData/    # Pre-processed binary files
            └── *.cdataset   # Columnar binary format
```

## Setup Instructions

### 1. Project Setup
- Clone the repository
- Open the project in Unity 6000.5.2f1 or later
- Wait for Unity to import packages and compile scripts

### 2. Dataset Preparation
The system uses a columnar data architecture for optimal performance with large datasets (1M+ rows).

**Architecture Benefits:**
- **Structure-of-Arrays**: Each column stored as contiguous float32/int32 arrays
- **Memory Efficiency**: Eliminates per-row object allocations and array overhead
- **Cache Locality**: Column-major layout optimized for data visualization workloads
- **On-Demand Computation**: Normalized values computed on-demand (one subtraction + divide)
- **Binary Format**: Direct binary serialization without JSON overhead
- **Build Compatibility**: Data stored in StreamingAssets for proper build support

**Step 1: Raw Data Placement**
- Place your CSV files in `Assets/StreamingAssets/DataCSV/` folder
- The system supports:
  - Numeric columns (for X, Y, Z axes)
  - Categorical columns (for color mapping)
  - Automatic type inference

**Step 2: Data Preprocessing**
- Run the columnar Python preprocessing script: `Assets/Scripts/Data/preprocess_csv_columnar.py`
- This script uses pandas to efficiently process CSV files
- Processed data is saved to `Assets/StreamingAssets/DataCSV/ProcessedData/` as binary `.cdataset` files
- Unity loads from processed data for instant loading (15-20 seconds → <0.5 seconds)

**To preprocess data:**
```bash
python Assets/Scripts/Data/preprocess_csv_columnar.py
```

**Workflow:**
1. Add/update CSV files in `Assets/StreamingAssets/DataCSV/`
2. Run columnar preprocessing script
3. Unity automatically loads from processed binary data
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
1. **Import**: Python preprocessing script converts CSV to columnar binary format
2. **Loading**: ColumnarBinaryImporter reads binary data into contiguous arrays
3. **Normalization**: Values normalized on-demand (0-1 range) for consistent visualization
4. **Rendering**: GPU instancing renders millions of points efficiently
5. **Interaction**: Raycast-based detection for hover states and tooltips

### Columnar Data Structure
- **DatasetColumnar**: Main container using Structure-of-Arrays layout
- **Per-Column Storage**: 
  - Numeric: `float32[rowCount]` per column
  - Categorical: `int32[rowCount]` indices + `string[]` category table
- **Row Views**: DatasetRowView provides backward-compatible row access without allocations
- **Memory Layout**: Column-major arrays optimized for cache locality and GPU uploads

## Development

### Branching Strategy
- `main`: Stable production code
- `Work-in-progress`: Active development and feature testing

### Key Components
- **DatasetColumnar**: Columnar data structure with Structure-of-Arrays layout
- **ColumnarBinaryImporter**: Binary data loader
- **ScatterplotVisualizer**: Main visualization controller
- **GPUPointInteractable**: Handles raycast detection and tooltips
- **MultiplayerScatterplotManager**: Manages dataset state and settings
- **preprocess_csv_columnar.py**: Python script for columnar binary conversion

### Adding New Features
1. Create feature branch from `Work-in-progress`
2. Implement changes following existing patterns
3. Test with various dataset types
4. Ensure proper cleanup in OnDestroy methods
5. Submit pull request with detailed description

## Known Issues

- **Unity 6 Compatibility**: Some XR features may have compatibility issues with Unity 6 preview
- **Legacy Support**: Old row-based dataset format still supported but deprecated
## Future Enhancements

- [ ] Additional visualization types (heatmaps, parallel coordinates)
- [x] * Advanced filtering and selection tools
- [ ] Data export and sharing capabilities
- [ ] Improved categorical color palette customization
- [ ] Real-time data streaming support
- [ ] Collaborative annotation features
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

- Unity Technologies for Unity 6 and XR Interaction Toolkit
- Photon for multiplayer networking capabilities

## Contact

For questions or issues, please open an issue in the GitHub repository.
Alternatively you can reach me at my AAU affiliated email:
flmi@create.aau.dk

---

**Last Updated**: 04-09-2026  
**Unity Version**: 6000.5.2f1  
**Project Status**: Active Development  
