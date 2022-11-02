#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int time;
    for (int i = 0; i < t; i++)
    {
        cin >> time;
        if (time >= 30)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
