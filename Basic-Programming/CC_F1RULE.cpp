// https://www.codechef.com/submit/F1RULE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x, y;
    float num2;
    for (int i = 0; i < t; i++) {
        cin>>x>>y;
        num2 = (x*0.07)+ x;
        if (y >= x && num2 >= y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
