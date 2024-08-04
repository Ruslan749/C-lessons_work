#include <iostream>
using namespace std;
int main() {
	int num,x_1,x_2,x_3,x_4,x_5,x_6;
	cin >> num;
	if (num / 100000 < 1.0 || num / 100000 >= 10.0) {
		printf("ERROR");
		return 0;
	}

	x_6 = num % 10;
	x_5 = (num/10) % 10;
	x_4 = (num / 100) % 10;
	x_3 = (num / 1000) % 10;
	x_2 = (num / 10000) % 10;
	x_1 = num / 100000;

	if (x_1 + x_2 + x_3 == x_4 + x_5 + x_6)
	{
		printf("YES");
	}else {
		printf("NO");
	}
	return 0;
}