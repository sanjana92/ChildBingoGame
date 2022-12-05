using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Loading : MonoBehaviour
{
    void Start()
    {
      StartCoroutine(DelayAction(4));
    }

   IEnumerator DelayAction(float delayTime)
   {
      yield return new WaitForSeconds(delayTime);
      SceneManager.LoadScene("MenuScene"); 
   }
}
