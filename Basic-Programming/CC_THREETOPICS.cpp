#include <bits/stdc++.h>
using namespace std;

int main()
{
    int topic1, topic2, topic3, x;
    cin >> topic1 >> topic2 >> topic3 >> x;
    if (topic1 == x || topic2 == x || topic3 == x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
