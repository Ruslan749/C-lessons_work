#include <iostream>
using namespace std;
int main() {
	int num = 0,sum,count = 0;
	cin >> num;
	sum = num % 10;
	
	do
	{
		num = num / 10;
		sum += num % 10;
		count++;
	} while (num % 10 != 0);

	cout << count << " " << sum;
	return 0;
}