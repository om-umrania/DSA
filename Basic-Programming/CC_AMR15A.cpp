#include <iostream>
using namespace std;

int main()
{
	int num, even = 0, odd = 0;
	cin >> num;
	int A[num];
	for (int i = 0; i < num; i++)
	{
		cin >> A[num];
		if (A[num] % 2 == 0)
		{
			even++;
		}
		else
			odd++;
	}
	if (even > odd)
		cout << "READY FOR BATTLE";
	else
		cout << "NOT READY";
	return 0;
}