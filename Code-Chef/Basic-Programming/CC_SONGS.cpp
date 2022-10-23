#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, x;
    for (int i = 0; i < t; i++) {
        cin>>n>>x;
        x *= 3;
        n /= x;
        cout<<n<<endl;
    }
    return 0;
}
