#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int max, min,temp;
	max = a > b ? a : b;
	min = a < b ? a : b;
	while (max % min != 0)
	{
		temp = max % min;
		max = min;
		min = temp;
	}
	cout << min;
	return 0;
}