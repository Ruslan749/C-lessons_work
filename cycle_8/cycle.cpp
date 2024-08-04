#include <iostream>
using namespace std;
int main() {
	int num ,count = 0;
	cin >> num;
	for (size_t i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
		}
	}

	if (count == 2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	
	return 0;
}