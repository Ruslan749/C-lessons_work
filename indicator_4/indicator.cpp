#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	const int SYZE_ROW = 4,
			  SYZE_COLL = 3;
	int num_rand, 
		sum_zero = 0;
	int arr[SYZE_ROW][SYZE_COLL] = {0};

	cin >> num_rand;
	srand(num_rand);

	int* ptr = arr[0];

	for (size_t i = 0; i < SYZE_ROW; i++)
	{
		for (size_t j = 0; j < SYZE_COLL; j++, ptr++)
		{
			*ptr = rand() % 11;
			cout << *ptr << "\t";
			if (*ptr == 0)
			{
				sum_zero++;
			}
			
		}
		cout << endl;
	}
	cout << sum_zero<< endl;
	return 0;
}