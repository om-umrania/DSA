#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int bottles, capacity, total, result;
    for (int i = 0; i < t; i++)
    {
        cin >> bottles >> capacity >> total;
        result = total / capacity;
        result = min(bottles, result);
        cout << result << endl;
    }
    return 0;
}
