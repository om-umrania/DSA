#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int firstnum, secondnum, counter = 0;
    bool condition = false;
    for (int i = 0; i < t; i++)
    {
        cin >> firstnum >> secondnum;
        for (int i = firstnum; i <= secondnum; i++)
        {
            int num = i, rem;
            rem = num % 10;
            if (rem == 2 || rem == 3 || rem == 9)
            {
                counter++;
            }
        }
        cout << counter << endl;
        counter = 0;
    }
    return 0;
}
