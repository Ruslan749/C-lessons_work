#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
	double a, b,c;
	scanf_s("%lf%lf", &a, &b);
	c = a * b;
	printf("%.3f", c);
}