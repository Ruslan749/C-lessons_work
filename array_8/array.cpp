#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
using namespace std;
void main() {
	const int SYZE = 10;

	int num;
	int arr[SYZE] = { 0 };
	cin >> num;
	srand(num); //нач. значение генератора
	int sum = 0;

	for (int i = 0; i < SYZE; i++)
	{
		arr[i] = rand() % 20 + 1; // 1 до 20
	}

	// Метод выбора

	for (int k = 0; k < SYZE; k++) // к - левая граница части массива
	{
		int imax = k;	// считаем первый элемент подмассива минимальным
		for (int i = k + 1; i < SYZE; i++) {  // перебираем элементы от k+1 до конца
			if (arr[i] > arr[imax]) {
				imax = i; //обновляем индекс минимума
			}
		}
		//меняем местами a[k] и a[imin]
		int tmp = arr[k];
		arr[k] = arr[imax];
		arr[imax] = tmp;

		cout << arr[k] << "\t";
	}

}