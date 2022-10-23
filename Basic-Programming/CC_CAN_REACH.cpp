#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, k;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> k;
        if (x % k != 0 || y % k != 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
