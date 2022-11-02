#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num, num_a, num_b, num_c, num_d;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        cin >> num_a >> num_b >> num_c >> num_d;
        int max_num = 0;
        if (num == num_a + num_b + num_c + num_d)
        {
            max_num = max(num_a, num_b);
            max_num = max(max_num, num_c);
            max_num = max(max_num, num_d);
        }
        cout << max_num << endl;
    }
    return 0;
}
