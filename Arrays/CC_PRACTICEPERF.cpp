#include <bits/stdc++.h>
using namespace std;

int main() {
    int p[3];
    int counter = 0;
    for (int i = 0; i < 4; i++) {
        cin>>p[i];
        if (p[i] >= 10)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
