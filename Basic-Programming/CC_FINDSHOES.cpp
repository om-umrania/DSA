#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, sum;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if (m >= n)
            sum = n;
        else
            sum = n * 2 - m;
        cout << sum << endl;
    }
    return 0;
}
