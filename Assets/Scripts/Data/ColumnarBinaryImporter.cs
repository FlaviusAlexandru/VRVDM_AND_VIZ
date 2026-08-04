using System;
using System.IO;
using System.Text;
using UnityEngine;

/// <summary>
/// Reads the .cdataset binary format written by preprocess_csv_columnar.py.
///
/// Byte layout (must stay in lockstep with the Python writer):
///   4 bytes  magic "DVCB"
///   2 bytes  version (uint16, little-endian)
///   4 bytes  rowCount (uint32, little-endian)
///   4 bytes  columnCount (uint32, little-endian)
///   per column:
///     1 byte   name length (byte)
///     N bytes  name (UTF8)
///     1 byte   type (1 = Numeric, 2 = Categorical)
///     Numeric:
///       4 bytes            minValue (float32)
///       4 bytes            maxValue (float32)
///       rowCount * 4 bytes float32[] data (raw, little-endian)
///     Categorical:
///       4 bytes  categoryCount (uint32)
///       per category:
///         2 bytes  name length (uint16)
///         N bytes  name (UTF8)
///       rowCount * 4 bytes int32[] category indices (raw, little-endian)
///
/// All bulk arrays are read via Buffer.BlockCopy - a single memcpy per
/// column, not a loop of per-element parses. On any little-endian platform
/// (x86/x64/ARM - i.e. effectively every desktop, mobile, and VR headset
/// Unity targets) this is a direct reinterpretation of the file bytes.
/// </summary>
public static class ColumnarBinaryImporter
{
    private const string ExpectedMagic = "DVCB";
    private const byte TypeNumeric = 1;
    private const byte TypeCategorical = 2;

    public static DatasetColumnar Load(string fileName)
    {
        string path = Path.Combine(Application.streamingAssetsPath, "DataCSV", "ProcessedData", fileName);

        if (!File.Exists(path))
        {
            Debug.LogWarning($"[ColumnarBinaryImporter] File not found: {path}");
            return null;
        }

        byte[] bytes;

        try
        {
            bytes = File.ReadAllBytes(path);
        }
        catch (Exception e)
        {
            Debug.LogError($"[ColumnarBinaryImporter] Failed to read {path}: {e.Message}");
            return null;
        }

        try
        {
            return Parse(bytes, Path.GetFileNameWithoutExtension(path));
        }
        catch (Exception e)
        {
            Debug.LogError($"[ColumnarBinaryImporter] Failed to parse {path}: {e.Message}\n{e.StackTrace}");
            return null;
        }
    }

    private static DatasetColumnar Parse(byte[] bytes, string datasetName)
    {
        int offset = 0;

        string magic = Encoding.ASCII.GetString(bytes, offset, 4);
        offset += 4;

        if (magic != ExpectedMagic)
        {
            Debug.LogError($"[ColumnarBinaryImporter] Bad magic bytes '{magic}', expected '{ExpectedMagic}'.");
            return null;
        }

        ushort version = BitConverter.ToUInt16(bytes, offset); offset += 2;
        uint rowCountU = BitConverter.ToUInt32(bytes, offset); offset += 4;
        uint columnCountU = BitConverter.ToUInt32(bytes, offset); offset += 4;

        int rowCount = (int)rowCountU;
        int columnCount = (int)columnCountU;

        DatasetColumnar dataset = new DatasetColumnar(datasetName, rowCount, columnCount);

        for (int col = 0; col < columnCount; col++)
        {
            byte nameLen = bytes[offset]; offset += 1;
            string name = Encoding.UTF8.GetString(bytes, offset, nameLen); offset += nameLen;

            byte typeByte = bytes[offset]; offset += 1;

            DatasetColumn column = new DatasetColumn(name);

            if (typeByte == TypeNumeric)
            {
                column.Type = DataValueType.Numeric;

                float minValue = BitConverter.ToSingle(bytes, offset); offset += 4;
                float maxValue = BitConverter.ToSingle(bytes, offset); offset += 4;
                column.MinValue = minValue;
                column.MaxValue = maxValue;

                dataset.Columns.Add(column);
                dataset.ColumnMapping[name] = col;

                float[] values = new float[rowCount];
                int byteCount = rowCount * sizeof(float);
                Buffer.BlockCopy(bytes, offset, values, 0, byteCount);
                offset += byteCount;

                dataset.SetNumericColumn(col, values);
            }
            else if (typeByte == TypeCategorical)
            {
                column.Type = DataValueType.Categorical;

                uint categoryCount = BitConverter.ToUInt32(bytes, offset); offset += 4;
                string[] categoryTable = new string[categoryCount];

                for (int c = 0; c < categoryCount; c++)
                {
                    ushort catLen = BitConverter.ToUInt16(bytes, offset); offset += 2;
                    categoryTable[c] = Encoding.UTF8.GetString(bytes, offset, catLen); offset += catLen;

                    column.UniqueValues.Add(categoryTable[c]);
                }

                dataset.Columns.Add(column);
                dataset.ColumnMapping[name] = col;

                int[] indices = new int[rowCount];
                int byteCount = rowCount * sizeof(int);
                Buffer.BlockCopy(bytes, offset, indices, 0, byteCount);
                offset += byteCount;

                dataset.SetCategoricalColumn(col, indices, categoryTable);
            }
            else
            {
                Debug.LogError($"[ColumnarBinaryImporter] Unknown column type byte {typeByte} for column '{name}'.");
                return null;
            }
        }

        dataset.FinalizeDatasetMetadata();

        Debug.Log(
            $"[ColumnarBinaryImporter] Loaded '{dataset.Name}' (format v{version}): " +
            $"{dataset.RowCount} rows, {dataset.ColumnCount} columns, from raw bytes with zero per-cell parsing."
        );

        return dataset;
    }
}