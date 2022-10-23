#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int w[n], x[n], y[n], z[n];
    for (int i = 0; i < n; i++) {
      cin>>w[i]>>x[i]>>y[i]>>z[i];
    }
    for (int i = 0; i < n; i++) {
      if (w[i] == x[i] | w[i] == y[i] | w[i] == z[i])
      {
        cout<<"YES"<<endl;
      }
      else {
        if (w[i] == x[i] + y[i] | w[i] == y[i] + z[i] | w[i] == x[i] + z[i] | w[i] == x[i] + y[i] + z[i]) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
      }
      
    }
    return 0;
}
