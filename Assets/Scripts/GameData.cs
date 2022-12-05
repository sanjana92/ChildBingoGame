using System.Collections.Generic;

public static class GameData
{
    public static Player selectedPlayer;
    public static bool isMuted = false;
    public static void InitializePlayer(Player p)
    {
        selectedPlayer = p;
    }
}
