using System;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;
using UnityEngine;
using TMPro;
using Fractions;

public class GameLogic : MonoBehaviour
{
    public string difficultyLevel;
    public GameObject buttonPrefab;
    public GameObject buttonParent;
    public GameObject bingoSign;
    public GameObject lostSign;
    public GameObject sadChicken;
    public GameObject congratsFruitdialog;
    public int numerator, denominator;
    public GameObject helpDialog;
    public Sprite[] fruits;
    public Image fruitImage;
    public TMP_Text question;
    public TMP_Text dialogQuestion;
    public TMP_Text dialogDenominator;
    public TMP_Text questionMarkText;
    public TMP_Text hintForMediumHard;
    public TMP_Text formulaForRemainder;
    public GameObject dialogHintPrefab;
    public GameObject dialogHintParent;
    public bool isSet = false;
    public int answer = -1;
    GameObject[,] buttons = new GameObject[5, 5];
    GameObject[,] hintBalls = new GameObject[3,3];
    List<int> possibleBingos = Enumerable.Repeat(1,12).ToList();
    //public Fraction FractionA = Fraction.FromDecimal(3).Remainder(Fraction.FromDecimal(2));

    public enum PossibleGameStatus
    {
        Lost,
        Row0,
        Row1,
        Row2,
        Row3,
        Row4,
        Col0,
        Col1,
        Col2,
        Col3,
        Col4,
        CrossDiag1,
        CrossDiag2,
        Playing,
        Done
    }
    public PossibleGameStatus status = PossibleGameStatus.Playing;
     
    void Start()
    {

        difficultyLevel = StateNameController.difficulty;
        // GameData.InitializeDictionary();
        for(int row = 0; row < 5; row++)
        {
            for(int col = 0; col < 5; col++)
            {
                buttons[row, col] = Instantiate(buttonPrefab, Vector3.zero, Quaternion.identity, buttonParent.transform);
                // change according to difficulty level functionality
                buttons[row, col].transform.localPosition = new Vector3(col*180 + 15, -row*180+ 15, 0);
                buttons[row, col].name = $"Button {(row, col)}";
                switch (difficultyLevel)
                {
                    case "easy":
                        buttons[row, col].GetComponentInChildren<TMP_Text>().text = $"{UnityEngine.Random.Range(0, 9)}";
                        break;
                    case "medium":
                        buttons[row, col].GetComponentInChildren<TMP_Text>().text = $"{UnityEngine.Random.Range(0, 51)}";
                        break;
                    case "hard":
                        buttons[row, col].GetComponentInChildren<TMP_Text>().text = $"{UnityEngine.Random.Range(0, 101)}";
                        break;  
                    default:
                        buttons[row, col].GetComponentInChildren<TMP_Text>().text = $"{UnityEngine.Random.Range(0, 9)}";
                        break;
                  
                }
                (int r, int c) = (row, col);
                buttons[row, col].GetComponent<Button>().onClick.AddListener(delegate{ClickNumberButton(r, c);});
            }
        }
    }

    void Update()
    {
        if(!isSet)
        {
            (numerator, denominator) = GenerateQuestion();
            question.text = $"{numerator} % {denominator}";
            isSet = true;
        }
        if(((int)status > 0) && ((int)status < 13))
        {
        }
    }


    Tuple<int, int> GenerateQuestion()
    {
        int i;
        while(answer < 0)
        {
            (int r, int c) = (UnityEngine.Random.Range(0, 4), UnityEngine.Random.Range(0, 4));
            answer = int.Parse(buttons[r, c].GetComponentInChildren<TMP_Text>().text);
        }
        while(true){
            
            // i = UnityEngine.Random.Range(0, 9); 
            // change according to difficulty level functionality
            switch(difficultyLevel)
            {
                case "easy":
                    i = UnityEngine.Random.Range(0, 9);
                    
                    for(int j = 1; j <= 9; j++)
                    {
                    if (i % j == answer)
                        {
                            return Tuple.Create(i,j);
                            // return $"{i} % {j}";
                        }
                    }  
                    break;
                case "medium":
                     i = UnityEngine.Random.Range(0, 500);   
                    for(int j = 1; j <= 50; j++)
                    {
                       if(i % j == answer)
                        {
                            return Tuple.Create(i,j);
                        // return $"{i} % {j}";
                        }   
                    }
                    break;
                case "hard":
                    i = UnityEngine.Random.Range(0, 1000);   
                    for(int j = 1; j <= 100; j++)
                    {
                         if(i % j == answer)
                        {
                              return Tuple.Create(i,j);
                             // return $"{i} % {j}";
                        }
                    }
                    break;
                default:
                i = UnityEngine.Random.Range(0, 9);
                    for(int j = 1; j <= 9; j++)
                    {
                        if(i % j == answer)
                        {
                           return Tuple.Create(i,j);
                            // return $"{i} % {j}";
                        }
                        
                    }
                    break;
            }     
        }    
    }

    private void ClickNumberButton(int row, int col)
    {
        SaveManager saveManager = gameObject.GetComponent<SaveManager>();
        buttons[row, col].GetComponent<Button>().enabled = false;
        TMP_Text textComponent = buttons[row, col].GetComponentInChildren<TMP_Text>();
        textComponent.gameObject.transform.localScale = Vector3.zero;
        int clicked = int.Parse(textComponent.text);
        saveManager.readFile();
        foreach(Player p in saveManager.playerList.players)
        {
            if(string.Equals(p.name, GameData.selectedPlayer.name))
            {
                switch(denominator)
                {
                    case 0:
                        p.ans_zero += 1;
                        if(clicked == answer)
                        {
                            p.corr_zero += 1;
                        }
                        break;

                    case 1:
                        p.ans_one += 1;
                        if(clicked == answer)
                        {
                            p.corr_one += 1;
                        }
                        break;

                    case 2:
                        p.ans_two += 1;
                        if(clicked == answer)
                        {
                            p.corr_two += 1;
                        }
                        break;

                    case 3:
                        p.ans_three += 1;
                        if(clicked == answer)
                        {
                            p.corr_three += 1;
                        }
                        break;

                    case 4:
                        p.ans_four += 1;
                        if(clicked == answer)
                        {
                            p.corr_four += 1;
                        }
                        break;

                    case 5:
                        p.ans_five += 1;
                        if(clicked == answer)
                        {
                            p.corr_five += 1;
                        }
                        break;

                    case 6:
                        p.ans_six += 1;
                        if(clicked == answer)
                        {
                            p.corr_six += 1;
                        }
                        break;

                    case 7:
                        p.ans_seven += 1;
                        if(clicked == answer)
                        {
                            p.corr_seven += 1;
                        }
                        break;

                    case 8:
                        p.ans_eight += 1;
                        if(clicked == answer)
                        {
                            p.corr_eight += 1;
                        }
                        break;

                    case 9:
                        p.ans_nine += 1;
                        if(clicked == answer)
                        {
                            p.corr_nine += 1;
                        }
                        break;
                }
                // change of medium and hard report
                if (difficultyLevel == "medium")
                {
                    p.ans_medium += 1;
                    if (clicked == answer)
                    {
                        p.corr_medium += 1;
                    }
                }
                if (difficultyLevel == "hard")
                {
                    p.ans_hard += 1;
                    if (clicked == answer)
                    {
                        p.corr_hard += 1;
                    }
                }
            }
        }
        saveManager.writeFile();

        if(clicked == answer)
        {
            textComponent.text = "-2";
            buttons[row, col].transform.Find("ChickenAnim").gameObject.SetActive(true);
        }
        else
        {
            StartCoroutine(Unscale(buttons[row, col].transform));
            textComponent.text = "-1";
            possibleBingos[row] = 0;
            possibleBingos[5 + col] = 0;
            if(row == col)
            {
                possibleBingos[10] = 0;
            }
            if(row + col == 4)
            {
                possibleBingos[11] = 0;
            }
        }
        isSet = false;
        answer = -1;
        CheckBingoStatus(row, col);
    }

    private void CheckBingoStatus(int row, int col)
    {
        if(possibleBingos.Sum() == 0)
        {
            status = PossibleGameStatus.Lost;
            FinishGame(false);
            return;
        }

        int rowCheck = 0;
        int colCheck = 0;
        int crossDiag1 = 0;
        int crossDiag2 = 0;
        for(int i = 0; i < 5; i++)
        {
            rowCheck += int.Parse(buttons[row, i].GetComponentInChildren<TMP_Text>().text);
        }
        if(rowCheck == -10)
        {
            status = (PossibleGameStatus)(row + 1);
            FinishGame(true);
            return;
        }
        for(int j = 0; j < 5; j++)
        {
            colCheck += int.Parse(buttons[j, col].GetComponentInChildren<TMP_Text>().text);
        }
        if(colCheck == -10)
        {
            status = (PossibleGameStatus)(6 + col);
            FinishGame(true);
            return;
        }
        for(int k = 0; k < 5; k++)
        {
            crossDiag1 += int.Parse(buttons[k, k].GetComponentInChildren<TMP_Text>().text); 
        }
        if(crossDiag1 == -10)
        {
            status = PossibleGameStatus.CrossDiag1;
            FinishGame(true);
            return;
        }
        for(int l = 0; l < 5; l++)
        {
            crossDiag2 += int.Parse(buttons[l, 4-l].GetComponentInChildren<TMP_Text>().text); 
        }
        if(crossDiag2 == -10)
        {
            status = PossibleGameStatus.CrossDiag2;
            FinishGame(true);
            return;
        }
    }

    private IEnumerator Unscale(Transform tr)
    {
        float ratio = 0;
        float duration = 0.2f; // let's say we want a 2s animation
        float start_time = Time.time; // time when the animation began
        Vector3 initial_scale_value = tr.localScale;
        do
        {
            yield return new WaitForEndOfFrame(); // wait for next frame
            ratio = (Time.time - start_time) / duration; // update the ratio value at every frame
            tr.localScale = Vector3.Lerp(initial_scale_value, Vector3.zero, ratio); // apply the new scale
        } while (ratio < 1);
    }

    private IEnumerator Scale(Transform tr)
    {
        float ratio = 0;
        float duration = 0.45f; // let's say we want a 2s animation
        float start_time = Time.time; // time when the animation began
        Vector3 initial_scale_value = tr.localScale;
        do
        {
            yield return new WaitForEndOfFrame(); // wait for next frame
            ratio = (Time.time - start_time) / duration; // update the ratio value at every frame
            tr.localScale = Vector3.Lerp(initial_scale_value, Vector3.one, ratio); // apply the new scale
        } while (ratio < 1);
    }

    public void ReloadGame()
    {
        SceneManager.LoadScene("GameScene"); 
    }

    private void FinishGame(bool won)
    {
        if(won)
        {
            int fruitID = UnityEngine.Random.Range(0, fruits.Length - 1);
            fruitImage.sprite = fruits[fruitID];
            SaveManager saveManager = gameObject.GetComponent<SaveManager>();
            saveManager.readFile();
            for(int i = 0; i < saveManager.playerList.players.Count; i++)
            {
                if(string.Equals(saveManager.playerList.players[i].name, GameData.selectedPlayer.name))
                {
                    Player currentPlayer = saveManager.playerList.players[i];
                    if(fruitID == 0)
                    {
                        currentPlayer.apple_count = currentPlayer.apple_count + 1;
                    }
                    else if (fruitID == 1)
                    {
                        currentPlayer.orange_count = currentPlayer.orange_count + 1;
                    }
                    else if (fruitID == 2)
                    {
                        currentPlayer.strawberry_count = currentPlayer.strawberry_count + 1;
                    }
                    else if (fruitID == 3)
                    {
                        currentPlayer.peach_count = currentPlayer.peach_count + 1;
                    }
                    else if (fruitID == 4)
                    {
                        currentPlayer.peanut_count = currentPlayer.peanut_count + 1;
                    }
                    else if (fruitID == 5)
                    {
                        currentPlayer.banana_count = currentPlayer.banana_count + 1;
                    }
                    saveManager.playerList.players[i] = currentPlayer;
                    GameData.selectedPlayer = saveManager.playerList.players[i];
                    break;
                }
            }
            saveManager.writeFile();
            StartCoroutine(Scale(bingoSign.transform));
            StartCoroutine(ExecuteAfterTime(5f, false, () =>
                {            
                    congratsFruitdialog.SetActive(true);
                })
            );
        }
        else
        {
            StartCoroutine(Scale(lostSign.transform));
            sadChicken.SetActive(true);

            StartCoroutine(ExecuteAfterTime(5f, false, () =>
                {            
                    SceneManager.LoadScene("IntermediateScene"); 
                })
            );
        }
        StopAllAnims();
        question.transform.localScale = Vector3.zero;
    }

    private void StopAllAnims()
    {
        for(int i = 0; i < 5; i++)
        {
            if(((int)status > 0) && ((int)status) < 6)
            {
                if(i == ((int)status - 1))
                    continue;
            }
            for(int j = 0; j < 5; j++)
            {

                if(((int)status > 5) && ((int)status) < 11)
                {
                    if(j == ((int)status - 6))
                        continue;
                }

                if(((int)status == 11) && (i == j))
                {
                    continue;
                }

                if(((int)status == 12) && ((i + j) == 4))
                {
                    continue;
                }

                ImageAnimation animScript = buttons[i, j].transform.Find("ChickenAnim").gameObject.GetComponent<ImageAnimation>();
                buttons[i, j].transform.Find("ChickenAnim").gameObject.GetComponent<Image>().sprite = animScript.referenceSprite;
                animScript.enabled = false;
            }
        }
    }

    IEnumerator ExecuteAfterTime(float time, bool isCoroutineExecuting, Action task)
    {
        if (isCoroutineExecuting)
            yield break;
        isCoroutineExecuting = true;
        yield return new WaitForSeconds(time);
        task();
        isCoroutineExecuting = false;
    }

    public void ShowHelpDialog()
    {
        // implement teacher's hint functionality for medium and hard difficulty level. 
        helpDialog.SetActive(true);
        dialogQuestion.text = $"{numerator} % {denominator}";
        if (difficultyLevel == "medium" || difficultyLevel == "hard")
        {
            // Remainder =  Dividend - (Divisor - quotient);
           // Fraction helpAnswer = new Fraction(numerator).Remainder(denominator);
            Fraction helpQuotient = new Fraction(numerator).Divide(denominator);
            formulaForRemainder.text = "Remainder = Dividend - (Divisor * Quotient)";
            hintForMediumHard.text = $"{dialogQuestion.text}  = {numerator} - ( {denominator} * {helpQuotient.ToInt32()} ) ";
        }
        else
        {
            dialogDenominator.text = $"{denominator}";
            questionMarkText.text = "?";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    hintBalls[i, j] = Instantiate(dialogHintPrefab, Vector3.zero, Quaternion.identity, dialogHintParent.transform);
                    hintBalls[i, j].transform.localPosition = new Vector3(j * 100, -i * 100, 0);
                    hintBalls[i, j].name = $"Ball {(i, j)}";

                    if (i * 3 + j >= numerator)
                    {
                        RawImage im = hintBalls[i, j].GetComponentInChildren<RawImage>();
                        var tempColor = im.color;
                        tempColor.a = 0f;
                        im.color = tempColor;
                    }
                }
            }
        }
    }

    public void HideHelpDialog()
    {
        helpDialog.SetActive(false);
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                Destroy(hintBalls[i, j]);
            }
        }
    }
}
