using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ClickPlay()
    {
       SceneManager.LoadScene("DifficultyScene"); 
    }
    
    public void ClickEasy()
    {
       SceneManager.LoadScene("GameScene"); 
    }

    public void ClickReport()
    {
       SceneManager.LoadScene("ReportScene"); 
    }

    public void LoadMenu()
    {
       SceneManager.LoadScene("MenuScene"); 
    }

    public void LoadIntermediate()
    {
       SceneManager.LoadScene("IntermediateScene"); 
    }

    public void LoadPetScene()
    {
       SceneManager.LoadScene("PetScene"); 
    }

    public void CreateNewPlayer()
    {
       SceneManager.LoadScene("NewPlayerScene"); 
    }
}
