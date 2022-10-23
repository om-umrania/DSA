#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[n];
	for (int i = 0; i < n; i++) {
	    cin>>x[i];
	}
	for (int i = 0; i < n; i++) {
	    if (x[i]>300) {
	        cout<<x[i]*10<<endl;
	    }
	    else {
	        cout<<3000<<endl;
	    }
	}
	return 0;
}
