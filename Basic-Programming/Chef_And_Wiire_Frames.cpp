#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, m, x, s;
    for (int i = 0; i < t; i++) {
        cin>>n>>m>>x;
        s = 2*(n+m);
        s *= x;
        cout<<s<<endl;
    }
    return 0;
}
