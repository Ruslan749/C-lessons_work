#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
void main() {
	double a, z, y;
	double const Pi = 4 * atan(1);
	cin >> a;

	z = 2 * pow(sin(3 * Pi - 2 * a), 2) * pow(cos(5 * Pi + 2 * a), 2);
	cout << fixed << setprecision(6) << z << endl;

	y = (1. / 4) - (1. / 4) * sin(((5. / 2) * Pi )- 8 * a);
	cout << fixed << setprecision(6) << y;

}