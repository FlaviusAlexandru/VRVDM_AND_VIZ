using System.Collections.Generic;
using UnityEngine;

namespace DataViz
{
    public class ScatterplotInstancedRenderer : MonoBehaviour
    {
        public Mesh PointMesh;
        public Material PointMaterial;

        [Tooltip("Transform the incoming positions are expressed in (the ScatterplotVisualizer - " +
                 "positions are plot-local, the same space the VFX renderer and GPUPointInteractable use). " +
                 "Set by ScatterplotVisualizer before Build(). If null, positions are treated as world space.")]
        public Transform CoordinateSpace;

        // Plot-local instance matrices; world matrices are derived from these and
        // only recomputed when CoordinateSpace actually moves, so a static plot
        // pays no per-frame transform cost.
        private readonly List<Matrix4x4[]> m_LocalBatches = new();
        private Matrix4x4 m_LastSpaceMatrix = Matrix4x4.identity;

        private readonly List<Matrix4x4[]> m_Batches = new();
        private readonly List<Vector4[]> m_ColorBatches = new();

        private MaterialPropertyBlock m_PropertyBlock;

        private void Awake()
        {
            m_PropertyBlock = new MaterialPropertyBlock();

            if (PointMesh == null)
            {
                PointMesh = Resources.GetBuiltinResource<Mesh>("Sphere.fbx");
            }
        }

        /// <summary>
        /// Enables or fully disables this pipeline. Disabling here sets
        /// enabled = false on this MonoBehaviour, which stops Update() (and
        /// therefore every DrawMeshInstanced call) from running at all while
        /// inactive - this is the pipeline whose per-instance draw-call
        /// count makes it the most expensive to leave silently running.
        /// </summary>
        public void SetActive(bool active)
        {
            enabled = active;

            if (!active)
            {
                Clear();
            }
        }

        public void Clear()
        {
            m_Batches.Clear();
            m_LocalBatches.Clear();
            m_ColorBatches.Clear();
        }

        private Matrix4x4 SpaceMatrix => CoordinateSpace != null ? CoordinateSpace.localToWorldMatrix : Matrix4x4.identity;

        private void RebakeWorldMatrices()
        {
            m_LastSpaceMatrix = SpaceMatrix;
            for (int b = 0; b < m_LocalBatches.Count; b++)
            {
                Matrix4x4[] local = m_LocalBatches[b];
                Matrix4x4[] world = m_Batches[b];
                for (int j = 0; j < local.Length; j++)
                    world[j] = m_LastSpaceMatrix * local[j];
            }
        }

        public void Build(
            List<Vector3> positions,
            List<Color> colors,
            float pointSize)
        {
            Debug.Log($"[ScatterplotInstancedRenderer] GPU Build called with {positions.Count} points");

            // Log some sample colors for debugging
            if (colors.Count > 0)
            {
                Debug.Log($"[ScatterplotInstancedRenderer] Sample colors: {colors[0]}, {colors[Mathf.Min(1, colors.Count - 1)]}, {colors[Mathf.Min(2, colors.Count - 1)]}");
            }

            Clear();

            const int batchSize = 1023;

            // Particle and VFX treat pointSize as the point's world diameter. Normalise the
            // mesh so an instanced point has the same diameter (pSphere1 is only 0.01 across,
            // which made instanced points 100x smaller than the other pipelines).
            float meshExtent = PointMesh != null ? PointMesh.bounds.size.x : 1f;
            float instanceScale = meshExtent > 1e-6f ? pointSize / meshExtent : pointSize;

            for (int i = 0; i < positions.Count; i += batchSize)
            {
                int count = Mathf.Min(
                    batchSize,
                    positions.Count - i
                );

                Matrix4x4[] matrices =
                    new Matrix4x4[count];

                Vector4[] batchColors =
                    new Vector4[count];

                for (int j = 0; j < count; j++)
                {
                    matrices[j] =
                        Matrix4x4.TRS(
                            positions[i + j],
                            Quaternion.identity,
                            Vector3.one * instanceScale
                        );

                    batchColors[j] =
                        colors[i + j];
                }

                m_LocalBatches.Add(matrices);
                m_Batches.Add(new Matrix4x4[count]);
                m_ColorBatches.Add(batchColors);
            }

            RebakeWorldMatrices();

            Debug.Log($"[ScatterplotInstancedRenderer] Created {m_Batches.Count} batches");
        }

        private void Update()
        {
            if (PointMaterial == null)
                return;

            if (m_Batches.Count > 0 && SpaceMatrix != m_LastSpaceMatrix)
                RebakeWorldMatrices();

            for (int i = 0; i < m_Batches.Count; i++)
            {
                m_PropertyBlock.Clear();

                // Try both _Color and _BaseColor for different shader compatibility
                m_PropertyBlock.SetVectorArray(
                    "_Color",
                    m_ColorBatches[i]
                );

                m_PropertyBlock.SetVectorArray(
                    "_BaseColor",
                    m_ColorBatches[i]
                );

                Graphics.DrawMeshInstanced(
                    PointMesh,
                    0,
                    PointMaterial,
                    m_Batches[i],
                    m_Batches[i].Length,
                    m_PropertyBlock
                );
            }
            //Debug.Log($"[ScatterplotInstancedRenderer] Drawing {m_Batches.Count} batches");
        }
    }
}