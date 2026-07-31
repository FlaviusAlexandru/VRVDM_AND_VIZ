using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class BinaryImporter
{
    public static Dataset Load(string fileName)
    {
        // Try to load from processed data directory first
        string processedPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", "ProcessedData", fileName);
        
        if (File.Exists(processedPath))
        {
            Debug.Log($"Loading pre-processed dataset: {processedPath}");
            return LoadProcessedDataset(processedPath);
        }
        
        // Fallback to original CSV importer if processed file doesn't exist
        Debug.LogWarning($"Processed file not found: {processedPath}, falling back to CSV importer");
        string csvPath = Path.Combine(Application.dataPath, "StreamingAssetsRawData", fileName.Replace(".dataset", ".csv"));
        
        if (File.Exists(csvPath))
        {
            return CSVImporter.Load(csvPath);
        }
        
        // Try in regular streaming assets (backward compatibility)
        csvPath = Path.Combine(Application.streamingAssetsPath, fileName.Replace(".dataset", ".csv"));
        if (File.Exists(csvPath))
        {
            return CSVImporter.Load(csvPath);
        }
        
        Debug.LogError($"Dataset file not found: {fileName}");
        return null;
    }
    
    private static Dataset LoadProcessedDataset(string path)
    {
        try
        {
            string json = File.ReadAllText(path);
            DatasetData data = JsonUtility.FromJson<DatasetData>(json);
            
            if (data == null)
            {
                Debug.LogError($"Failed to parse JSON from: {path}");
                return null;
            }
            
            Dataset dataset = new Dataset(data.name);
            
            // Process columns
            foreach (ColumnData colData in data.columns)
            {
                DatasetColumn column = new DatasetColumn(colData.name);
                column.Type = ParseDataType(colData.type);
                column.MinValue = colData.minValue;
                column.MaxValue = colData.maxValue;
                
                foreach (string uniqueVal in colData.uniqueValues)
                {
                    column.UniqueValues.Add(uniqueVal);
                }
                
                dataset.Columns.Add(column);
                dataset.ColumnMapping[colData.name] = dataset.Columns.Count - 1;
            }
            
            // Process rows
            foreach (RowData rowData in data.rows)
            {
                DatasetRow row = new DatasetRow(data.columnCount);
                
                for (int i = 0; i < data.columnCount; i++)
                {
                    if (i < rowData.rawValues.Count)
                        row.SetRawValue(i, rowData.rawValues[i]);
                    
                    if (i < rowData.numericValues.Count)
                        row.SetNumericValue(i, rowData.numericValues[i]);
                    
                    if (i < rowData.normalizedValues.Count)
                        row.SetNormalizedValue(i, rowData.normalizedValues[i]);
                }
                
                dataset.Rows.Add(row);
            }
            
            dataset.FinalizeDatasetMetadata();
            
            Debug.Log($"Successfully loaded processed dataset '{dataset.Name}' ({dataset.RowCount} rows, {dataset.ColumnCount} columns)");
            return dataset;
        }
        catch (Exception e)
        {
            Debug.LogError($"Error loading processed dataset: {e.Message}");
            return null;
        }
    }
    
    private static DataValueType ParseDataType(string typeString)
    {
        switch (typeString.ToLower())
        {
            case "numeric":
                return DataValueType.Numeric;
            case "categorical":
                return DataValueType.Categorical;
            default:
                return DataValueType.Unknown;
        }
    }
}

// JSON Data Structures
[Serializable]
public class DatasetData
{
    public string name;
    public int columnCount;
    public int rowCount;
    public List<ColumnData> columns;
    public Dictionary<string, int> columnMapping;
    public List<RowData> rows;
}

[Serializable]
public class ColumnData
{
    public string name;
    public string type;
    public float minValue;
    public float maxValue;
    public List<string> uniqueValues;
    public int uniqueCount;
}

[Serializable]
public class RowData
{
    public List<string> rawValues;
    public List<float> numericValues;
    public List<float> normalizedValues;
}