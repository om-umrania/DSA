#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, n;
    float count_a = 0, count_b = 0, prod;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;
        int x[n];
        for (int j = 0; j < n; j++)
        {
            cin >> x[j];
            if (x[j] == a)
                count_a++;
            if (x[j] == b)
                count_b++;
        }
        count_a /= n;
        count_b /= n;
        prod = count_a * count_b;
        cout << prod << endl;
        count_a = 0;
        count_b = 0;
    }
    return 0;
}
