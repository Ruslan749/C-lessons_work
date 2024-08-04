#include <iostream>
#define SYZE_ARRAY 7
using namespace std;
void main() {
	int arr[SYZE_ARRAY],
		minNum = 0,
		iArray = 0;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		cin >> arr[i];

		if (arr[i] < minNum) {
			minNum = arr[i];
			iArray = i;
		} 
	}
	arr[iArray] = 0;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		cout << arr[i] << " ";
	}

}