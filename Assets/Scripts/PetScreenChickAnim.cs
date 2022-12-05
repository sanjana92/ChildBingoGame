using UnityEngine;
using UnityEngine.UI;

public class PetScreenChickAnim : MonoBehaviour {

	public Sprite[] sprites;
	public Sprite[] eatSprites;
	public Sprite referenceSprite;
	public int spritePerFrame = 80;

	private int index = 0;
	private int eatingindex = 0;
	private Image image;
	public int frame = 0;
	public bool playAnim = true;
	public bool eating = false;

	void Awake() {
		image = GetComponent<Image> ();
	}

	void Update () {
		if(!eating)
		{
			if(playAnim == false) return;
			if (index == sprites.Length) 
			{
				index = 0;
				// playAnim = false;
				return;
			}
			frame ++;
			while (frame < spritePerFrame) return;
			image.sprite = sprites [index];
			frame = 0;
			index ++;
		}
		else
		{
			if(eatingindex == eatSprites.Length)
			{
				eatingindex = 0;
				eating = false;
				return;
			}
			frame++;
			while (frame < spritePerFrame) return;
			image.sprite = eatSprites[eatingindex];
			frame = 0;
			eatingindex++;
		}	
	}
}