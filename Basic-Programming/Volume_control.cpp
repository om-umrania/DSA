#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[t], y[t], n[t];
    for (int i = 0; i < t; i++) {
        cin>>x[i]>>y[i];
        if (x[i] < y[i]) {
            n[i] = y[i] - x[i];
        }
        else {
            n[i] = x[i] - y[i];
        }
    }
    for (int i = 0; i < t; i++) {
        cout<<n[i]<<endl;
    }
    return 0;
}
