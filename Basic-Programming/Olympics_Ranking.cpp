#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int g1[t], s1[t], b1[t], n1[t], g2[t], s2[t], b2[t], n2[t];
    for (int i = 0; i < t; i++) {
        cin>>g1[i]>>s1[i]>>b1[i]>>g2[i]>>s2[i]>>b2[i];
        n1[i] = g1[i]+s1[i]+b1[i];
        n2[i] = g2[i]+s2[i]+b2[i];
    }
    for (int i = 0; i < t; i++) {
        if (n1[i] > n2[i]) {
            cout<<"1"<<endl;
        }
        else {
            cout<<"2"<<endl;
        }
    }
    return 0;
}
