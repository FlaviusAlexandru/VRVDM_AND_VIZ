using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

/// <summary>
/// Builds/updates/removes real-world room geometry as Unity meshes with
/// colliders, using Unity's cross-platform XRMeshSubsystem - populated
/// here by VIVE's "Scene Understanding" OpenXR feature underneath, but
/// this class never calls into VIVE-specific APIs directly. If a future
/// OpenXR runtime exposes meshing through the same subsystem (or the
/// ratified XR_EXT_spatial_* extensions eventually add mesh support),
/// this script keeps working unchanged.
///
/// Adapted from VIVE's stock MeshingBehaviour sample:
///   - Removed the MeshingTeapotFeature check (that's specific to the
///     sample's own demo OpenXR feature wrapper, not something a real
///     project keeps - checking subsystem availability is what matters).
///   - Removed the sample's on-screen debug TextMesh.
///   - Added the singleton + event pattern already used by
///     MultiplayerScatterplotManager, so other systems (a stylized wall
///     visualizer, proximity fade, etc.) can subscribe instead of every
///     consumer needing its own copy of this polling loop.
/// </summary>
public class RoomMeshManager : MonoBehaviour
{
    public static RoomMeshManager Instance { get; private set; }

    [Header("References")]
    [Tooltip("Prefab with MeshFilter + MeshCollider (+ MeshRenderer if you want the mesh visible). " +
             "GenerateMeshAsync fills in the mesh and collider data at runtime.")]
    public GameObject EmptyMeshPrefab;

    [Tooltip("Parent transform for generated room-mesh chunks. Defaults to this GameObject if left empty.")]
    public Transform MeshParent;

    /// <summary>Fired whenever any mesh chunk is added, updated, or removed.</summary>
    public event Action OnRoomMeshUpdated;

    public bool IsRunning => m_MeshSubsystem != null && m_MeshSubsystem.running;

    private XRMeshSubsystem m_MeshSubsystem;
    private readonly List<MeshInfo> m_MeshInfos = new List<MeshInfo>();
    private readonly Dictionary<MeshId, GameObject> m_MeshIdToGo = new Dictionary<MeshId, GameObject>();

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }

        if (MeshParent == null)
        {
            MeshParent = transform;
        }
    }

    private void Start()
    {
        var meshSubsystems = new List<XRMeshSubsystem>();
        SubsystemManager.GetSubsystems(meshSubsystems);

        if (meshSubsystems.Count == 0)
        {
            Debug.LogWarning(
                "[RoomMeshManager] No XRMeshSubsystem available. Check that 'VIVE XR Scene " +
                "Understanding' is enabled in Project Settings > XR Plug-in Management > OpenXR, " +
                "and that you're running on-device (or via headset streaming) rather than a plain " +
                "Editor Play session with no XR runtime attached - room meshing has no real data " +
                "source without an actual headset/runtime providing it."
            );
            enabled = false;
            return;
        }

        m_MeshSubsystem = meshSubsystems[0];
    }

    private void Update()
    {
        if (m_MeshSubsystem == null || !m_MeshSubsystem.running)
            return;

        if (!m_MeshSubsystem.TryGetMeshInfos(m_MeshInfos))
            return;

        bool anyChange = false;

        foreach (var meshInfo in m_MeshInfos)
        {
            switch (meshInfo.ChangeState)
            {
                case MeshChangeState.Added:
                case MeshChangeState.Updated:
                    if (!m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out GameObject go))
                    {
                        go = Instantiate(EmptyMeshPrefab, MeshParent, false);
                        m_MeshIdToGo[meshInfo.MeshId] = go;
                    }

                    Mesh mesh = go.GetComponent<MeshFilter>().mesh;
                    MeshCollider col = go.GetComponent<MeshCollider>();

                    m_MeshSubsystem.GenerateMeshAsync(
                        meshInfo.MeshId,
                        mesh,
                        col,
                        MeshVertexAttributes.Normals | MeshVertexAttributes.UVs,
                        result =>
                        {
                            if (result.Status != MeshGenerationStatus.Success)
                            {
                                Debug.LogWarning($"[RoomMeshManager] Mesh generation failed for {meshInfo.MeshId}: {result.Status}");
                            }
                        });

                    anyChange = true;
                    break;

                case MeshChangeState.Removed:
                    if (m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out GameObject meshGo))
                    {
                        Destroy(meshGo);
                        m_MeshIdToGo.Remove(meshInfo.MeshId);
                    }
                    anyChange = true;
                    break;
            }
        }

        if (anyChange)
        {
            OnRoomMeshUpdated?.Invoke();
        }
    }
}