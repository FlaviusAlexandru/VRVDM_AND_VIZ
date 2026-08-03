#!/usr/bin/env python3
"""
Columnar CSV Preprocessing Script for Unity Data Visualization
Processes CSV files using pandas and outputs efficient binary columnar format
"""

import pandas as pd
import numpy as np
import os
import sys
from pathlib import Path
from typing import Dict, List, Any, Tuple
import struct

class ColumnarDatasetProcessor:
    """Processes CSV files and converts them to columnar binary format"""
    
    # File format constants
    MAGIC_BYTES = b'DVCB'  # DataViz Columnar Binary
    VERSION = 1
    
    # Column type codes
    TYPE_NUMERIC = 1
    TYPE_CATEGORICAL = 2
    
    def __init__(self, project_root: str = None):
        if project_root is None:
            # Default to assuming script is in Assets/Scripts/Data/
            script_dir = Path(__file__).parent
            project_root = script_dir.parent.parent.parent  # Go up to project root
        
        self.project_root = Path(project_root)
        self.raw_data_dir = self.project_root / "Assets" / "StreamingAssetsRawData"
        self.processed_data_dir = self.project_root / "Assets" / "StreamingAssetsRawData" / "ProcessedData"
        
        # Create directories if they don't exist
        self.raw_data_dir.mkdir(parents=True, exist_ok=True)
        self.processed_data_dir.mkdir(parents=True, exist_ok=True)
        
        print(f"Project Root: {self.project_root}")
        print(f"Raw Data Directory: {self.raw_data_dir}")
        print(f"Processed Data Directory: {self.processed_data_dir}")
    
    def detect_delimiter(self, file_path: Path) -> str:
        """Auto-detect CSV delimiter"""
        with open(file_path, 'r', encoding='utf-8') as f:
            first_line = f.readline()
        
        delimiters = [',', ';', '\t', '|']
        delimiter_counts = {d: first_line.count(d) for d in delimiters}
        
        # Return delimiter with highest count
        return max(delimiter_counts, key=delimiter_counts.get)
    
    def infer_column_type(self, series: pd.Series) -> Tuple[str, float]:
        """Infer if a column is numeric or categorical, return type and confidence"""
        # Try to convert to numeric
        numeric_series = pd.to_numeric(series, errors='coerce')
        
        # Calculate percentage of non-null numeric values
        numeric_ratio = numeric_series.notna().sum() / len(series)
        
        # If 90% or more are numeric, treat as numeric
        if numeric_ratio >= 0.9:
            return "Numeric", numeric_ratio
        else:
            return "Categorical", 1.0 - numeric_ratio
    
    def process_csv(self, csv_file: Path) -> Dict[str, Any]:
        """Process a single CSV file and return columnar data structure"""
        print(f"\nProcessing: {csv_file.name}")
        
        # Detect delimiter
        delimiter = self.detect_delimiter(csv_file)
        print(f"Detected delimiter: '{delimiter}'")
        
        # Read CSV with pandas
        try:
            df = pd.read_csv(csv_file, delimiter=delimiter, encoding='utf-8')
        except Exception as e:
            print(f"Error reading CSV: {e}")
            return None
        
        print(f"Loaded {len(df)} rows, {len(df.columns)} columns")
        
        row_count = len(df)
        column_count = len(df.columns)
        
        # Process each column
        columns_data = []
        column_mapping = {}
        
        for idx, col_name in enumerate(df.columns):
            col_name_clean = str(col_name).strip(' "\'')
            series = df.iloc[:, idx]
            
            # Infer type
            col_type, confidence = self.infer_column_type(series)
            
            column_data = {
                "name": col_name_clean,
                "type": col_type,
                "index": idx
            }
            
            if col_type == "Numeric":
                # Convert to numeric, handle errors
                numeric_series = pd.to_numeric(series, errors='coerce')
                numeric_series = numeric_series.fillna(0.0)  # Replace NaN with 0
                
                # Get min/max
                min_val = float(numeric_series.min())
                max_val = float(numeric_series.max())
                
                column_data["minValue"] = min_val
                column_data["maxValue"] = max_val
                column_data["data"] = numeric_series.values.astype(np.float32)
                
                print(f"  Column {idx}: {col_name_clean} (Numeric) range: [{min_val:.4f}, {max_val:.4f}]")
            else:
                # Categorical
                # Get unique values
                unique_values = series.dropna().unique().tolist()
                unique_values = [str(v).strip(' "\'') for v in unique_values]
                
                # Create category mapping
                category_to_index = {val: idx for idx, val in enumerate(unique_values)}
                
                # Convert series to category indices
                category_indices = series.apply(
                    lambda x: category_to_index.get(str(x).strip(' "\''), 0) if pd.notna(x) else 0
                ).values.astype(np.int32)
                
                column_data["uniqueValues"] = unique_values
                column_data["data"] = category_indices
                
                print(f"  Column {idx}: {col_name_clean} (Categorical) {len(unique_values)} unique values")
            
            columns_data.append(column_data)
            column_mapping[col_name_clean] = idx
        
        dataset = {
            "name": csv_file.stem,
            "rowCount": row_count,
            "columnCount": column_count,
            "columns": columns_data,
            "columnMapping": column_mapping
        }
        
        print(f"Processed {row_count} rows with {column_count} columns")
        return dataset
    
    def write_binary(self, dataset: Dict[str, Any], output_file: Path) -> bool:
        """Write dataset to efficient binary format"""
        try:
            with open(output_file, 'wb') as f:
                # Write header
                f.write(self.MAGIC_BYTES)
                f.write(struct.pack('<H', self.VERSION))  # Version (2 bytes)
                f.write(struct.pack('<I', dataset["rowCount"]))  # Row count (4 bytes)
                f.write(struct.pack('<I', dataset["columnCount"]))  # Column count (4 bytes)
                
                # Write columns
                for col_data in dataset["columns"]:
                    # Write column name length and name
                    name_bytes = col_data["name"].encode('utf-8')
                    f.write(struct.pack('<B', len(name_bytes)))  # Name length (1 byte)
                    f.write(name_bytes)
                    
                    # Write column type
                    if col_data["type"] == "Numeric":
                        f.write(struct.pack('<B', self.TYPE_NUMERIC))
                        
                        # Write min/max for normalization
                        f.write(struct.pack('<f', col_data["minValue"]))
                        f.write(struct.pack('<f', col_data["maxValue"]))
                        
                        # Write float32 data
                        data = col_data["data"]
                        data.tofile(f)
                        
                    elif col_data["type"] == "Categorical":
                        f.write(struct.pack('<B', self.TYPE_CATEGORICAL))
                        
                        # Write category count
                        unique_values = col_data["uniqueValues"]
                        f.write(struct.pack('<I', len(unique_values)))
                        
                        # Write category strings
                        for cat_val in unique_values:
                            cat_bytes = cat_val.encode('utf-8')
                            f.write(struct.pack('<H', len(cat_bytes)))  # String length (2 bytes)
                            f.write(cat_bytes)
                        
                        # Write int32 category indices
                        data = col_data["data"]
                        data.tofile(f)
                
            print(f"Saved binary dataset to: {output_file}")
            print(f"File size: {output_file.stat().st_size / (1024*1024):.2f} MB")
            return True
            
        except Exception as e:
            print(f"Error writing binary file: {e}")
            import traceback
            traceback.print_exc()
            return False
    
    def process_all_csvs(self):
        """Process all CSV files in the raw data directory"""
        csv_files = list(self.raw_data_dir.glob("*.csv"))
        
        if not csv_files:
            print("No CSV files found in StreamingAssetsRawData directory")
            return
        
        print(f"Found {len(csv_files)} CSV files to process")
        
        processed_count = 0
        failed_count = 0
        
        for csv_file in csv_files:
            try:
                dataset = self.process_csv(csv_file)
                
                if dataset:
                    output_file = self.processed_data_dir / f"{csv_file.stem}.cdataset"  # Columnar dataset
                    
                    if self.write_binary(dataset, output_file):
                        processed_count += 1
                    else:
                        failed_count += 1
                else:
                    failed_count += 1
                    
            except Exception as e:
                print(f"Error processing {csv_file.name}: {e}")
                import traceback
                traceback.print_exc()
                failed_count += 1
        
        print(f"\nProcessing complete: {processed_count} succeeded, {failed_count} failed")

def main():
    """Main entry point"""
    processor = ColumnarDatasetProcessor()
    processor.process_all_csvs()

if __name__ == "__main__":
    main()
