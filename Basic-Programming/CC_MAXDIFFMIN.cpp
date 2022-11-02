#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num1, num2, num3, max_num, min_num, diff;
    for (int i = 0; i < t; i++)
    {
        cin >> num1 >> num2 >> num3;
        max_num = max(num1, num2);
        max_num = max(num3, max_num);
        min_num = min(num1, num2);
        min_num = min(min_num, num3);
        diff = max_num - min_num;
        cout << diff << endl;
    }
    return 0;
}
