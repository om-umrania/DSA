#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int num1, num2, num3;
    for (int i = 0; i < t; i++) {
        cin>>num1>>num2>>num3;
        if (num1 > num2 + num3 || num2 > num1 + num3 || num3 > num1 + num2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
