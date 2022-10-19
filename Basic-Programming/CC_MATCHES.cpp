#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, total, rem, sum_a, sum_b, sum_tot;
    int match[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        rem = 0;
        int sum_a = 0, sum_b = 0, sum_tot = 0;
        do
        {
            rem = a % 10;
            sum_a += rem;
            a /= 10;
        } while (a > 0);
        do
        {
            rem = b % 10;
            sum_b += rem;
            b /= 10;
        } while (b > 0);
        total = sum_a + sum_b;
        do
        {
            rem = total % 10;
            sum_tot += match[rem];
        } while (total > 0);
        cout << sum_tot << endl;
    }
    return 0;
}
