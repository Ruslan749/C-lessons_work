#include <iostream>
#include <cstdlib> //б-ка содержит rand() и srand()
using namespace std;
void main() {
	const int ROW = 7,
		COL = 7;

	int num = 0;
	int arr[ROW][COL] = { 0 };
	cin >> num;
	srand(num); //нач. значение генератора
	int sum = 0;

	for (int j = 0; j < ROW; j++)
	{
		for (size_t i = 0; i < COL; i++)
		{
			arr[j][i] = rand() % 101; //числа от 10 до 30
			cout << arr[j][i] << "\t";
		}
		cout << "\n";
	}
}