#include <bits/stdc++.h>
using namespace std;

int main() {
    int withdrawal;
    float total;
    cin>>withdrawal>>total;
    float sum;
    sum = total - withdrawal - 0.5;
    if ((withdrawal % 5 == 0) && sum >= 0) {
        cout<<sum<<endl;
    }
        
    else {
        cout<<total<<endl;
    }
        
    return 0;
}
