#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        if (num < 10)
            cout << "Thanks for helping Chef!" << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
