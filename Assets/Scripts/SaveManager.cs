using System.IO;
using UnityEngine;

public class SaveManager : MonoBehaviour
{
    string saveFile;

    public PlayerList playerList = new PlayerList();

    void Awake()
    {
        // Update the path once the persistent path exists.
        saveFile = Application.persistentDataPath + "/playerData.json";
        readFile();
    }

    public void readFile()
    {
        // Does the file exist?
        if (File.Exists(saveFile))
        {
            // Read the entire file and save its contents.
            string fileContents = File.ReadAllText(saveFile);

            // Deserialize the JSON data 
            //  into a pattern matching the GameData class.
            playerList = JsonUtility.FromJson<PlayerList>(fileContents);
        }
    }

    public void writeFile()
    {
        // Serialize the object into JSON and save string.
        string jsonString = JsonUtility.ToJson(playerList);

        // Write JSON to file.
        File.WriteAllText(saveFile, jsonString);
    }
}