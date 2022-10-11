#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, x, count = 0;
    for (int i = 0; i < t; i++) {
        cin>>n>>x;
        for (int j = 0; j < n;) {
            count++;
            j += 6;
        }

        cout<<count*x<<endl;
        count = 0;
    }
    return 0;
}
