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


    public enum GameState
    {
        Waiting,
        Playing,
        GameOver
    }
    public static GameState CurrentGameStatus;




    private void Awake()
    {
        CurrentGameStatus = GameState.Waiting;
    }
    void Update()
    {
        if (CurrentGameStatus == GameState.Playing)
        Timer();
        
    }

    private void Timer()
    {
        timerImage.fillAmount = CurrentFillAmount - (Time.deltaTime / GameTime);

        CurrentFillAmount = timerImage.fillAmount;

    }
    public void UpdatePlayerScore(int AsteroidHitScore)
    {
        if(CurrentGameStatus != GameState.Playing) { return; }
        PlayerScore += AsteroidHitScore;
        score.text = PlayerScore.ToString();
    }
    public void StartGame()
    {
        CurrentGameStatus = GameState.Playing;
    }
}
