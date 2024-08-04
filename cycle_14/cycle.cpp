#include <iostream>
using namespace std;
int main() {
	int c;

	cin >> c;

	for (int j = c; j >= 0; j--) {
		for (int i = 1; i <= j; i++) {
			if (i <= (c - j))
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}