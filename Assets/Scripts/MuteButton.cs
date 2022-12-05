using UnityEngine;
using UnityEngine.UI;

public class MuteButton : MonoBehaviour
{
   public Texture2D mute; 
   public Texture2D sound;

   public RawImage im;

   public bool isMute = false;

   public void ClickSound()
   {
        if(GameData.isMuted)
        {
            im.texture = sound;
            GameObject.FindGameObjectWithTag("Music").GetComponent<SoundController>().PlayMusic();
            GameData.isMuted = false;
        }
        else
        {
            im.texture = mute;            
            GameObject.FindGameObjectWithTag("Music").GetComponent<SoundController>().StopMusic();
            GameData.isMuted = true;
        }
   }
}
