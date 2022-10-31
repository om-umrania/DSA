#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x1, x2, y1, y2, dif1, dif2, max_n;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 > x2)
            dif1 = x1 - x2;
        else
            dif1 = x2 - x1;
        if (y1 > y2)
            dif2 = y1 - y2;
        else
            dif2 = y2 - y1;
        max_n = max(dif1, dif2);
        cout << max_n << endl;
    }
    return 0;
}
