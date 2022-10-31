#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int num1, num2, num3;
    for (int i = 0; i < t; i++)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                if (num2 > num3)
                    cout << num2 << endl;
                else
                    cout << num3 << endl;
            }
            else
                cout << num1 << endl;
        }
        else
        {
            if (num2 > num3)
            {
                if (num1 > num3)
                    cout << num1 << endl;
                else
                    cout << num3 << endl;
            }
            else
            {
                if (num1 > num2)
                    cout << num1 << endl;
                else
                    cout << num2 << endl;
            }
        }
    }
    return 0;
}