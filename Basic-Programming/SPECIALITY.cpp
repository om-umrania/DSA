#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x, y, z;
    for (int i = 0; i < t; i++) {
        cin>>x>>y>>z;
        if (x > y) {
            if (x > z)
                cout<<"Setter"<<endl;
            else
                cout<<"Editorialist"<<endl;
        }
        else {
            if (y > z)
                cout<<"Tester"<<endl;
            else
                cout<<"Editorialist"<<endl;
        }
    }
    return 0;
}
