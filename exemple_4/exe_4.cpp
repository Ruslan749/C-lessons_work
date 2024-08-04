#include <iostream>
using namespace std;
int main() {
	double a, b;
	int square, perimetr;
	cin >> a >> b;
	square = a * b;
	perimetr = a * 2 + b * 2;
	cout << square<< " \t" << perimetr;
	return 0;
}