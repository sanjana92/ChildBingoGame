using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class PetChicken : MonoBehaviour, IDropHandler
{
    public void OnDrop(PointerEventData eventData)
    {
        gameObject.GetComponent<PetScreenChickAnim>().eating = true;
        gameObject.GetComponent<PetScreenChickAnim>().frame = 0;

        StartCoroutine(HideFruit(1.20f, eventData.pointerDrag.gameObject));
    }

    IEnumerator HideFruit(float time, GameObject gameObj)
    {
        yield return new WaitForSeconds(time);


        gameObj.SetActive(false);
    }
}
