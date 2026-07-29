using System.Collections.Generic;
using UnityEngine;

namespace DataViz
{
    /// <summary>
    /// Drop-in alternative to ScatterplotInstancedRenderer that uses Unity's
    /// built-in Particle System instead of manual GPU instancing.
    ///
    /// Same public interface (Build / Clear) as ScatterplotInstancedRenderer,
    /// so ScatterplotVisualizer can call either one interchangeably —
    /// just swap which component m_GPUPoints points at (or wire both up
    /// and toggle which one is active, for an A/B comparison).
    ///
    /// SETUP NOTES:
    /// - Requires a ParticleSystem component on this GameObject (auto-added
    ///   via RequireComponent).
    /// - The ParticleSystemRenderer's material MUST use a shader that reads
    ///   per-vertex color (e.g. "Particles/Standard Unlit" in Built-in RP,
    ///   or "Universal Render Pipeline/Particles/Unlit" in URP with
    ///   "Vertex Color" or "Color" input mode set to Multiply/Color).
    ///   This is the key difference from the instanced renderer: there,
    ///   color arrives via MaterialPropertyBlock.SetVectorArray; here it
    ///   arrives as ParticleSystem.Particle.startColor, consumed as a
    ///   vertex color stream. A shader written only for one idiom will
    ///   NOT automatically work with the other.
    /// - Emission, Shape, Velocity over Lifetime, and other simulation
    ///   modules are force-disabled in Awake so particles behave like
    ///   static point sprites rather than an actual particle effect.
    /// </summary>
    [RequireComponent(typeof(ParticleSystem))]
    public class ScatterplotParticleRenderer : MonoBehaviour
    {
        [Tooltip("Assign a material using a vertex-color-aware particle shader. " +
                 "If left empty, the ParticleSystemRenderer's current material is used as-is.")]
        public Material PointMaterial;

        private ParticleSystem m_ParticleSystem;
        private ParticleSystemRenderer m_ParticleRenderer;

        private ParticleSystem.Particle[] m_Particles = new ParticleSystem.Particle[0];
        private int m_ActiveCount;

        private void Awake()
        {
            m_ParticleSystem = GetComponent<ParticleSystem>();
            m_ParticleRenderer = GetComponent<ParticleSystemRenderer>();

            ConfigureStaticParticleSystem();

            if (PointMaterial != null && m_ParticleRenderer != null)
            {
                m_ParticleRenderer.material = PointMaterial;
            }
        }

        /// <summary>
        /// Disables all the "alive, moving particle effect" behaviour so the
        /// system just holds a static, manually-driven point cloud.
        /// </summary>
        private void ConfigureStaticParticleSystem()
        {
            var main = m_ParticleSystem.main;
            main.loop = false;
            main.playOnAwake = false;
            main.simulationSpace = ParticleSystemSimulationSpace.World;
            main.maxParticles = int.MaxValue; // we manage capacity ourselves via SetParticles
            main.startLifetime = float.PositiveInfinity;
            main.startSpeed = 0f;

            var emission = m_ParticleSystem.emission;
            emission.enabled = false;

            var shape = m_ParticleSystem.shape;
            shape.enabled = false;

            var velocityOverLifetime = m_ParticleSystem.velocityOverLifetime;
            velocityOverLifetime.enabled = false;

            // Stop any default auto-play behaviour, then leave particles
            // paused - SetParticles() writes directly into the buffer
            // regardless of play state, and Pause avoids the system trying
            // to simulate/age out our "infinite lifetime" particles.
            m_ParticleSystem.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
            m_ParticleSystem.Pause(true);
        }

        public void Clear()
        {
            m_ActiveCount = 0;

            if (m_ParticleSystem != null)
            {
                m_ParticleSystem.SetParticles(m_Particles, 0);
            }
        }

        /// <summary>
        /// Same signature as ScatterplotInstancedRenderer.Build - builds one
        /// particle per data point using the supplied world-space positions
        /// and colors.
        /// </summary>
        public void Build(
            List<Vector3> positions,
            List<Color> colors,
            float pointSize)
        {
            Debug.Log($"[ScatterplotParticleRenderer] Build called with {positions.Count} points");

            int count = positions.Count;

            if (m_Particles.Length < count)
            {
                m_Particles = new ParticleSystem.Particle[count];
            }

            for (int i = 0; i < count; i++)
            {
                m_Particles[i].position = positions[i];
                m_Particles[i].startColor = colors[i];
                m_Particles[i].startSize = pointSize;
                m_Particles[i].rotation = 0f;
                m_Particles[i].velocity = Vector3.zero;
                m_Particles[i].remainingLifetime = float.PositiveInfinity;
                m_Particles[i].startLifetime = float.PositiveInfinity;
            }

            m_ActiveCount = count;

            m_ParticleSystem.SetParticles(m_Particles, m_ActiveCount);

            Debug.Log($"[ScatterplotParticleRenderer] {m_ActiveCount} particles set");
        }
    }
}