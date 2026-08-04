using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;

public static class CSVImporter
{
    public static Dataset Load(string path)
    {
        if (!File.Exists(path))
        {
            Debug.LogError($"CSV not found: {path}");
            return null;
        }

        string[] lines = File.ReadAllLines(path);

        if (lines.Length < 2)
        {
            Debug.LogError("CSV contains no data.");
            return null;
        }

        // 1. Auto-detect delimiter (, or ; or \t or |)
        char delimiter = DetectDelimiter(lines);

        Dataset dataset = new Dataset(Path.GetFileNameWithoutExtension(path));

        //-----------------------------------
        // HEADER
        //-----------------------------------
        List<string> headers = SplitCsvLine(lines[0], delimiter);

        for (int i = 0; i < headers.Count; i++)
        {
            string header = headers[i].Trim(' ', '"', '\r', '\n');
            dataset.Columns.Add(new DatasetColumn(header));
            dataset.ColumnMapping[header] = i;
        }

        //-----------------------------------
        // PASS 1: Read values & Track Min/Max
        //-----------------------------------
        for (int lineIndex = 1; lineIndex < lines.Length; lineIndex++)
        {
            if (string.IsNullOrWhiteSpace(lines[lineIndex])) continue;

            List<string> values = SplitCsvLine(lines[lineIndex], delimiter);
            DatasetRow row = new DatasetRow(headers.Count);

            for (int col = 0; col < headers.Count; col++)
            {
                string rawValue = col < values.Count ? values[col].Trim(' ', '"', '\r', '\n') : "";

                row.SetRawValue(col, rawValue);

                DatasetColumn column = dataset.Columns[col];
                column.UniqueValues.Add(rawValue);

                // Flexible float parsing (supports both 12.34 and 12,34)
                if (TryParseFlexibleFloat(rawValue, out float numeric))
                {
                    column.MinValue = Mathf.Min(column.MinValue, numeric);
                    column.MaxValue = Mathf.Max(column.MaxValue, numeric);
                }
            }

            dataset.Rows.Add(row);
        }

        //-----------------------------------
        // DETERMINE TYPES & BAKE
        //-----------------------------------
        InferColumnTypes(dataset);
        dataset.FinalizeDatasetMetadata();
        BakeValues(dataset);

        return dataset;
    }

    private static char DetectDelimiter(string[] lines)
    {
        char[] candidates = new char[] { ',', ';', '\t', '|' };
        char bestDelimiter = ',';
        int maxCount = -1;

        // Check the first row to see which character appears most frequently
        string sampleHeader = lines[0];
        foreach (char c in candidates)
        {
            int count = sampleHeader.Split(c).Length - 1;
            if (count > maxCount)
            {
                maxCount = count;
                bestDelimiter = c;
            }
        }

        return bestDelimiter;
    }

    /// <summary>
    /// Fast, quote-aware CSV line splitter. Single linear pass over the
    /// line (O(n) in line length) with no regex/backtracking.
    ///
    /// This replaces a previous implementation that used a lookahead
    /// regex pattern (delimiter(?=(?:[^"]*"[^"]*")*[^"]*$)) to handle
    /// quoted fields. That pattern re-scans the remainder of the line at
    /// every delimiter to verify quote-balance, which is roughly
    /// O(columns^2) per row on wide CSVs - measured at ~59x slower than
    /// a plain split on a 101-column, ~1900-character row (0.156ms/row
    /// vs 0.0026ms/row), which is what turned dataset switches into a
    /// 15-20 second stall. This version tracks quote state with a single
    /// boolean while walking the line once.
    /// </summary>
    private static List<string> SplitCsvLine(string line, char delimiter)
    {
        List<string> result = new List<string>();
        int start = 0;
        bool inQuotes = false;

        for (int i = 0; i < line.Length; i++)
        {
            char c = line[i];

            if (c == '"')
            {
                inQuotes = !inQuotes;
            }
            else if (c == delimiter && !inQuotes)
            {
                result.Add(line.Substring(start, i - start));
                start = i + 1;
            }
        }

        result.Add(line.Substring(start));
        return result;
    }

    public static bool TryParseFlexibleFloat(string raw, out float result)
    {
        result = 0f;
        if (string.IsNullOrWhiteSpace(raw)) return false;

        // 1. Standard Invariant Parse (e.g. 12.34 or 1.2e3)
        if (float.TryParse(raw, NumberStyles.Float, CultureInfo.InvariantCulture, out result))
        {
            return true;
        }

        // 2. European Parse fallback (replace decimal comma with dot e.g. "12,34" -> "12.34")
        string normalized = raw.Replace(',', '.');
        if (float.TryParse(normalized, NumberStyles.Float, CultureInfo.InvariantCulture, out result))
        {
            return true;
        }

        return false;
    }

    private static void InferColumnTypes(Dataset dataset)
    {
        foreach (var column in dataset.Columns)
        {
            int numericCount = 0;
            int validRows = 0;

            int columnIndex = dataset.GetColumnIndex(column.Name);

            foreach (var row in dataset.Rows)
            {
                string raw = row.GetRawValue(columnIndex);
                if (string.IsNullOrWhiteSpace(raw)) continue;

                validRows++;
                if (TryParseFlexibleFloat(raw, out _))
                {
                    numericCount++;
                }
            }

            // If at least 90% of valid entries are numbers, treat as Numeric
            if (validRows > 0 && (float)numericCount / validRows >= 0.9f)
            {
                column.Type = DataValueType.Numeric;
            }
            else
            {
                column.Type = DataValueType.Categorical;
            }
        }
    }

    private static void BakeValues(Dataset dataset)
    {
        for (int rowIndex = 0; rowIndex < dataset.RowCount; rowIndex++)
        {
            DatasetRow row = dataset.Rows[rowIndex];

            for (int col = 0; col < dataset.ColumnCount; col++)
            {
                DatasetColumn column = dataset.Columns[col];
                string raw = row.GetRawValue(col);

                if (TryParseFlexibleFloat(raw, out float value))
                {
                    row.SetNumericValue(col, value);
                }

                row.SetNormalizedValue(col, column.GetNormalizedValue(raw));
            }
        }
    }
}