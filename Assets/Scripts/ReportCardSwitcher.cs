using UnityEngine;

public class ReportCardSwitcher : MonoBehaviour
{

    public GameObject ReportCard;
    public GameObject Curriculum;
    public GameObject ConnectWithUs;
    
    public void ClickReport()
    {
        ReportCard.SetActive(true);
        Curriculum.SetActive(false);
        ConnectWithUs.SetActive(false);
    }

    public void ClickCurriculum()
    {
        ReportCard.SetActive(false);
        Curriculum.SetActive(true);
        ConnectWithUs.SetActive(false);
    }

    public void ClickConnect()
    {
        ReportCard.SetActive(false);
        Curriculum.SetActive(false);
        ConnectWithUs.SetActive(true);
    }
}
