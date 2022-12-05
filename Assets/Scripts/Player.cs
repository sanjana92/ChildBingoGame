using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Player
{
    public string name;
    public Guid guid;
    public bool isDeletable;
    
    public int ans_zero;
    public int corr_zero;
    public int ans_one;
    public int corr_one;
    public int ans_two;
    public int corr_two;
    public int ans_three;
    public int corr_three;
    public int ans_four;
    public int corr_four;
    public int ans_five;
    public int corr_five;
    public int ans_six;
    public int corr_six;
    public int ans_seven;
    public int corr_seven;
    public int ans_eight;
    public int corr_eight;
    public int ans_nine;
    public int corr_nine;
    // change of medium and hard report
    public int ans_medium;
    public int corr_medium;
    public int ans_hard;
    public int corr_hard;

    public int apple_count;
    public int orange_count;
    public int peach_count;
    public int banana_count;
    public int peanut_count;
    public int strawberry_count;

    public Player(string newName)
    {
        name = newName;
        guid = System.Guid.NewGuid();
        isDeletable = true;

        apple_count = 0;
        orange_count = 0;
        peach_count = 0;
        banana_count = 0;
        peanut_count = 0;
        strawberry_count = 0;

        ans_zero = 0;
        corr_zero = 0;
        ans_one = 0; 
        corr_one = 0;
        ans_two = 0;
        corr_two = 0;
        ans_three = 0;
        corr_three = 0;
        ans_four = 0;
        corr_four = 0;
        ans_five = 0;
        corr_five = 0;
        ans_six = 0;
        corr_six = 0;
        ans_seven = 0;
        corr_seven = 0;
        ans_eight = 0;
        corr_eight = 0;
        ans_nine = 0;
        corr_nine = 0;
        // change of medium and hard report
        ans_medium = 0;
        corr_medium = 0;
        ans_hard = 0;
        corr_medium = 0;
    }
}

[System.Serializable]
public class PlayerList
{
    [SerializeField]
    public List<Player> players;

    public PlayerList()
    {
        players = new List<Player>();
    }
}