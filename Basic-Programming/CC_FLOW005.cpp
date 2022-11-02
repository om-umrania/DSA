#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int money;
    for (int i = 0; i < t; i++)
    {
        cin >> money;
        int coin = 0;
        while (money > 0)
        {
            if (money >= 100)
            {
                money -= 100;
                coin++;
            }
            else if (money >= 50)
            {
                money -= 50;
                coin++;
            }
            else if (money >= 10)
            {
                money -= 10;
                coin++;
            }
            else if (money >= 5)
            {
                money -= 5;
                coin++;
            }
            else if (money >= 2)
            {
                money -= 2;
                coin++;
            }
            else
            {
                money--;
                coin++;
            }
        }
        cout << coin << endl;
    }
    return 0;
}
