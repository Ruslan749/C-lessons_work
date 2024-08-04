#include <iostream>
using namespace std;
void main() {
	int a;
	cin >> a;
	cout << (a / 60) / 60 << endl;
	cout << (a / 60) % 60 << endl;
	cout << a % 60 << endl;
}