#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t[n], x[n], p[n], m[n];
    for (int i = 0; i < n; i++) {
        cin>>t[i]>>x[i]>>p[i];
    }
    for (int i = 0; i < n; i++) {
        m[i] = x[i]*3 - (t[i] - x[i]);
        if (m[i] >= p[i]) {
            cout<<"PASS"<<endl;
        }
        else {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
