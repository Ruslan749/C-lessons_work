#include <iostream>
using namespace std;
int main() {
	int wotch;
	double tarif,sum;
	scanf_s("%u%lf", &wotch, &tarif);
	
	if (wotch < 0 || tarif < 0) {
		printf("ERROR");
		return 0;
	}

	if (wotch < 40)
	{
		sum = wotch * tarif;
	}
	else {
		sum = (wotch - 40) * tarif * 1.5 + 40 * tarif;
	}

	printf("%.2lf", sum);
	return 0;
}