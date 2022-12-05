using UnityEngine;
using TMPro;

public class IntermediateScene : MonoBehaviour
{
    public TMP_Text playername;

    // Start is called before the first frame update
    void Start()
    {
        playername.text = $"{GameData.selectedPlayer.name}'s";
    }
}
