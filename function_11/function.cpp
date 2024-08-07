#include<iostream>
using namespace std;
#include <iomanip>
double parallelepiped(double a, double b, double c, double& volume);
int main() {
	double a, b, c, square, volume;
	cin >> a >> b >> c;
	square = parallelepiped(a, b, c, volume);
	cout << fixed << setprecision(2) << square << " " << volume;
	return 0;
}
double parallelepiped(double a, double b, double c, double& volume) {
	volume = a * b * c;
	return 2*(a * c + c * b + a * b);
}