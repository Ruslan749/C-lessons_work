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
		arr[i] = rand() % 20 + 1; // 1 �� 20
	}

	// ����� ������

	for (int k = 0; k < SYZE; k++) // � - ����� ������� ����� �������
	{
		int imax = k;	// ������� ������ ������� ���������� �����������
		for (int i = k + 1; i < SYZE; i++) {  // ���������� �������� �� k+1 �� �����
			if (arr[i] > arr[imax]) {
				imax = i; //��������� ������ ��������
			}
		}
		//������ ������� a[k] � a[imin]
		int tmp = arr[k];
		arr[k] = arr[imax];
		arr[imax] = tmp;

		cout << arr[k] << "\t";
	}

}