#!/usr/bin/env python3
"""
CSV Preprocessing Script for Unity Data Visualization
Processes CSV files using pandas and outputs data in Unity-compatible format
"""

import pandas as pd
import json
import os
import sys
from pathlib import Path
from typing import Dict, List, Any, Tuple
import numpy as np

class DatasetProcessor:
    """Processes CSV files and converts them to Unity-compatible format"""
    
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
        print(f"Expected Location: {self.project_root / 'Assets' / 'StreamingAssetsRawData'}")
    
    def detect_delimiter(self, file_path: Path) -> str:
        """Auto-detect CSV delimiter"""
        with open(file_path, 'r', encoding='utf-8') as f:
            first_line = f.readline()
        
        delimiters = [',', ';', '\t', '|']
        delimiter_counts = {d: first_line.count(d) for d in delimiters}
        
        # Return delimiter with highest count
        return max(delimiter_counts, key=delimiter_counts.get)
    
    def infer_column_type(self, series: pd.Series) -> str:
        """Infer if a column is numeric or categorical"""
        # Try to convert to numeric
        numeric_series = pd.to_numeric(series, errors='coerce')
        
        # Calculate percentage of non-null numeric values
        numeric_ratio = numeric_series.notna().sum() / len(series)
        
        # If 90% or more are numeric, treat as numeric
        if numeric_ratio >= 0.9:
            return "Numeric"
        else:
            return "Categorical"
    
    def process_csv(self, csv_file: Path) -> Dict[str, Any]:
        """Process a single CSV file and return Unity-compatible data structure"""
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
        
        # Process each column
        columns_data = []
        column_mapping = {}
        
        for idx, col_name in enumerate(df.columns):
            col_name_clean = str(col_name).strip(' "\'')
            series = df.iloc[:, idx]
            
            # Infer type
            col_type = self.infer_column_type(series)
            
            # Get unique values for categorical columns
            unique_values = []
            if col_type == "Categorical":
                unique_values = series.dropna().unique().tolist()
                unique_values = [str(v).strip(' "\'') for v in unique_values]
            
            # Calculate min/max for numeric columns
            min_val = float('inf')
            max_val = float('-inf')
            
            if col_type == "Numeric":
                numeric_series = pd.to_numeric(series, errors='coerce')
                min_val = float(numeric_series.min())
                max_val = float(numeric_series.max())
            
            column_data = {
                "name": col_name_clean,
                "type": col_type,
                "minValue": min_val if col_type == "Numeric" else 0.0,
                "maxValue": max_val if col_type == "Numeric" else 0.0,
                "uniqueValues": unique_values,
                "uniqueCount": len(unique_values)
            }
            
            columns_data.append(column_data)
            column_mapping[col_name_clean] = idx
        
        # Process rows
        rows_data = []
        
        # Convert to normalized values for Unity
        for idx in range(len(df)):
            row_data = {
                "rawValues": [],
                "numericValues": [],
                "normalizedValues": []
            }
            
            for col_idx, col_data in enumerate(columns_data):
                raw_value = str(df.iloc[idx, col_idx]).strip(' "\'')
                row_data["rawValues"].append(raw_value)
                
                if col_data["type"] == "Numeric":
                    # Numeric value
                    try:
                        numeric_val = float(raw_value.replace(',', '.'))
                        row_data["numericValues"].append(numeric_val)
                        
                        # Normalized value (0-1)
                        if col_data["maxValue"] != col_data["minValue"]:
                            normalized = (numeric_val - col_data["minValue"]) / (col_data["maxValue"] - col_data["minValue"])
                        else:
                            normalized = 0.0
                        row_data["normalizedValues"].append(normalized)
                    except:
                        row_data["numericValues"].append(0.0)
                        row_data["normalizedValues"].append(0.0)
                else:
                    # Categorical value
                    row_data["numericValues"].append(0.0)
                    
                    # Normalized based on category index
                    if raw_value in col_data["uniqueValues"]:
                        cat_idx = col_data["uniqueValues"].index(raw_value)
                        if len(col_data["uniqueValues"]) > 1:
                            normalized = cat_idx / (len(col_data["uniqueValues"]) - 1)
                        else:
                            normalized = 0.0
                    else:
                        normalized = 0.0
                    
                    row_data["normalizedValues"].append(normalized)
            
            rows_data.append(row_data)
        
        # Create Unity-compatible dataset structure
        dataset = {
            "name": csv_file.stem,
            "columnCount": len(columns_data),
            "rowCount": len(rows_data),
            "columns": columns_data,
            "columnMapping": column_mapping,
            "rows": rows_data
        }
        
        print(f"Processed {len(rows_data)} rows with {len(columns_data)} columns")
        return dataset
    
    def save_dataset(self, dataset: Dict[str, Any], output_file: Path):
        """Save processed dataset to JSON file"""
        try:
            with open(output_file, 'w', encoding='utf-8') as f:
                json.dump(dataset, f, indent=2)
            print(f"Saved processed data to: {output_file}")
            return True
        except Exception as e:
            print(f"Error saving dataset: {e}")
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
                    output_file = self.processed_data_dir / f"{csv_file.stem}.dataset"
                    
                    if self.save_dataset(dataset, output_file):
                        processed_count += 1
                    else:
                        failed_count += 1
                else:
                    failed_count += 1
                    
            except Exception as e:
                print(f"Error processing {csv_file.name}: {e}")
                failed_count += 1
        
        print(f"\n{'='*50}")
        print(f"Processing complete!")
        print(f"Successfully processed: {processed_count}")
        print(f"Failed: {failed_count}")
        print(f"{'='*50}")

def main():
    """Main entry point"""
    print("Unity CSV Data Preprocessor")
    print("=" * 50)
    
    # Try to find project root automatically
    script_dir = Path(__file__).parent
    
    # Check if we're in the expected location
    if script_dir.name == "Data" and script_dir.parent.name == "Scripts":
        # We're in Assets/Scripts/Data/, so project root is 3 levels up
        project_root = script_dir.parent.parent.parent
        processor = DatasetProcessor(str(project_root))
    else:
        # Fallback: use current directory as project root
        print("Warning: Script not in expected location, using current directory")
        processor = DatasetProcessor(str(Path.cwd()))
    
    # Process all CSV files
    processor.process_all_csvs()
    
    print("\nProcessed data files are ready for Unity!")
    print("Unity will load from Assets/StreamingAssetsRawData/ProcessedData/")

if __name__ == "__main__":
    main()