#include<iostream>
using namespace std;
void transform(int &a);
int main() {
	int num;
	cin >> num;
	transform(num);
	cout << num;
	return 0;
}
void transform(int &num) {
	int res = 0;
	int rem;
	while (num != 0)
	{
		rem = num % 10;
		res = res * 10 + rem;
		num /= 10;
	}
	num = res;
}