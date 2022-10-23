#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    float n, m, k;
    for (int i = 0; i < t; i++) {
        cin>>n>>m>>k;
        if ((n/m) <= k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
