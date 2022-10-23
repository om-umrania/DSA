#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x;
    for (int i = 0; i < t; i++) {
        cin>>x;
        if (x <= 7 || x < 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
