using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;

[Serializable]
public class DatasetColumn
{
    public string Name;
    public DataValueType Type = DataValueType.Unknown;

    public float MinValue = float.MaxValue;
    public float MaxValue = float.MinValue;

    public HashSet<string> UniqueValues = new();
    private List<string> categoryList;
    private Dictionary<string, int> categoryLookup;

    public int UniqueCount => UniqueValues.Count;

    public bool IsNumeric =>
        Type == DataValueType.Numeric ||
        Type == DataValueType.CoordinateX ||
        Type == DataValueType.CoordinateY ||
        Type == DataValueType.CoordinateZ ||
        Type == DataValueType.Latitude ||
        Type == DataValueType.Longitude ||
        Type == DataValueType.Altitude;

    public bool IsCategorical => Type == DataValueType.Categorical;

    public DatasetColumn(string name)
    {
        Name = name;
    }

    public void FinalizeMetadata()
    {
        categoryList = new List<string>(UniqueValues);
        categoryLookup = new Dictionary<string, int>();

        for (int i = 0; i < categoryList.Count; i++)
        {
            categoryLookup[categoryList[i]] = i;
        }
    }

    public float GetNormalizedValue(string rawValue)
    {
        if (IsNumeric)
        {
            if (CSVImporter.TryParseFlexibleFloat(rawValue, out float value))
            {
                float range = MaxValue - MinValue;

                if (Math.Abs(range) < 0.00001f)
                    return 0f;

                // Clamp between 0 and 1 to prevent floating point overshoot
                return Mathf.Clamp01((value - MinValue) / range);
            }

            // Safe fallback for numeric columns with empty/null entries:
            return 0f;
        }

        if (IsCategorical)
        {
            if (categoryLookup == null)
                FinalizeMetadata();

            if (!categoryLookup.TryGetValue(rawValue, out int index))
                return 0f;

            if (categoryLookup.Count <= 1)
                return 0f;

            return (float)index / (categoryLookup.Count - 1);
        }

        if (Type == DataValueType.Boolean)
        {
            return rawValue.Equals("true", StringComparison.OrdinalIgnoreCase) || rawValue == "1"
                ? 1f
                : 0f;
        }

        return 0f;
    }
}