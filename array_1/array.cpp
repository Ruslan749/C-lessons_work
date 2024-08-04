#include <iostream>
using namespace std;
void main() {
	int quantity_zero = 0,
		sum_odd = 0;
	const int SYZE_ARRAY = 6;
	int arr[SYZE_ARRAY];

	for (size_t i = 0; i < SYZE_ARRAY; i++)
	{
		cin >> arr[i];
		
		if (arr[i] == 0)
		{
			quantity_zero++;
		}
		
	}

	for (size_t i = 0; i < SYZE_ARRAY; i+=2)
	{
		sum_odd += arr[i];
	}
	
	cout << quantity_zero << " " << sum_odd;
}