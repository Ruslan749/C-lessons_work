#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
using namespace std;
void main() {
	const int ROW = 5,
		COL = 5;

	int num = 0;
	int arr[ROW][COL] = { 0 };
	cin >> num;
	srand(num); //���. �������� ����������
	int sum = 0;

	for (int j = 0; j < COL; j++)
	{
		for (size_t i = 0; i < ROW; i++)
		{
			arr[j][i] = rand() % 11; //����� �� 10 �� 30
			cout << arr[j][i] << "\t";

		}
		cout << "\n";
	}

	for (int j = 0; j < COL; j++) { //���� �� ��������
		int min = arr[0][j]; //������� ����� ��� ������� �������, ������� � �����
		for (int i = 0; i < ROW; i++) { //���� �� �������
			if (min > arr[i][j]) {
				min = arr[i][j]; //��������� �������, � �� �����
			}
		}
		sum += min;//����� ����������� �� �������� �������� ���������� �������                
	}


	cout << sum;

}