#include <iostream>
using namespace std;
int main() {
	int AB, BC,weight,rashod;
	int fuel = 300;
	double res;

	scanf_s("%u%u%u", &AB, &BC, &weight);

	if (weight <= 500)
	{
		rashod = 1;
	}else if (weight <= 1000) {
		rashod = 4;
		}
	else if (weight <= 1500) {
		rashod = 7;
	}
	else if (weight <= 2000) {
		rashod = 9;
	}

	if (AB * rashod > fuel || BC * rashod > fuel || weight > 2000) {
		printf("ERROR");
		return 0;
	}


	res = 300 - AB * rashod;
	if (res < BC * rashod) {
		res = BC * rashod - res;
	}
	else
	{
		res = 0.00;
	}

	printf("%.2lf", res);

	return 0;

}