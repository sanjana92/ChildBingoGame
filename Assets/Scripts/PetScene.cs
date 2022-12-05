using UnityEngine;
using TMPro;

public class PetScene : MonoBehaviour
{
    public TMP_Text playername;

    public TMP_Text appleCount;
    public TMP_Text orangeCount;
    public TMP_Text strawberryCount;
    public TMP_Text peachCount;
    public TMP_Text peanutCount;
    public TMP_Text bananaCount;

    public GameObject fruits;

    // Start is called before the first frame update
    void Start()
    {
        playername.text = $"{GameData.selectedPlayer.name}'s";
        SetReport();
    }

    public void Update()
    {
        if(GameData.selectedPlayer.apple_count <= 0)
        {
            appleCount.gameObject.SetActive(false);
        }
        else
        {
            appleCount.gameObject.SetActive(true);
        }
        if(GameData.selectedPlayer.orange_count <= 0)
        {
            orangeCount.gameObject.SetActive(false);
        }
        else
        {
            orangeCount.gameObject.SetActive(true);
        }
        if(GameData.selectedPlayer.strawberry_count <= 0)
        {
            strawberryCount.gameObject.SetActive(false);
        }
        else
        {
            strawberryCount.gameObject.SetActive(true);
        }
        if(GameData.selectedPlayer.peach_count <= 0)
        {
            peachCount.gameObject.SetActive(false);
        }
        else
        {
            peachCount.gameObject.SetActive(true);
        }
        if(GameData.selectedPlayer.peanut_count <= 0)
        {
            peanutCount.gameObject.SetActive(false);
        }
        else
        {
            peanutCount.gameObject.SetActive(true);
        }
        if(GameData.selectedPlayer.banana_count <= 0)
        {
            bananaCount.gameObject.SetActive(false);
        }
        else
        {
            bananaCount.gameObject.SetActive(true);
        }
    }

    public void SetReport()
    {
        appleCount.text = $"{GameData.selectedPlayer.apple_count}";
        orangeCount.text = $"{GameData.selectedPlayer.orange_count}";
        strawberryCount.text = $"{GameData.selectedPlayer.strawberry_count}";
        peachCount.text = $"{GameData.selectedPlayer.peach_count}";
        peanutCount.text = $"{GameData.selectedPlayer.peanut_count}";
        bananaCount.text = $"{GameData.selectedPlayer.banana_count}";
    }

    public void ToggleFruits()
    {
        fruits.SetActive(!fruits.activeSelf);
    }
}
