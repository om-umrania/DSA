#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num, sq;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        sq = int(sqrt(num));
        cout << sq << endl;
    }
    return 0;
}
