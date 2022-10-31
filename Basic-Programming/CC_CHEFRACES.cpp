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
        int result = 0;
        if (a != c && a != d)
            result++;
        if (b != c && b != d)
            result++;
        cout << result << endl;
    }
    return 0;
}
