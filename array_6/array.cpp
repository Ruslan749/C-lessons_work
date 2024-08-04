#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
#include <time.h>  //б-ка содержит функцию time()
#define ARRAY_SAZE 10
using namespace std;
void main() {
	int num;
	double medi_num = 0;
	int arr[ARRAY_SAZE];
	cin >> num;
	srand(num); //нач. значение генератора

	for (int i = 0; i < ARRAY_SAZE; i++) {
		arr[i] = rand() % 51; //числа от 0 до 50
		medi_num += arr[i];
		cout << arr[i] << " ";
	}

	medi_num /= ARRAY_SAZE;

	printf("\n%.2u\n", medi_num);

	for (int i = 0; i < ARRAY_SAZE; i++) {

		if (arr[i] < medi_num)
		{
			cout << arr[i] << " ";
		}
		
	}
}