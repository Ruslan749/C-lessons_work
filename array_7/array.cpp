#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
#include <time.h>  //б-ка содержит функцию time()
#define ARRAY_SAZE 5
using namespace std;
void main() {
	int num = 0,
		imin = 0,
		imax = 0,
		tmp;
	bool flag = true; // для поиска первого элимента в массиве
	int arr[ARRAY_SAZE] = {10,-1,-6,4,7};
	cin >> num;
	srand(num); //нач. значение генератора

	for (int i = 0; i < ARRAY_SAZE; i++) {
		arr[i] = rand() % 21 - 10; //числа от 0 до 50
		cout << arr[i] << " ";

		if (arr[i] < imin && flag)
		{
			imin = i;
			flag = false;
		}

		if (arr[i] >= imax)
		{
			imax = i;
		}

	}
	cout << endl;

	if (imax == 0 || imin == 0)
	{
		cout << "ERROR";
	}
	else
	{
		tmp = arr[imax];
		arr[imax] = arr[imin];
		arr[imin] = tmp;

		for (int i = 0; i < ARRAY_SAZE; i++)
		{
			cout << arr[i] << " ";
		}

	}
}