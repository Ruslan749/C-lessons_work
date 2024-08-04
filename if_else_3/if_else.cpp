#include <iostream>
using namespace std;
void main() {
	double x_1, x_2, x_3, x_4, x_5, res;
	scanf_s("%lf%lf%lf%lf%lf", &x_1, &x_2, &x_3, &x_4, &x_5);
	res = (x_1 + x_2 + x_3 + x_4 + x_5) / 5;
	if (res > 4) {
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}