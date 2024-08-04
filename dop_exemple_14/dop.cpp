#include <iostream>
using namespace std;
int main() {
	int num = 6;
	int x_1, x_2, x_3;
	//scanf_s("%u", &num);

	x_3 = num % 10;
	x_2 = num / 10 % 10;
	x_1 = num / 100 % 10;

	if (num / 1000 != 0 || num <= 0 || x_1 <= 0)
	{
		printf("ERROR");
		return 0;
	}
	
	if (x_1 == x_2 && x_1 == x_3)
	{
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}