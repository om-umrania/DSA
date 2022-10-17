#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, playerone = 0, playertwo = 0;
    cin >> t;
    int scoreone, scoretwo, lead = 0, leader = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> scoreone >> scoretwo;
        playerone += scoreone;
        playertwo += scoretwo;
        if ((playerone > playertwo) && (playerone - playertwo > lead))
        {
            lead = playerone - playertwo;
            leader = 1;
        }
        else if ((playertwo > playerone) && (playertwo - playerone > lead))
        {
            lead = playertwo - playerone;
            leader = 2;
        }
    }
    cout << leader << " " << lead << endl;
    return 0;
}
