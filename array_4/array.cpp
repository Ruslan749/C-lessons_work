#include <iostream>
#define SYZE_ARRAY 6
using namespace std;
void main() {
	 int arr[SYZE_ARRAY];
	int	minNum = 5,
		iMinArray = 0,
		iMaxArray = 0,
		maxNum = -10,
		dub = 0;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		 cin >> arr[i];

		if (arr[i] < minNum) {
			minNum = arr[i];
			iMinArray = i;
		}

		if (arr[i] >= maxNum)
		{
			maxNum = arr[i];
			iMaxArray = i;
		}
	}

	dub = minNum;
	arr[iMinArray] = maxNum;
	arr[iMaxArray] = dub;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		cout << arr[i] << " ";
	}
	
}