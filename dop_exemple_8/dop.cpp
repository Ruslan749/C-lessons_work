#include <iostream>
using namespace std;
void main() {
	double x,y,z,m;
	scanf_s("%lf%lf%lf", &x,&y,&z);

	double max = x;
	double min = x;

	if (max < y) {
		max = y;
	}
	if (max < z) {
		max = z;
	}

	if (min > y) {
		min = y;
	}

	m = max / min + 5;

	printf("%.2f", m);
}