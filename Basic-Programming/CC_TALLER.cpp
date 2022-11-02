#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int num1, num2;
    for (int i = 0; i < t; i++)
    {
        cin >> num1 >> num2;
        if (num1 > num2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}
