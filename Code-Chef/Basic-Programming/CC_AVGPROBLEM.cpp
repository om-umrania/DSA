#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a, b, c;
    float avg;
    for (int i = 0; i < t; i++) {
        cin>>a>>b>>c;
        avg = a+b;
        avg /= 2;
        if (avg > c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
