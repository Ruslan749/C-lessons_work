#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	double a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b + c;
	cout << fixed << setprecision(3) << sum << "\n" 
		<< a * b * c << "\n" << sum / 3;
}