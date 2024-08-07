#include <iostream>
using namespace std;
double myArea(double x);
double myArea(double y,z);

int main() {
	double x, y, z;
	cin >> x >> y >> z;
	cout << myArea(x) << " " << myArea(y, z);
	return 0;
}

double myArea(double x) {
	return x * x;
}

double myArea(double y, double z) {
	return y * z;
}