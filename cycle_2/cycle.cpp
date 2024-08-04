#include <iostream>
using namespace std;
int main() {
	int x, y, con, i;
	double num;
	cin >> x >> y;

	if (x > y)
	{
		con = y;
		y = x;
		x = con;
	}

	i = x;
	num = 1;

	if (x == 0 && y == 0 )
	{
		num = 0;
	}

	if (x % 2 == 0 && y % 2 == 0 && x ==y)
	{
		num = 0;
	}
	else if (x % 2 != 0 && y % 2 != 0 && x == y) {
		num = x;
	}
	else
	{
		while (i <= y)
		{
			if (i % 2 != 0)
			{
				num *= i;
			}
			i++;
		}
	}
	cout << num;
	return 0;
}