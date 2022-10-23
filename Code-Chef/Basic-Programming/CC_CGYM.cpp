#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x, y, z;
    for (int i = 0; i < t; i++) {
        cin>>x>>y>>z;
        if (z >= x) {
            if (z >= x + y)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
            
        else
            cout<<"0"<<endl;
    }
    return 0;
}
