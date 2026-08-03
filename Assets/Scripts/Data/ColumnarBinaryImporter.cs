using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

/// <summary>
/// Binary importer for columnar dataset format.
/// Reads efficient binary files and populates DatasetColumnar objects.
/// </summary>
public static class ColumnarBinaryImporter
{
    // File format constants
    private const byte MAGIC_0 = (byte)'D';
    private const byte MAGIC_1 = (byte)'V';
    private const byte MAGIC_2 = (byte)'C';
    private const byte MAGIC_3 = (byte)'B';
    
    private const ushort EXPECTED_VERSION = 1;
    
    // Column type codes
    private const byte TYPE_NUMERIC = 1;
    private const byte TYPE_CATEGORICAL = 2;

    public static DatasetColumnar Load(string fileName)
    {
        // Try to load from processed data directory
        string processedPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", "ProcessedData", fileName);
        
        if (!File.Exists(processedPath))
        {
            // Try with .cdataset extension if not provided
            if (!fileName.EndsWith(".cdataset"))
            {
                processedPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", "ProcessedData", fileName + ".cdataset");
            }
        }
        
        if (File.Exists(processedPath))
        {
            Debug.Log($"Loading columnar dataset: {processedPath}");
            return LoadColumnarDataset(processedPath);
        }
        
        Debug.LogError($"Columnar dataset file not found: {fileName}");
        return null;
    }

    private static DatasetColumnar LoadColumnarDataset(string path)
    {
        try
        {
            using (BinaryReader reader = new BinaryReader(File.OpenRead(path)))
            {
                // Read and verify magic bytes
                byte magic0 = reader.ReadByte();
                byte magic1 = reader.ReadByte();
                byte magic2 = reader.ReadByte();
                byte magic3 = reader.ReadByte();
                
                if (magic0 != MAGIC_0 || magic1 != MAGIC_1 || magic2 != MAGIC_2 || magic3 != MAGIC_3)
                {
                    Debug.LogError($"Invalid file format: {path}");
                    return null;
                }
                
                // Read version
                ushort version = reader.ReadUInt16();
                if (version != EXPECTED_VERSION)
                {
                    Debug.LogError($"Unsupported version: {version} (expected {EXPECTED_VERSION})");
                    return null;
                }
                
                // Read row and column count
                int rowCount = reader.ReadInt32();
                int columnCount = reader.ReadInt32();
                
                Debug.Log($"Loading dataset: {rowCount} rows, {columnCount} columns");
                
                // Create dataset
                string name = Path.GetFileNameWithoutExtension(path);
                DatasetColumnar dataset = new DatasetColumnar(name, rowCount, columnCount);
                
                // Read columns
                for (int colIndex = 0; colIndex < columnCount; colIndex++)
                {
                    // Read column name
                    byte nameLength = reader.ReadByte();
                    string colName = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(nameLength));
                    
                    // Read column type
                    byte colType = reader.ReadByte();
                    
                    DatasetColumn column = new DatasetColumn(colName);
                    
                    // Add column to dataset first so ColumnCount is updated
                    dataset.Columns.Add(column);
                    dataset.ColumnMapping[colName] = colIndex;
                    
                    if (colType == TYPE_NUMERIC)
                    {
                        // Read min/max
                        float minValue = reader.ReadSingle();
                        float maxValue = reader.ReadSingle();
                        
                        column.Type = DataValueType.Numeric;
                        column.MinValue = minValue;
                        column.MaxValue = maxValue;
                        
                        // Read float32 data
                        float[] numericData = new float[rowCount];
                        for (int i = 0; i < rowCount; i++)
                        {
                            numericData[i] = reader.ReadSingle();
                        }
                        
                        dataset.SetNumericColumn(colIndex, numericData);
                        Debug.Log($"  Column {colIndex}: {colName} (Numeric) range: [{minValue:F4}, {maxValue:F4}]");
                    }
                    else if (colType == TYPE_CATEGORICAL)
                    {
                        // Read category count
                        int categoryCount = reader.ReadInt32();
                        
                        // Read category strings
                        string[] categoryTable = new string[categoryCount];
                        for (int catIndex = 0; catIndex < categoryCount; catIndex++)
                        {
                            ushort catLength = reader.ReadUInt16();
                            categoryTable[catIndex] = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(catLength));
                        }
                        
                        // Read int32 category indices
                        int[] categoryIndices = new int[rowCount];
                        for (int i = 0; i < rowCount; i++)
                        {
                            categoryIndices[i] = reader.ReadInt32();
                        }
                        
                        column.Type = DataValueType.Categorical;
                        foreach (string catVal in categoryTable)
                        {
                            column.UniqueValues.Add(catVal);
                        }
                        
                        dataset.SetCategoricalColumn(colIndex, categoryIndices, categoryTable);
                        Debug.Log($"  Column {colIndex}: {colName} (Categorical) {categoryCount} unique values");
                    }
                    else
                    {
                        Debug.LogError($"Unknown column type: {colType}");
                        return null;
                    }
                }
                
                dataset.FinalizeDatasetMetadata();
                
                Debug.Log($"Successfully loaded columnar dataset '{dataset.Name}' ({dataset.RowCount} rows, {dataset.ColumnCount} columns)");
                return dataset;
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error loading columnar dataset: {e.Message}");
            Debug.LogError(e.StackTrace);
            return null;
        }
    }
}
