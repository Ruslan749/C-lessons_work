#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
#include <time.h>  //�-�� �������� ������� time()
using namespace std;
void main() {
	const int ROW = 3,
			  COL = 4;

	int num = 0;
	int arr[ROW][COL] = {0};
	cin >> num;
	srand(num); //���. �������� ����������

	for (int i = 0; i < ROW; i++) 
	{
		for (size_t j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 21 + 10; //����� �� 10 �� 30
			cout << arr[i][j] << "\t";
		}
		cout << "\n";		
	}

	for (int i = 0; i < ROW; i++)
	{
		for (size_t j = 0; j < COL; j++)
		{
			if (i == 1)
			{
				arr[i][j] = 0;
			}
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
}