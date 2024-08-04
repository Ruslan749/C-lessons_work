#include <iostream>
using namespace std;
int main() {
	int num,
		count = 0,
		max = 0;
	do
	{
		cin >> num;
		if (num == max)
		{
			count++;
		}
		if (num > max)
		{
			max = num;
			count = 1;
		}
		if (max == 0)
		{
			count = 0;
		}
	} while (num != 0);

	cout << count;;
	return 0;
}