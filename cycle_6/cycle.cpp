#include <iostream>
using namespace std;
int main() {
	int num,sum=0;
	do
	{
		cin >> num;

		if (num % 2 == 0)
		{
			sum++;
		}

	} while (num != -99);

	cout << sum;
	return 0;
}