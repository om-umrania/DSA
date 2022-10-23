#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x, y, m, rent;
    for (int i = 0; i < t; i++) {
        cin>>x>>y>>m;
        rent = x * m;
        if (rent >= y)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
