#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
#include <time.h>  //�-�� �������� ������� time()
#define ARRAY_SAZE 5
using namespace std;
void main() {
	int num = 0,
		imin = 0,
		imax = 0,
		tmp;
	bool flag = true; // ��� ������ ������� �������� � �������
	int arr[ARRAY_SAZE] = {10,-1,-6,4,7};
	cin >> num;
	srand(num); //���. �������� ����������

	for (int i = 0; i < ARRAY_SAZE; i++) {
		arr[i] = rand() % 21 - 10; //����� �� 0 �� 50
		cout << arr[i] << " ";

		if (arr[i] < imin && flag)
		{
			imin = i;
			flag = false;
		}

		if (arr[i] >= imax)
		{
			imax = i;
		}

	}
	cout << endl;

	if (imax == 0 || imin == 0)
	{
		cout << "ERROR";
	}
	else
	{
		tmp = arr[imax];
		arr[imax] = arr[imin];
		arr[imin] = tmp;

		for (int i = 0; i < ARRAY_SAZE; i++)
		{
			cout << arr[i] << " ";
		}

	}
}