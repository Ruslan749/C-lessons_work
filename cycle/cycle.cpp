#include <iostream>
using namespace std;
int main() {
	int a, b;
	char ch;
	cin >> a >> b >> ch;

	if (a != 1 && a != 2 && b <= 0)
	{
		cout << "ERROR";
		return 0;
	}

	switch (a) {
	case 1:
		for (int i = 0; i < b; i++) {
			cout << ch << endl;
		}
		break;
	case 2:
		for (int i = 0; i < b; i++) {
			cout << ch << " ";
		}
		break;
	}
	return 0;
}