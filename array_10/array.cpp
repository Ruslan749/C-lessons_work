#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
using namespace std;
void main() {
	const int SYZE = 10;

	int num;
	int arr[SYZE] = { 0 };
	cin >> num;
	srand(num); //���. �������� ����������
	int sum = 0;

	for (int i = 0; i < SYZE; i++)
	{
		arr[i] = rand() % 61 + 10; // 10 �� 50
	}

	// ����� �������

//i - ������ ���������� �� ������������� ���������
	for (int i = 0; i < SYZE - 1; i++) {
		//������� a[i+1] �������� �� ������ ����� �� 0 �� i+1

		int tmp = arr[i + 1]; //��������� ����� ������������ ��������
		int j = i;//j - ������� ������ ��� �������� � ������ �������

		while (j <= 0 && arr[j] > tmp) {//���� �� ����� �� ������� � �� ������� �����
			arr[j + 1] = arr[j]; //�������� a[j] �� ����� j+1
			j--; //������������ � ������
		}

		//������� ����������� ����� ����� ���������� �������  j
		arr[j + 1] = tmp;
	}

	for (size_t i = 0; i < SYZE; i++)
	{
		cout << arr[i] << "\t";
	}

}