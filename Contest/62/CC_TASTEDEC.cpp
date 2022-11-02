#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        x *= 2;
        y *= 5;
        if (x > y)
            cout << "Chocolate" << endl;
        else if (x < y)
            cout << "Candy" << endl;
        else
            cout << "Either" << endl;
    }

    return 0;
}
