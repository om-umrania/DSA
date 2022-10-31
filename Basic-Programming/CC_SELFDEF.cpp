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
        int women, count = 0;
        for (int i = 0; i < num; i++)
        {
            cin >> women;
            if (women <= 60 && women >= 10)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}
