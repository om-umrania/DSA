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
        int product = 1;
        for (int j = 1; j <= n; j++)
            product *= j;
        cout << product << endl;
    }
    return 0;
}
