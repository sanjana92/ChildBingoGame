using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class DragDrop : MonoBehaviour, IPointerDownHandler, IBeginDragHandler, IEndDragHandler, IDragHandler
{
    public GameObject fruitsParent;
    public GameObject fruitsGhostParent;
    private RectTransform rectTransform;
    private CanvasGroup canvasGroup;
    public GameObject GhostCounterPart;
    public GameObject EatenCounterPart;
    public PetScreenChickAnim chick;
    public PetScene petScene;
    public SaveManager saveManager;
    public int fruitID; // 0 for apple; 1 for orange; 2 for strawberry; 3 for peach; 4 for peanut; 5 for banana
    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
        canvasGroup = GetComponent<CanvasGroup>();
    }

    public void Update()
    {
        if(fruitID == 0 && GameData.selectedPlayer.apple_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else if (fruitID == 1 && GameData.selectedPlayer.orange_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else if (fruitID == 2 && GameData.selectedPlayer.strawberry_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else if (fruitID == 3 && GameData.selectedPlayer.peach_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else if (fruitID == 4 && GameData.selectedPlayer.peanut_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else if (fruitID == 5 && GameData.selectedPlayer.banana_count <= 0)
        {
            canvasGroup.blocksRaycasts = false;
            canvasGroup.alpha = 0.3f;
        }
        else
        {
            canvasGroup.blocksRaycasts = true;
            canvasGroup.alpha = 1.0f;
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        rectTransform.anchoredPosition += eventData.delta;
        GhostCounterPart.SetActive(true);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        canvasGroup.blocksRaycasts = false;
        canvasGroup.alpha = 0.8f;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        canvasGroup.blocksRaycasts = true;
        canvasGroup.alpha = 1f;
        GhostCounterPart.SetActive(false);
        SpawnEatery();
        gameObject.transform.position = GhostCounterPart.transform.position;
    }

    public void SpawnEatery()
    {
        if (Vector3.Distance(gameObject.transform.position, EatenCounterPart.transform.position) < 200)
        {
            chick.eating = true;
            EatenCounterPart.SetActive(true);
            StartCoroutine(HideFruit(0.9f, EatenCounterPart));


            saveManager.readFile();

            for(int i = 0; i < saveManager.playerList.players.Count; i++)
            {
                if(string.Equals(saveManager.playerList.players[i].name, GameData.selectedPlayer.name))
                {
                    Player currentPlayer = saveManager.playerList.players[i];
                    if(fruitID == 0)
                    {
                        currentPlayer.apple_count = currentPlayer.apple_count - 1;
                    }
                    else if (fruitID == 1)
                    {
                        currentPlayer.orange_count = currentPlayer.orange_count - 1;
                    }
                    else if (fruitID == 2)
                    {
                        currentPlayer.strawberry_count = currentPlayer.strawberry_count - 1;
                    }
                    else if (fruitID == 3)
                    {
                        currentPlayer.peach_count = currentPlayer.peach_count - 1;
                    }
                    else if (fruitID == 4)
                    {
                        currentPlayer.peanut_count = currentPlayer.peanut_count - 1;
                    }
                    else if (fruitID == 5)
                    {
                        currentPlayer.banana_count = currentPlayer.banana_count - 1;
                    }
                    saveManager.playerList.players[i] = currentPlayer;
                    GameData.selectedPlayer = saveManager.playerList.players[i];
                    break;
                }
            }
            saveManager.writeFile();
            petScene.SetReport();
        }
    }

    IEnumerator HideFruit(float time, GameObject gameObj)
    {
        yield return new WaitForSeconds(time);


        gameObj.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        // Debug.Log("Click");
    }
}
