#include <iostream>
using namespace std;

int main()
{
    int n, m, k, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        if (k <= m)
        {
            int z = m - k;
            if (z >= n)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}