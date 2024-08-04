#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
using namespace std;
void main() {
	const int ROW = 4,
		COL = 3;

	int num = 0;
	int arr[ROW][COL] = { 0 };
	cin >> num;
	srand(num); //нач. значение генератора
	int sum = 0;

	for (int j = 0; j < ROW; j++)
	{
		for (size_t i = 0; i < COL; i++)
		{
			arr[j][i] = rand() % 11 - 5; //числа от 10 до 30
			cout << arr[j][i] << "\t";
		}
		cout << "\n";
	}


	for (int i = 0; i < ROW; i++) {
		int num = 0;
		for (int j = 0; j < COL; j++) {
			if (arr[i][j] != 0) {
				num++;
			}
		}
		if (num == COL) {
			sum++;
		}
	}
	cout << sum;
}