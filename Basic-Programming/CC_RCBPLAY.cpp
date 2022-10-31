#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int score, cutoff, matches;
    for (int i = 0; i < t; i++)
    {
        cin >> score >> cutoff >> matches;
        if (((matches * 2) - (cutoff - score)) >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
