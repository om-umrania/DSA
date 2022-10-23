// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int num[n];
//     for (int i = 0; i < n; i++) {
//       cin>>num[i];
//     }
//     for (int i = 0; i < n; i++) {
//       if (num[i] != 42) {
//         cout<<num[i]<<endl;
//       }
//       else {
//         return 0;
//       }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int a;
//     do{
//         cin>>a;
//         if(a!=42 and a<100 and a>(-100))
//          cout<<a<<" ";
//     }while(a!=42 and a<100 and a>(-100));
// }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=42){
	    cout<<n<<" ";
	    cin>>n;
	}
	return 0;
}