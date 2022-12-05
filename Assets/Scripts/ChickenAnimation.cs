using UnityEngine;
using UnityEngine.UI;

public class ChickenAnimation : MonoBehaviour {

	public Sprite[] sprites;
	public Sprite referenceSprite;
	public int spritePerFrame = 80;

	private int index = 0;
	private Image image;
	private int frame = 0;
	public bool playAnim = false;

	void Awake() {
		image = GetComponent<Image> ();
	}

	void Update () {
		if(playAnim == false) return;
		if (index == sprites.Length) 
		{
			index = 0;
			playAnim = false;
			return;
		}
		frame ++;
		while (frame < spritePerFrame) return;
		image.sprite = sprites [index];
		frame = 0;
		index ++;
	}
}