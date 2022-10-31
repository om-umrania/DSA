#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int level, time, brek, total, div;
    for (int i = 0; i < t; i++)
    {
        cin >> level >> time >> brek;
        total = time * level;
        if (level > 3 && level % 3 != 0)
        {
            div = int(level / 3);
            total += div * brek;
        }
        else if (level > 3 && level % 3 == 0)
        {
            div = int(level / 3);
            total += ((div - 1) * brek);
        }
        cout << total << endl;
    }
    return 0;
}
