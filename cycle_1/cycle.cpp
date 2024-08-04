#include <iostream>
using namespace std;
int main() {
	int sum = 0, i, num;
	for (i = 0; i < 6; i++)
	{
		cin >> num;
		if (num % 2 != 0)
		{
			sum++;
		}

	}
	cout << sum;
	return 0;
}