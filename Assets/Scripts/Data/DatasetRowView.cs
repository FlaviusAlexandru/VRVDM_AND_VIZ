using System;

/// <summary>
/// Thin view over a single row in a columnar Dataset.
/// This provides backward compatibility with the old DatasetRow API
/// without creating per-row allocations. All data is stored in the
/// parent Dataset's column arrays.
/// </summary>
public class DatasetRowView
{
    private readonly DatasetColumnar m_Dataset;
    private readonly int m_RowIndex;

    public DatasetRowView(DatasetColumnar dataset, int rowIndex)
    {
        m_Dataset = dataset;
        m_RowIndex = rowIndex;
    }

    /// <summary>
    /// Get raw string value for this row and column.
    /// Reconstructed on-demand from the columnar storage.
    /// </summary>
    public string GetRawValue(int columnIndex)
    {
        return m_Dataset.GetRawValue(m_RowIndex, columnIndex);
    }

    /// <summary>
    /// Get numeric value for this row and column.
    /// </summary>
    public float GetNumericValue(int columnIndex)
    {
        return m_Dataset.GetNumericValue(m_RowIndex, columnIndex);
    }

    /// <summary>
    /// Get normalized value (0-1) for this row and column.
    /// Computed on-demand from the columnar storage.
    /// </summary>
    public float GetNormalizedValue(int columnIndex)
    {
        return m_Dataset.GetNormalizedValue(m_RowIndex, columnIndex);
    }

    /// <summary>
    /// Set raw value (not supported in columnar storage).
    /// This is provided for API compatibility but throws an exception.
    /// </summary>
    public void SetRawValue(int index, string value)
    {
        throw new NotSupportedException("DatasetRowView is read-only. Modify the parent DatasetColumnar directly.");
    }

    /// <summary>
    /// Set numeric value (not supported in columnar storage).
    /// This is provided for API compatibility but throws an exception.
    /// </summary>
    public void SetNumericValue(int index, float value)
    {
        throw new NotSupportedException("DatasetRowView is read-only. Modify the parent DatasetColumnar directly.");
    }

    /// <summary>
    /// Set normalized value (not supported in columnar storage).
    /// This is provided for API compatibility but throws an exception.
    /// </summary>
    public void SetNormalizedValue(int index, float value)
    {
        throw new NotSupportedException("DatasetRowView is read-only. Modify the parent DatasetColumnar directly.");
    }

    /// <summary>
    /// Get the raw row index in the parent dataset.
    /// </summary>
    public int RowIndex => m_RowIndex;

    /// <summary>
    /// Get the parent dataset.
    /// </summary>
    public DatasetColumnar Dataset => m_Dataset;
}
