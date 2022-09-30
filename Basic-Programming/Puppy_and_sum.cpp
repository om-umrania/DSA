#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int d[t], n[t], s[t];
    for (int i = 0; i < t; i++) {
        cin>>d[i]>>n[i];
        for (int j = 0; j<d[i]; j++) {
            s[i] = (n[i]*(n[i]+1))/2;
            n[i] = s[i];
        }
    }
    for (int i = 0; i < t; i++) {
        cout<<s[i]<<endl;
    }
    return 0;
}
