using UnityEngine;

namespace DataViz
{
    public class VisualizationGridSettings : MonoBehaviour
    {
        [Header("Visibility")]
        public bool ShowGridPlanes = true;

        [Header("Grid Density")]
        [Min(0.01f)]
        public float MajorGridSpacing = 0.5f;

        [Min(0.01f)]
        public float MinorGridSpacing = 0.1f;

        [Header("Grid Colors")]
        public Color MajorGridColor =
            new Color(1f, 1f, 1f, 0.3f);

        public Color MinorGridColor =
            new Color(1f, 1f, 1f, 0.05f);

        [Header("Labels")]
        public bool ShowTickMarks = true;

        public bool ShowValueLabels = true;
    }
}