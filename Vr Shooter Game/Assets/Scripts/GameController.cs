using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameController : MonoBehaviour
{
    [SerializeField] private Image timerImage;
    [SerializeField] private float GameTime;
    private float CurrentFillAmount = 1f;
    [SerializeField] private TextMeshProUGUI score;

    private int PlayerScore;
    void Update()
    {
        Timer();
        
    }

    private void Timer()
    {
        timerImage.fillAmount = CurrentFillAmount - (Time.deltaTime / GameTime);

        CurrentFillAmount = timerImage.fillAmount;

    }
    public void UpdatePlayerScore(int AsteroidHitScore)
    {
        PlayerScore += AsteroidHitScore;
        score.text = PlayerScore.ToString();
    }
}
