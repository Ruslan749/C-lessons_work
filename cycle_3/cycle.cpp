#include <iostream>
using namespace std;
int main() {
	int y,max,num;
	cin >> y;

	for (size_t i = 0; i < 1; i++)
	{
		cin >> max;
		for (size_t i = 0; i < y; i++)
		{
			cin >> num;
			if (num > max)
			{
				max = num;
			}
		}

	}
	cout << max;
	return 0;
}