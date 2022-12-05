using TMPro;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuLogic : MonoBehaviour
{
    public GameObject backPanel;
    public TMP_Text new_player_name;
    public GameObject player_button;
    public TMP_InputField new_player_input_field;
    public Transform player_button_parent;
    public List<Texture2D> button_images;
    public List<GameObject> buttons;

    public void Start()
    {
        CheckForPlayer1();
        LoadLevelButtons();
    }

    private void LoadLevelButtons()
    {
        for(int i = 0; i < buttons.Count; i++)
        {
            Destroy(buttons[i]);
        }
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        int count = saveManager.playerList.players.Count;
        for(int i = 0; i < count; i++)
        {
            GameObject btn = Instantiate(player_button, player_button_parent) as GameObject;
            btn.GetComponent<PlayerButton>().player = saveManager.playerList.players[i];
            btn.GetComponent<RawImage>().texture = button_images[i%(button_images.Count)];
            buttons.Add(btn);
        }
    }

    public void ClickOnBackground()
    {
        backPanel.SetActive(false);
    }

    public void ClickNewPlayer()
    {
        backPanel.SetActive(true);
    }

    public void CheckForPlayer1()
    {
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        saveManager.readFile();
        foreach(Player p in saveManager.playerList.players)
        {
            if(string.Equals(p.name, "Player1"))
            {
                GameData.selectedPlayer = p;
                return;
            }
        }

        Player newPlayer = new Player("Player1");
        saveManager.playerList.players.Add(newPlayer);
        saveManager.writeFile();
        LoadLevelButtons();
        GameData.selectedPlayer = newPlayer;
    }

    public void ClickCreate()
    {
        if(new_player_name.text.Trim().Length > 1)
        {
            backPanel.SetActive(false);
            SaveManager saveManager = gameObject.GetComponent<SaveManager>();
            Player newPlayer = new Player(new_player_name.text.Trim());
            saveManager.playerList.players.Add(newPlayer);
            saveManager.writeFile();
            LoadLevelButtons();
            new_player_name.text = "";
            new_player_input_field.text = "";
        }
    }
}
