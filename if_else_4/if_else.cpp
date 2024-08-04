#include <iostream>
using namespace std;
void main() {
	double x_1, x_2, x_3, x_4, x_5, x_6, res_1, res_2;
	scanf_s("%lf%lf%lf%lf%lf%lf", &x_1, &x_2, &x_3, &x_4, &x_5, &x_6);
	res_1 = (x_1 + x_2) / 2.;
	res_2 = (x_3 + x_4 + x_5 + x_6) / 4.;
	if (res_1 > res_2) {
		printf("First");
	}
	else if(res_1 == res_2){
		printf("Draw");
	}
	else
	{
		printf("Second");
	}
}