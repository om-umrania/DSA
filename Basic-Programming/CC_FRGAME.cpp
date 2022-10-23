#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if (a >= b)
        {
            b += c;
            if (a >= b)
                b += d;
            else
                a += d;
        }
        else
        {
            a += c;
            if (a >= b)
                b += d;
            else
                a += d;
        }
        if (a >= b)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }
    return 0;
}
