using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Runscript : MonoBehaviour
{
    private Rigidbody2D rb;
    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();

    }
    private void FixedUpdate()
    {
        rb.velocity = new Vector2(5f, 0f);
        if(rb.position.x > 11)
        {
            SceneManager.LoadScene("MenuScene"); 
        }
    }
}
