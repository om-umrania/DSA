#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a, b, c, d;
    for (int i = 0; i < t; i++) {
        cin>>a>>b>>c>>d;
        a -= c;
        b -= d;
        if (a > b)
            cout<<"Second"<<endl;
        else {
            if (b > a)
                cout<<"First"<<endl;
            else
                cout<<"Any"<<endl;
        }
    }
    return 0;
}
