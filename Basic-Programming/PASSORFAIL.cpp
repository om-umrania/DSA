#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int total, correct, pass, marks;
    for (int i = 0; i < t; i++)
    {
        cin >> total >> correct >> pass;
        marks = correct * 3 - (total - correct);
        if (marks >= pass)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
    return 0;
}