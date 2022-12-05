using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ReportScene : MonoBehaviour
{
    public GameObject selectPlayerDialog;
    public GameObject player_button;
    public Transform player_button_parent;
    public List<Texture2D> button_images;
    public List<GameObject> buttons;
    public TMP_Text selectedName;
    public GameObject resetReporting;
    public GameObject deleteReporting;
    public Button deleteButton;
    public Button editButton;
    public GameObject editName;
    public TMP_Text edit_player_text;

    public List<TMP_Text> reportList;
    public List<TMP_Text> percentList;
    public List<Image> reportImages;

    public Sprite[] buttonSprites;

    // Start is called before the first frame update
    void Start()
    {
        SetReport(); 
    }

    // Update is called once per frame
    void Update()
    {
        if(string.Equals(GameData.selectedPlayer.name, "Player1"))    
        {
            deleteButton.interactable = false;
            editButton.interactable = false;
        }
        else
        {
            deleteButton.interactable = true;
            editButton.interactable = true;
        }
    }

    public void ShowSelectPlayerDialog()
    {
        selectPlayerDialog.SetActive(true);
        LoadLevelButtons();
    }

    public void HideSelectPlayerDialog()
    {
        selectPlayerDialog.SetActive(false);
        SetReport();
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

    public void SetReport()
    {
        selectedName.text = GameData.selectedPlayer.name;


        if(GameData.selectedPlayer.ans_zero > 0)
        {
            int percent = (GameData.selectedPlayer.corr_zero * 100 / GameData.selectedPlayer.ans_zero);
            percentList[0].text = $"{percent}%";
            reportList[0].text = $"Answered correctly {GameData.selectedPlayer.corr_zero} out of {GameData.selectedPlayer.ans_zero} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[0].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[0].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[0].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[0].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[0].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[0].text = "";
            reportList[0].text = "Keep On Learning!";
            reportImages[0].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_one > 0)
        {
            int percent = (GameData.selectedPlayer.corr_one * 100 / GameData.selectedPlayer.ans_one);
            percentList[1].text = $"{percent}%";
            reportList[1].text = $"Answered correctly {GameData.selectedPlayer.corr_one} out of {GameData.selectedPlayer.ans_one} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[1].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[1].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[1].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[1].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[1].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[1].text = "";
            reportList[1].text = "Keep On Learning!";
            reportImages[1].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_two > 0)
        {
            int percent = (GameData.selectedPlayer.corr_two * 100 / GameData.selectedPlayer.ans_two);
            percentList[2].text = $"{percent}%";
            reportList[2].text = $"Answered correctly {GameData.selectedPlayer.corr_two} out of {GameData.selectedPlayer.ans_two} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[2].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[2].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[2].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[2].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[2].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[2].text = "";
            reportList[2].text = "Keep On Learning!";
            reportImages[2].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_three > 0)
        {
            int percent = (GameData.selectedPlayer.corr_three * 100 / GameData.selectedPlayer.ans_three);
            percentList[3].text = $"{percent}%";
            reportList[3].text = $"Answered correctly {GameData.selectedPlayer.corr_three} out of {GameData.selectedPlayer.ans_three} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[3].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[3].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[3].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[3].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[3].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[3].text = "";
            reportList[3].text = "Keep On Learning!";
            reportImages[3].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_four > 0)
        {
            int percent = (GameData.selectedPlayer.corr_four * 100 / GameData.selectedPlayer.ans_four);
            percentList[4].text = $"{percent}%";
            reportList[4].text = $"Answered correctly {GameData.selectedPlayer.corr_four} out of {GameData.selectedPlayer.ans_four} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[4].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[4].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[4].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[4].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[4].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[4].text = "";
            reportList[4].text = "Keep On Learning!";
            reportImages[4].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_five > 0)
        {
            int percent = (GameData.selectedPlayer.corr_five * 100 / GameData.selectedPlayer.ans_five);
            percentList[5].text = $"{percent}%";
            reportList[5].text = $"Answered correctly {GameData.selectedPlayer.corr_five} out of {GameData.selectedPlayer.ans_five} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[5].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[5].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[5].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[5].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[5].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[5].text = "";
            reportList[5].text = "Keep On Learning!";
            reportImages[5].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_six > 0)
        {
            int percent = (GameData.selectedPlayer.corr_six * 100 / GameData.selectedPlayer.ans_six);
            percentList[6].text = $"{percent}%";
            reportList[6].text = $"Answered correctly {GameData.selectedPlayer.corr_six} out of {GameData.selectedPlayer.ans_six} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[6].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[6].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[6].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[6].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[6].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[6].text = "";
            reportList[6].text = "Keep On Learning!";
            reportImages[6].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_seven > 0)
        {
            int percent = (GameData.selectedPlayer.corr_seven * 100 / GameData.selectedPlayer.ans_seven);
            percentList[7].text = $"{percent}%";
            reportList[7].text = $"Answered correctly {GameData.selectedPlayer.corr_seven} out of {GameData.selectedPlayer.ans_seven} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[7].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[7].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[7].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[7].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[7].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[7].text = "";
            reportList[7].text = "Keep On Learning!";
            reportImages[7].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_eight > 0)
        {
            int percent = (GameData.selectedPlayer.corr_eight * 100 / GameData.selectedPlayer.ans_eight);
            percentList[8].text = $"{percent}%";
            reportList[8].text = $"Answered correctly {GameData.selectedPlayer.corr_eight} out of {GameData.selectedPlayer.ans_eight} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[8].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[8].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[8].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[8].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[8].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[8].text = "";
            reportList[8].text = "Keep On Learning!";
            reportImages[8].sprite = buttonSprites[0];
        }
        if(GameData.selectedPlayer.ans_nine > 0)
        {
            int percent = (GameData.selectedPlayer.corr_nine * 100 / GameData.selectedPlayer.ans_nine);
            percentList[9].text = $"{percent}%";
            reportList[9].text = $"Answered correctly {GameData.selectedPlayer.corr_nine} out of {GameData.selectedPlayer.ans_nine} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[9].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[9].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[9].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[9].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[9].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[9].text = "";
            reportList[9].text = "Keep On Learning!";
            reportImages[9].sprite = buttonSprites[0];
        }
        // change of medium and hard report
        if (GameData.selectedPlayer.ans_medium > 0)
        {
            int percent = (GameData.selectedPlayer.corr_medium * 100 / GameData.selectedPlayer.ans_medium);
            percentList[10].text = $"{percent}%";
            reportList[10].text = $"Answered correctly {GameData.selectedPlayer.corr_medium} out of {GameData.selectedPlayer.ans_medium} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[10].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[10].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[10].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[10].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[10].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[10].text = "";
            reportList[10].text = "Keep On Learning!";
            reportImages[10].sprite = buttonSprites[0];
        }
        if (GameData.selectedPlayer.ans_hard > 0)
        {
            int percent = (GameData.selectedPlayer.corr_hard * 100 / GameData.selectedPlayer.ans_hard);
            percentList[11].text = $"{percent}%";
            reportList[11].text = $"Answered correctly {GameData.selectedPlayer.corr_hard} out of {GameData.selectedPlayer.ans_hard} times.";
            if ((percent > 0) && (percent <= 30))
            {
                reportImages[11].sprite = buttonSprites[1];
            }
            else if((percent > 30) && (percent <= 44))
            {
                reportImages[11].sprite = buttonSprites[2];
            }
            else if((percent > 44) && (percent <= 69))
            {
                reportImages[11].sprite = buttonSprites[3];
            }
            else if((percent > 69) && (percent <= 99))
            {
                reportImages[11].sprite = buttonSprites[4];
            }
            else
            {
                reportImages[11].sprite = buttonSprites[5];
            }
        }
        else
        {
            percentList[11].text = "";
            reportList[11].text = "Keep On Learning!";
            reportImages[11].sprite = buttonSprites[0];
        }
        
    }

    public void ResetReport()
    {
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        saveManager.readFile();
        foreach(Player p in saveManager.playerList.players)
        {
            if(string.Equals(p.name, GameData.selectedPlayer.name))
            {
                p.ans_zero = 0;
                p.corr_zero = 0;
                p.ans_one = 0;
                p.corr_one = 0;
                p.ans_two = 0;
                p.corr_two = 0;
                p.ans_three = 0;
                p.corr_three = 0;
                p.ans_four = 0;
                p.corr_four = 0;
                p.ans_five = 0;
                p.corr_five = 0;
                p.ans_six = 0;
                p.corr_six = 0;
                p.ans_seven = 0;
                p.corr_seven = 0;
                p.ans_eight = 0;
                p.corr_eight = 0;
                p.ans_nine = 0;
                p.corr_nine = 0;
                // change of medium and hard report
                p.ans_medium = 0;
                p.corr_medium = 0;
                p.ans_hard = 0;
                p.corr_hard = 0;

                GameData.selectedPlayer = p;
                SetReport();
                break;
            }
        }
        saveManager.writeFile();
    }

    public void DeletePlayer()
    {
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        saveManager.readFile();

        for(int i = 0; i < saveManager.playerList.players.Count; i++)
        {
            if(string.Equals(saveManager.playerList.players[i].name, GameData.selectedPlayer.name))
            {
                saveManager.playerList.players.RemoveAt(i);
                GameData.selectedPlayer = saveManager.playerList.players[0];
                SetReport();
                break;
            }
        }
        saveManager.writeFile();
    }

    public void EditPlayerName(string name)
    {
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        saveManager.readFile();

        for(int i = 0; i < saveManager.playerList.players.Count; i++)
        {
            if(string.Equals(saveManager.playerList.players[i].name, GameData.selectedPlayer.name))
            {
                Player currentPlayer = saveManager.playerList.players[i];
                currentPlayer.name = name;
                saveManager.playerList.players[i] = currentPlayer;
                GameData.selectedPlayer = saveManager.playerList.players[i];
                SetReport();
                break;
            }
        }
        saveManager.writeFile();
    }

    public void ShowResetDialog()
    {
        resetReporting.SetActive(true);
    }

    public void ShowEditDialog()
    {
        edit_player_text.text = GameData.selectedPlayer.name;
        editName.SetActive(true);
    }

    public void ShowDeleteDialog()
    {
        deleteReporting.SetActive(true);
    }

    public void ClickReset()
    {
        ResetReport();
        resetReporting.SetActive(false);
    }

    public void CancelReset()
    {
        resetReporting.SetActive(false);
    }

    public void ClickEdit()
    {
        if(edit_player_text.text.Trim().Length > 1)
        {
            EditPlayerName(edit_player_text.text.Trim());
            edit_player_text.text = "";
            editName.SetActive(false);
        }
    }

    public void ClickDelete()
    {
        DeletePlayer();
        deleteReporting.SetActive(false);
    }

    public void CancelDelete()
    {
        deleteReporting.SetActive(false);
    }
}
