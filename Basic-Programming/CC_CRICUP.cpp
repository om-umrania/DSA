#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int skill1, skill2, g_dif, diff;
    for (int i = 0; i < t; i++)
    {
        cin >> skill1 >> skill2 >> g_dif;
        diff = max(skill1 - skill2, skill2 - skill1);
        if (g_dif <= diff)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
