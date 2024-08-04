#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
using namespace std;
void main() {
	const int ROW = 5,
		COL = 5;

	int num = 0;
	int arr[ROW][COL] = { 0 };
	cin >> num;
	srand(num); //нач. значение генератора
	int sum = 0;

	for (int j = 0; j < COL; j++)
	{
		for (size_t i = 0; i < ROW; i++)
		{
			arr[j][i] = rand() % 11; //числа от 10 до 30
			cout << arr[j][i] << "\t";

		}
		cout << "\n";
	}

	for (int j = 0; j < COL; j++) { //цикл по столбцам
		int min = arr[0][j]; //минимум новый для каждого столбца, поэтому в цикле
		for (int i = 0; i < ROW; i++) { //цикл по строкам
			if (min > arr[i][j]) {
				min = arr[i][j]; //обновляем минимум, а не сумму
			}
		}
		sum += min;//сумму увеличиваем на значение минимума очередного столбца                
	}


	cout << sum;

}