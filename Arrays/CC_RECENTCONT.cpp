#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int c, firstscore = 0, secondscore = 0;
    string first = "START38", second = "LTIME108", temp;

    for (int i = 0; i < t; i++)
    {
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            cin >> temp;
            if (temp == first)
                firstscore++;
            else if (temp == second)
                secondscore++;
        }
        cout << firstscore << " " << secondscore << endl;
        firstscore = 0;
        secondscore = 0;
    }
    return 0;
}
