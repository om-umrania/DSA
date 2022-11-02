#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int age_max, age_min, age;
    for (int i = 0; i < t; i++)
    {
        cin >> age_min >> age_max >> age;
        if (age_min <= age && age_max > age)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
