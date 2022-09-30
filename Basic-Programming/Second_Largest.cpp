#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++){
	    cin>>a[i]>>b[i]>>c[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] > b[i]) {
			if (a[i] > c[i]) {
				if (b[i] > c[i]) {
					cout<<b[i]<<endl;
				}
				else {
					cout<<c[i]<<endl;
				}
			}
            else {
                cout<<a[i]<<endl;
            }
		}
		else {
            if (b[i]>c[i]){
                if (a[i]>c[i]) {
                    cout<<a[i]<<endl;
                }
                else {
                    cout<<c[i]<<endl;
                }
            }
            else {
                if (a[i]>b[i]){
                    cout<<a[i]<<endl;
                }
                else {
                    cout<<b[i]<<endl;
                }
            }
		}
	}
	return 0;
}