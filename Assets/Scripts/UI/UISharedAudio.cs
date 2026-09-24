using UnityEngine;

namespace DataViz
{
    /// <summary>
    /// One AudioSource shared by every UI element that wants hover/click
    /// feedback (currently dropdown list items), instead of one AudioSource
    /// per item. A dropdown with 100 options used to spawn 100 AudioSources
    /// every time its list opened.
    ///
    /// Put one in the scene and assign the clips. If none exists, the first
    /// call to PlayHover/PlayClick creates a silent fallback (no clips) so
    /// nothing throws.
    /// </summary>
    [RequireComponent(typeof(AudioSource))]
    public class UISharedAudio : MonoBehaviour
    {
        [SerializeField] private AudioClip m_HoverClip;
        [SerializeField] private AudioClip m_ClickClip;
        [SerializeField, Range(0f, 1f)] private float m_Volume = 1f;

        [Tooltip("Ignore repeat hover sounds closer together than this, so sweeping a ray " +
                 "across a long list doesn't machine-gun the hover clip.")]
        [SerializeField] private float m_MinHoverInterval = 0.05f;

        private static UISharedAudio s_Instance;
        private AudioSource m_Source;
        private float m_LastHoverTime = -1f;

        public static UISharedAudio Instance
        {
            get
            {
                if (s_Instance == null)
                {
                    s_Instance = FindAnyObjectByType<UISharedAudio>();
                    if (s_Instance == null)
                    {
                        var go = new GameObject("UISharedAudio (auto)");
                        s_Instance = go.AddComponent<UISharedAudio>();
                    }
                }
                return s_Instance;
            }
        }

        private void Awake()
        {
            if (s_Instance != null && s_Instance != this)
            {
                Debug.LogWarning("[UISharedAudio] More than one in the scene; using the first.", this);
                return;
            }
            s_Instance = this;
            m_Source = GetComponent<AudioSource>();
            m_Source.playOnAwake = false;
            m_Source.spatialBlend = 0f; // UI feedback: 2D, same loudness wherever the menu is
        }

        private void OnDestroy()
        {
            if (s_Instance == this)
                s_Instance = null;
        }

        public static void PlayHover()
        {
            UISharedAudio a = Instance;
            if (a.m_HoverClip == null || Time.unscaledTime - a.m_LastHoverTime < a.m_MinHoverInterval)
                return;
            a.m_LastHoverTime = Time.unscaledTime;
            a.Play(a.m_HoverClip);
        }

        public static void PlayClick()
        {
            UISharedAudio a = Instance;
            if (a.m_ClickClip != null)
                a.Play(a.m_ClickClip);
        }

        private void Play(AudioClip clip)
        {
            if (m_Source == null)
                m_Source = GetComponent<AudioSource>();
            m_Source.PlayOneShot(clip, m_Volume);
        }
    }
}
