using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hyperlinks : MonoBehaviour
{
    public void SubscribeFacebook() {

        Application.OpenURL("https://www.facebook.com/profile.php?id=100087753562272");

    }

    public void SubscribeGmail()
    {

        Application.OpenURL("https://groups.google.com/u/4/g/chickbingo/");

    }

}
