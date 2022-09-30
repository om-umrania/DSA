#include <iostream>
using namespace std;

int main() {
	int n, e = 0, o = 0;
	cin>>n;
	int A[n];
	for (int i = 0; i < n; i++){
		cin>>A[n];
		if(A[n] % 2 == 0) {
			e++;
		}
		else{
			o++;
		}
	}
	if (e>o){
		cout<<"READY FOR BATTLE";
	}
	else{
		cout<<"NOT READY";
	}
	return 0;
}
