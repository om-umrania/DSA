#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m[n], l[n], q[n];
    for (int i = 0; i < n; i++) {
      cin>>m[i]>>l[i];
      q[i] = m[i] / l[i];
    }
    for (int i = 0; i < n; i++) {
      if (((m[i] % l[i]) == 0) & (q[i] % 2 == 0)) {
        cout<<"YES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }
    }
    return 0;
}
