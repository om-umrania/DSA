#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t], b[t], c[t];
    float s[t];
    for (int i = 0; i < t; i++) {
        cin>>a[i]>>b[i]>>c[i];
        s[i] = (a[i] + b[i])/2;
    }

    for (int i = 0; i < t; i++) {
        if (c[i] > s[i]) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
