#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
#include <time.h>  //�-�� �������� ������� time()
#define ARRAY_SAZE 10
using namespace std;
void main() {
	int num;
	double medi_num = 0;
	int arr[ARRAY_SAZE];
	cin >> num;
	srand(num); //���. �������� ����������

	for (int i = 0; i < ARRAY_SAZE; i++) {
		arr[i] = rand() % 51; //����� �� 0 �� 50
		medi_num += arr[i];
		cout << arr[i] << " ";
	}

	medi_num /= ARRAY_SAZE;

	printf("\n%.2u\n", medi_num);

	for (int i = 0; i < ARRAY_SAZE; i++) {

		if (arr[i] < medi_num)
		{
			cout << arr[i] << " ";
		}
		
	}
}