#include <iostream>
#include <math.h>
using namespace std;
void main() {
	double x,res;
	scanf_s("%lf", &x);

	if (x >= 5) {
		res = pow(log10(2 * x), 2);
		printf("%.2f",res);
	}
	else if (x < -2) {
		res = 2 * pow(x, 2);
		printf("%.2f", res);
	}
	else {
		res = sin(x);
		printf("%.2f", res);
	}
	
}