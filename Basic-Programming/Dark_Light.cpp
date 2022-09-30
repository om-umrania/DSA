#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, k;
    bool switch;
    for (int i = 0; i < t; i++) {
        if (n == 0 || n == 1 || n == 2)
            switch = true;
        else
            switch = false;
        if (switch == true){
            if (k % 4 == 0)
                cout<<"On"<<endl;
            else
                cout<<"Ambiguous"<<endl;
        }
        else {
            if (k % 4 == 0)
                cout<<"Off"<<endl;
            else
                cout<<"On"<<endl;
        }
    }
    return 0;
}
