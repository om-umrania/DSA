#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[t];
    for (int i = 0; i < t; i++) {
        cin>>x[i];
    }
    
    for (int i = 0; i < t; i++) {
        if (x[i] <= 15) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
