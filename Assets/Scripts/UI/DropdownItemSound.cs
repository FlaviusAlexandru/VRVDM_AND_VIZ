using UnityEngine;
using UnityEngine.EventSystems;

namespace DataViz
{
    /// <summary>
    /// Hover/click sound for a dropdown list item, played through the shared
    /// UISharedAudio source.
    ///
    /// Replaces the EventTrigger the VR Template put on each item. EventTrigger
    /// implements every pointer interface (drag, scroll, ...), so it swallowed
    /// the drag and scroll events the list's ScrollRect needs, which is why the
    /// lists couldn't scroll past the first few options. This only listens for
    /// enter and click, so drag and scroll pass through to the ScrollRect.
    /// </summary>
    public class DropdownItemSound : MonoBehaviour, IPointerEnterHandler, IPointerClickHandler
    {
        public void OnPointerEnter(PointerEventData eventData) => UISharedAudio.PlayHover();
        public void OnPointerClick(PointerEventData eventData) => UISharedAudio.PlayClick();
    }
}
