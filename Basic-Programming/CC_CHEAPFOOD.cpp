#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x;
    for (int i = 0; i < t; i++) {
        cin>>x;
        if (100 > x*0.1)
            cout<<"100"<<endl;
        else
            cout<<x*0.1<<endl;
    }
    return 0;
}
