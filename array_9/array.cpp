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
		arr[i] = rand() % 18 - 3; // 1 �� 20
	}

	// ����� ����������� ����������

//k- ������ ������� ����� �������
	for (int k = SYZE - 1; k > 0; k--) { //������ ������� ����� ������� �����������
		//����������� ���� � �������� ������� �������� �� 0 �� k-1
		for (int i = 0; i < k; i++) { //i-������ ������� �������� �� ����
			if (arr[i] < arr[i + 1]) {
				//����������� ������� �������� ����
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

	for (size_t i = 0; i < SYZE; i++)
	{
		cout << arr[i] << "\t";
	}

}