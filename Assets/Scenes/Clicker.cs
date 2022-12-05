using UnityEngine;
using TMPro;

public class Clicker : MonoBehaviour
{
    public Logic gameLogic;
    public GameObject chicken;

    public void OnMouseDown() 
    {
        TextMeshPro textField = gameObject.GetComponent(typeof(TextMeshPro)) as TextMeshPro;
        gameLogic.TriggerClick(textField.text, gameObject);
    }
}
