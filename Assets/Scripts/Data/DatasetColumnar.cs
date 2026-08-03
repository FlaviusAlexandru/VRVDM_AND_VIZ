using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Columnar Dataset using Structure-of-Arrays layout for optimal performance
/// with large datasets (1M+ rows). Stores data as contiguous arrays per column
/// instead of row objects, dramatically improving cache locality and reducing
/// GC pressure.
/// </summary>
[Serializable]
public class DatasetColumnar
{
    /// <summary>
    /// Dataset name (usually filename).
    /// </summary>
    public string Name;

    /// <summary>
    /// Column metadata.
    /// </summary>
    public List<DatasetColumn> Columns = new();

    /// <summary>
    /// Fast column lookup.
    /// </summary>
    public Dictionary<string, int> ColumnMapping = new();

    /// <summary>
    /// Numeric data storage - one contiguous float array per column.
    /// Only populated for numeric columns.
    /// </summary>
    private float[][] m_NumericColumns;

    /// <summary>
    /// Categorical data storage - one contiguous int array per column.
    /// Stores category indices (0 to categoryCount-1).
    /// Only populated for categorical columns.
    /// </summary>
    private int[][] m_CategoricalColumns;

    /// <summary>
    /// Category tables for categorical columns - mapping from index to string.
    /// Only populated for categorical columns.
    /// </summary>
    private string[][] m_CategoryTables;

    /// <summary>
    /// Thin row views for backward compatibility.
    /// These don't store data - they just reference the parent column arrays.
    /// </summary>
    private DatasetRowView[] m_RowViews;

    public int RowCount { get; private set; }
    public int ColumnCount => Columns.Count;

    public DatasetColumnar(string name, int rowCount, int columnCount)
    {
        Name = name;
        RowCount = rowCount;
        
        m_NumericColumns = new float[columnCount][];
        m_CategoricalColumns = new int[columnCount][];
        m_CategoryTables = new string[columnCount][];
        m_RowViews = new DatasetRowView[rowCount];
        
        // Initialize row views (they'll reference this dataset)
        for (int i = 0; i < rowCount; i++)
        {
            m_RowViews[i] = new DatasetRowView(this, i);
        }
    }

    /// <summary>
    /// Initialize storage for a numeric column.
    /// </summary>
    public void SetNumericColumn(int columnIndex, float[] values)
    {
        if (columnIndex < 0 || columnIndex >= ColumnCount)
            throw new ArgumentOutOfRangeException(nameof(columnIndex));
        
        if (values.Length != RowCount)
            throw new ArgumentException($"Expected {RowCount} values, got {values.Length}");
        
        m_NumericColumns[columnIndex] = values;
    }

    /// <summary>
    /// Initialize storage for a categorical column.
    /// </summary>
    public void SetCategoricalColumn(int columnIndex, int[] categoryIndices, string[] categoryTable)
    {
        if (columnIndex < 0 || columnIndex >= ColumnCount)
            throw new ArgumentOutOfRangeException(nameof(columnIndex));
        
        if (categoryIndices.Length != RowCount)
            throw new ArgumentException($"Expected {RowCount} indices, got {categoryIndices.Length}");
        
        m_CategoricalColumns[columnIndex] = categoryIndices;
        m_CategoryTables[columnIndex] = categoryTable;
    }

    /// <summary>
    /// Get raw numeric value for a specific cell.
    /// </summary>
    public float GetNumericValue(int rowIndex, int columnIndex)
    {
        if (columnIndex < 0 || columnIndex >= ColumnCount)
            return 0f;
        
        if (rowIndex < 0 || rowIndex >= RowCount)
            return 0f;
        
        float[] column = m_NumericColumns[columnIndex];
        if (column == null)
            return 0f;
        
        return column[rowIndex];
    }

    /// <summary>
    /// Get category index for a specific cell.
    /// </summary>
    public int GetCategoryIndex(int rowIndex, int columnIndex)
    {
        if (columnIndex < 0 || columnIndex >= ColumnCount)
            return 0;
        
        if (rowIndex < 0 || rowIndex >= RowCount)
            return 0;
        
        int[] column = m_CategoricalColumns[columnIndex];
        if (column == null)
            return 0;
        
        return column[rowIndex];
    }

    /// <summary>
    /// Get category string for a specific cell.
    /// </summary>
    public string GetCategoryValue(int rowIndex, int columnIndex)
    {
        int categoryIndex = GetCategoryIndex(rowIndex, columnIndex);
        string[] table = m_CategoryTables[columnIndex];
        
        if (table == null || categoryIndex < 0 || categoryIndex >= table.Length)
            return "";
        
        return table[categoryIndex];
    }

    /// <summary>
    /// Get normalized value (0-1) for a specific cell.
    /// Computed on-demand from raw values - no storage overhead.
    /// </summary>
    public float GetNormalizedValue(int rowIndex, int columnIndex)
    {
        DatasetColumn column = Columns[columnIndex];
        
        if (column == null)
            return 0f;
        
        if (column.IsNumeric)
        {
            float rawValue = GetNumericValue(rowIndex, columnIndex);
            float range = column.MaxValue - column.MinValue;
            
            if (Mathf.Abs(range) < 0.00001f)
                return 0f;
            
            return Mathf.Clamp01((rawValue - column.MinValue) / range);
        }
        
        if (column.IsCategorical)
        {
            int categoryIndex = GetCategoryIndex(rowIndex, columnIndex);
            string[] table = m_CategoryTables[columnIndex];
            
            if (table == null || table.Length <= 1)
                return 0f;
            
            return (float)categoryIndex / (table.Length - 1);
        }
        
        return 0f;
    }

    /// <summary>
    /// Get raw string value for a specific cell (for tooltips).
    /// Reconstructed on-demand from the underlying data.
    /// </summary>
    public string GetRawValue(int rowIndex, int columnIndex)
    {
        DatasetColumn column = Columns[columnIndex];
        
        if (column == null)
            return "";
        
        if (column.IsNumeric)
        {
            float value = GetNumericValue(rowIndex, columnIndex);
            return value.ToString("F4"); // 4 decimal places for display
        }
        
        if (column.IsCategorical)
        {
            return GetCategoryValue(rowIndex, columnIndex);
        }
        
        return "";
    }

    /// <summary>
    /// Get a thin row view for backward compatibility.
    /// This doesn't copy data - it just provides indexed access to column arrays.
    /// </summary>
    public DatasetRowView GetRow(int rowIndex)
    {
        if (rowIndex < 0 || rowIndex >= RowCount)
            return null;
        
        return m_RowViews[rowIndex];
    }

    /// <summary>
    /// Get normalized values for a single column as a contiguous buffer.
    /// Optimized for GPU uploads - returns direct array access.
    /// </summary>
    public float[] GetNormalizedColumnBuffer(int columnIndex)
    {
        if (columnIndex < 0 || columnIndex >= ColumnCount)
            return Array.Empty<float>();
        
        DatasetColumn column = Columns[columnIndex];
        float[] buffer = new float[RowCount];
        
        if (column.IsNumeric)
        {
            float[] sourceColumn = m_NumericColumns[columnIndex];
            if (sourceColumn == null)
                return buffer;
            
            float range = column.MaxValue - column.MinValue;
            float invRange = Mathf.Abs(range) < 0.00001f ? 0f : 1f / range;
            float min = column.MinValue;
            
            for (int i = 0; i < RowCount; i++)
            {
                buffer[i] = Mathf.Clamp01((sourceColumn[i] - min) * invRange);
            }
        }
        else if (column.IsCategorical)
        {
            int[] sourceColumn = m_CategoricalColumns[columnIndex];
            string[] table = m_CategoryTables[columnIndex];
            
            if (sourceColumn == null || table == null || table.Length <= 1)
                return buffer;
            
            float divisor = table.Length - 1;
            
            for (int i = 0; i < RowCount; i++)
            {
                buffer[i] = sourceColumn[i] / divisor;
            }
        }
        
        return buffer;
    }

    /// <summary>
    /// Generate interleaved normalized buffer for scatterplot rendering.
    /// X Y Z X Y Z... perfect for GPU instancing.
    /// </summary>
    public float[] GetInterleavedNormalizedBuffer(int[] columnIndices)
    {
        int stride = columnIndices.Length;
        float[] buffer = new float[RowCount * stride];
        
        for (int colSlot = 0; colSlot < stride; colSlot++)
        {
            int columnIndex = columnIndices[colSlot];
            float[] columnBuffer = GetNormalizedColumnBuffer(columnIndex);
            
            // Copy column buffer into interleaved positions
            for (int row = 0; row < RowCount; row++)
            {
                buffer[row * stride + colSlot] = columnBuffer[row];
            }
        }
        
        return buffer;
    }

    public int GetColumnIndex(string columnName)
    {
        return ColumnMapping.TryGetValue(columnName, out int index) ? index : -1;
    }

    public bool HasColumn(string columnName)
    {
        return ColumnMapping.ContainsKey(columnName);
    }

    public DatasetColumn GetColumn(string columnName)
    {
        int index = GetColumnIndex(columnName);
        return index >= 0 ? Columns[index] : null;
    }

    public DatasetColumn GetColumn(int index)
    {
        if (index < 0 || index >= Columns.Count)
            return null;
        return Columns[index];
    }

    /// <summary>
    /// Finalize category tables after data loading.
    /// </summary>
    public void FinalizeDatasetMetadata()
    {
        foreach (DatasetColumn column in Columns)
        {
            column.FinalizeMetadata();
        }
    }
}
