#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int stair, step;
    for (int i = 0; i < t; i++)
    {
        cin >> stair >> step;
        int rem = stair % step;
        if (rem == 0)
            cout << stair / step << endl;
        else
            cout << rem + int(stair / step) << endl;
    }
    return 0;
}
