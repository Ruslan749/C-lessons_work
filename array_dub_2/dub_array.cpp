#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
#include <time.h>  //�-�� �������� ������� time()
using namespace std;
void main() {
	const int ROW = 3,
		COL = 6;

	int num = 0;
	int arr[ROW][COL] = { 0 };
	cin >> num;
	srand(num); //���. �������� ����������

	for (int i = 0; i < ROW; i++)
	{
		for (size_t j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 6; //����� �� 10 �� 30
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < ROW; i++)
	{

		int znach = 0;

		for (size_t j = 0; j < COL; j++)
		{
			if (arr[i][j] == 0 && znach == 0)
			{
				znach = j;
			}
		}

		if (znach == 0)
		{
			cout << "no"<< endl;
		}
		else
		{
			cout << znach << endl;
		}
	}
}