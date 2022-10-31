#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int time, r_time, delay;
    for (int i = 0; i < t; i++)
    {
        cin >> time >> r_time >> delay;
        int result = min(r_time * time, time + delay);
        cout << result << endl;
    }
    return 0;
}
