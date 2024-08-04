#include <iostream>
#define SYZE_ARRAY 10
using namespace std;
void main() {
	int arr[SYZE_ARRAY],
		quantityNum_of_midiNum = 0;
	double midiNum = 0.0;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		cin >> arr[i];
		midiNum += arr[i];

	}
	midiNum /= SYZE_ARRAY;

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		if (arr[i] < midiNum)
		{
			quantityNum_of_midiNum++;
		}
	}
	printf("%.1lf %u", midiNum, quantityNum_of_midiNum);
}