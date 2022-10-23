#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int c, x, y;
    for (int i = 0; i < t; i++) {
        cin>>c>>x>>y;
        c -= x;
        c *= y;
        cout<<c<<endl;
    }
    return 0;
}
