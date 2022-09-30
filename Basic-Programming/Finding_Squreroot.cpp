#include <iostream>
#include <math.h>
using namespace std;

int main(void){
	int reps, sqrti;
	cout<<"Enter number of times: ";
	cin>>reps;
    int num[reps];
	for(int i = 0; i<reps; i++){
		cin>>num[i];
	}
    for (int i = 0; i<reps; i++){
        sqrti = sqrt(num[i]);
		cout<<sqrti<<endl;
    }
	return 0;
}
