#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int supply[n], demand[n], counter = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> supply[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> demand[j];
            if (supply[j] == demand[j])
                counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
