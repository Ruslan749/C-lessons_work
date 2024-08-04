#include <iostream>
using namespace std;
void main() {
	int x;
	double y,res;
	scanf_s("%u", &x);
	if (x == 1) {
		scanf_s("%lf", &y);
		res = y * 2.54;
		printf("%.2f",res);
	}
	else
	{
		scanf_s("%lf", &y);
		res = y / 2.54;
		printf("%.2f", res);
	}
}