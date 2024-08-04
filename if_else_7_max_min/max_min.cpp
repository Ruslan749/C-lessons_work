#include <iostream>
using namespace std;
void main() {
	int a, b, c, e, f;
	scanf_s("%d%d%d%d%d", &a, &b, &c, &e, &f);

	int min = a;

	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	if (min > e) {
		min = e;
	}
	if (min > f) {
		min = f;
	}

	printf("%d", min);

}