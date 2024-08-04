#include <iostream>
using namespace std;
int main() {
	int a, b, num;
	cin >> a >> b;
	bool c, v;
	for (int i = 1; i <= a; i++)
	{
		c = ((a % (i)) == 0);
		v = ((b % (i)) == 0);

		if ((c && v) == 1)
		{
			cout << i << " ";
		}

	}
	return 0;
}