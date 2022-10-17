#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int cases;
        cin >> cases;
        int num[cases], sum = 0;
        for (int j = 0; j < cases; j++)
        {
            cin >> num[j];
        }
        int arr[cases], counter = 0;
        for (int j = 0; j < cases; j++)
        {
            for (int k = j + 1; k < cases; k++)
            {
                if (num[j] == num[k])
                {
                    counter++;
                }
            }
            arr[j] = counter;
            counter = 0;
        }
        int temp = 0;
        for (int j = 0; j < cases; j++)
        {
            if (temp < arr[j])
            {
                temp = arr[j];
            }
        }
        cout << cases - temp - 1 << endl;
    }
    return 0;
}
