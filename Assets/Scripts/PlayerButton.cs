using UnityEngine;
using TMPro;

public class PlayerButton : MonoBehaviour
{
    public Player player;
    void Start()
    {
        gameObject.GetComponentInChildren<TMP_Text>().text = player.name;        
    }

    public void ClickPlayer()
    {
        GameData.InitializePlayer(player);
        gameObject.GetComponent<SceneLoader>().LoadIntermediate();
    }

    public void SetPlayer()
    {
        GameData.InitializePlayer(player);
        GameObject.Find ("EventSystem").GetComponent<ReportScene>().HideSelectPlayerDialog();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
