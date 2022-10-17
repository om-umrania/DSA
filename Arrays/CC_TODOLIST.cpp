#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, len, count = 0;
    cin>>t;
    for (int i = 0; i < t; i++) {
        cin>>len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin>>arr[len];
            if (arr[len] >= 1000)
                count++;
        }
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}
