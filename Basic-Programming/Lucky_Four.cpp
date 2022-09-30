#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x, r, count;
    for (int i = 0; i<t;i++) {
        count = 0;
        cin>>x;
        for (;x>0;){
            r = x%10;
            if (r == 4)
                count++;
            x /= 10;
        }
        cout<<count<<endl;
    }
    return 0;
}
