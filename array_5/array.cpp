/*
		x=rand()%(b-a+1)+a;  // ��������� ����� � ��������� �� a �� b
*/

#include <iostream>
#include <cstdlib> //�-�� �������� rand() � srand()
#include <time.h>  //�-�� �������� ������� time()
#define ARRAY_SAZE 10
using namespace std;
void main() {
	int num = 7,
		max = 0,
		min = 15;
	int arr[ARRAY_SAZE];
//	cin >> num;
	srand(num); //���. �������� ����������

	for (int i = 0; i < ARRAY_SAZE; i++) {
		arr[i] = rand() % 21-5; //����� �� -5 �� 15
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		cout << arr[i] << " ";
	}
	int sum = min + max;
	cout << "\n"<< sum;
}