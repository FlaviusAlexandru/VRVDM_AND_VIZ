using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.VFX;

namespace DataViz
{
    /// <summary>
    /// GPU-accelerated scatterplot renderer using Unity VFX Graph and GraphicsBuffers.
    /// Replaces CPU-bound Particle Systems with zero-copy GPU instanced buffer streaming.
    /// </summary>
    [RequireComponent(typeof(VisualEffect))]
    public class ScatterplotVFXRenderer : MonoBehaviour
    {
        // Must match the struct layout used by the VFX Graph.
        //
        // [VFXType(VFXTypeAttribute.Usage.GraphicsBuffer)] is REQUIRED - without
        // it, the Sample Graphics Buffer node in the graph has no way to know
        // this struct exists or how to break it into named sub-fields. This is
        // documented but easy to miss: https://docs.unity3d.com/Packages/com.unity.visualeffectgraph@17.6/manual/Operator-SampleBuffer.html
        //
      
        [VFXType(VFXTypeAttribute.Usage.GraphicsBuffer)]
        [StructLayout(LayoutKind.Sequential)]
        public struct PointData
        {
            public Vector3 position;
            public Vector4 color;      // RGBA
            public float size;
            public float glossiness;   // Smoothness (0 to 1)
            public float metallic;     // Metallic (0 to 1)
            public int glyphIndex;   // Glyph ID for picking mesh shapes/textures.
        }

        private VisualEffect m_VFX;
        private GraphicsBuffer m_DataBuffer;
        private int m_ActiveCount;

        // Exposed Property IDs matching VFX Graph Exposed Properties
        private static readonly int PointDataBufferID = Shader.PropertyToID("PointDataBuffer");
        private static readonly int PointCountID = Shader.PropertyToID("PointCount");

        private void Awake()
        {
            m_VFX = GetComponent<VisualEffect>();
        }

        private void OnDestroy()
        {
            ReleaseBuffer();
        }

        public void Clear()
        {
            m_ActiveCount = 0;
            if (m_VFX != null)
            {
                m_VFX.SetInt(PointCountID, 0);
                m_VFX.Reinit();
            }
            ReleaseBuffer();
        }

        /// <summary>
        /// Builds point cloud using standard positions and colors.
        /// Defaults extra data dimensions (glossiness, metallic, glyphs) to clean baseline defaults.
        /// </summary>
        public void Build(
            List<Vector3> positions,
            List<Color> colors,
            float pointSize)
        {
            BuildAdvanced(positions, colors, pointSize, null, null, null);
        }

        /// <summary>
        /// Advanced Build method allowing full multidimensional encoding per point.
        /// Pass null on optional lists to use baseline defaults.
        /// </summary>
        public void BuildAdvanced(
            List<Vector3> positions,
            List<Color> colors,
            float pointSize,
            List<float> glossiness = null,
            List<float> metallic = null,
            List<int> glyphIndices = null)
        {
            int count = positions.Count;
            if (count == 0)
            {
                Clear();
                return;
            }

            Debug.Log($"[ScatterplotVFXRenderer] Building VFX data for {count} points...");

            // 1. Reallocate GraphicsBuffer if capacity changed or not created yet
            if (m_DataBuffer == null || m_DataBuffer.count < count)
            {
                ReleaseBuffer();
                int stride = Marshal.SizeOf<PointData>(); // 11 floats = 44 bytes
                m_DataBuffer = new GraphicsBuffer(GraphicsBuffer.Target.Structured, count, stride);
            }

            // 2. Populate CPU array
            PointData[] dataArray = new PointData[count];
            for (int i = 0; i < count; i++)
            {
                dataArray[i].position = positions[i];

                Color c = (colors != null && i < colors.Count) ? colors[i] : Color.white;
                dataArray[i].color = new Vector4(c.r, c.g, c.b, c.a);

                dataArray[i].size = pointSize;
                dataArray[i].glossiness = (glossiness != null && i < glossiness.Count) ? glossiness[i] : 0.5f;
                dataArray[i].metallic = (metallic != null && i < metallic.Count) ? metallic[i] : 0.0f;
                dataArray[i].glyphIndex = (glyphIndices != null && i < glyphIndices.Count) ? glyphIndices[i] : 0;
            }

            // 3. Upload struct array directly to GPU VRAM
            m_DataBuffer.SetData(dataArray);

            // 4. Bind to VFX Graph and trigger burst instantiation
            m_ActiveCount = count;
            m_VFX.SetGraphicsBuffer(PointDataBufferID, m_DataBuffer);
            m_VFX.SetInt(PointCountID, m_ActiveCount);

            // Resets & spawns exact count instantly
            m_VFX.Reinit();

            Debug.Log($"[ScatterplotVFXRenderer] {m_ActiveCount} points uploaded to GPU GraphicsBuffer.");
        }

        private void ReleaseBuffer()
        {
            if (m_DataBuffer != null)
            {
                m_DataBuffer.Release();
                m_DataBuffer = null;
            }
        }
    }
}