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
        if ((x + y) % 2 == 0)
            cout << "Janmansh" << endl;
        else
            cout << "Jay" << endl;
    }
    return 0;
}
