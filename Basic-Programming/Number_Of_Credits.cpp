#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[t], y[t], z[t], s[t];
    for (int i = 0; i < t; i++) {
        cin>>x[i]>>y[i]>>z[i];
        s[i] = (x[i] * 4) + (y[i] * 2) + (z[i]*0);
    }
    for (int i = 0; i < t; i++) {
        cout<<s[i]<<endl;
    }
    return 0;
}
