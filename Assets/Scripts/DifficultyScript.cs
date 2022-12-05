using UnityEngine;
using UnityEngine.SceneManagement;

public class DifficultyScript : MonoBehaviour
{
    public GameObject difficultyDialog;
    public void ShowDifficultyDialog()
    {
        difficultyDialog.SetActive(true);
    }

    public void HideDialog()
    {
        difficultyDialog.SetActive(false);
    }

// Change this function because to do Adjust questions based on difficulty level set manually functionality
    public void ClickBoardOptions(string input)
    {
       StateNameController.difficulty = input;
       SceneManager.LoadScene("GameScene"); 
    }
}
