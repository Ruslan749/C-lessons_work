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
		arr[i] = rand() % 18 - 3; // 1 до 20
	}

	// Метод пузырьковой сортировки

//k- правая граница части массива
	for (int k = SYZE - 1; k > 0; k--) { //правая граница части массива уменьшается
		//просмотреть пары с индексом первого элемента от 0 до k-1
		for (int i = 0; i < k; i++) { //i-индекс первого элемента из пары
			if (arr[i] < arr[i + 1]) {
				//переставить местами элементы пары
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

	for (size_t i = 0; i < SYZE; i++)
	{
		cout << arr[i] << "\t";
	}

}