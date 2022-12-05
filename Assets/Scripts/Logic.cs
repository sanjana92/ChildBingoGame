using System.Collections;
using UnityEngine;
using TMPro;
using System.Linq;

public class Logic : MonoBehaviour
{
    [System.Serializable]
    public struct rows
    {
        [SerializeField] public TextMeshPro[] textFields;
    }
    public rows[] inputs;
    public TextMeshPro question;
    public int delay;

    public bool isSet = false;
    int currentQuestion = 0;
    public string[] questions = new string[25];
    public string[] answers = new string[25];
    public string[] locations = new string[25];
    public GameObject chicken;
    public int[] indices; 

    public void Start() 
    {
        indices = Enumerable.Range(0, 25).ToArray();
        var rnd = new System.Random();
        indices = indices.OrderBy(item => rnd.Next()).ToArray();

        for(int i = 0; i < 25; i++)
        {
            (string q, string a) = GetQuestion();
            questions[i] = q;
            answers[i] = a;

            int ci = indices[i];
            inputs[ci / 5].textFields[ci % 5].text = a;
            locations[i] = "o";
        }
    }

    public void Update() 
    {
        if(!isSet)
        {
            question.text = questions[currentQuestion];
            isSet = true;
        }
    }

    (string, string) GetQuestion() 
    {
        int numerator = Random.Range(1, 10);
        int denominator = Random.Range(1, 10);
        return (numerator.ToString() + " % " + denominator.ToString(), (numerator % denominator).ToString());
    }

    public void TriggerClick(string text, GameObject pgo) 
    {
        if(text.Equals(answers[currentQuestion])) 
        {
            MeshRenderer me = pgo.GetComponent(typeof(MeshRenderer)) as MeshRenderer;
            me.enabled = false;
            GameObject go = Instantiate(chicken);
            go.transform.position = pgo.transform.position;
            go.transform.parent = pgo.transform;

            currentQuestion += 1;
            while(questions[currentQuestion].Equals("skip"))
            {
                currentQuestion += 1;
            }
            isSet = false;
        } 
        else 
        {
            pgo.SetActive(false);
            ChangeQuestion(text, pgo);
        }
    }

    void ChangeQuestion(string a, GameObject pgo)
    {
        for(int i = 0; i < 25; i++)
        {
            if(answers[i].Equals(a))
            {
                questions[i] = "skip";
                int row = int.Parse(pgo.name.Substring(1, 1));
                int column = int.Parse(pgo.name.Substring(3, 1));
                locations[row*5 + column] = "-";
                break;
            }
        }
    }

    IEnumerator ExecuteAfter(float time, System.Action task)
    {
        yield return new WaitForSeconds(time);
        task();
    }
}
