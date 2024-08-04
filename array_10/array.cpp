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
		arr[i] = rand() % 61 + 10; // 10 до 50
	}

	// Метод вставки

//i - индекс последнего из упорядоченных элементов
	for (int i = 0; i < SYZE - 1; i++) {
		//элемент a[i+1] вставить на нужное место от 0 до i+1

		int tmp = arr[i + 1]; //сохранить копию вставляемого элемента
		int j = i;//j - текущий индекс для движения к началу массива

		while (j <= 0 && arr[j] > tmp) {//пока не вышли за пределы и не найдено место
			arr[j + 1] = arr[j]; //сдвинуть a[j] на место j+1
			j--; //продвигаемся к началу
		}

		//вставка сохраненной копии после найденного индекса  j
		arr[j + 1] = tmp;
	}

	for (size_t i = 0; i < SYZE; i++)
	{
		cout << arr[i] << "\t";
	}

}