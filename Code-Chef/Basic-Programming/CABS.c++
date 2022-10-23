#include <iostream>
using namespace std;

int main() {
	int testcase, x, y;
	cin>>testcase;
	for (int i = 0; i < testcase; i++)
	{
	    cin>>x>>y;
	    if (x < y) {
	        printf("FIRST\n");
	    }
	    else {
	        if (y < x) {
	            printf("SECOND\n");
	        }
	        else {
	            printf("ANY\n");
	        }
	    }
	}
	return 0;
}
