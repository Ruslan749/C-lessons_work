#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	const int SYZE_ROW = 5,
		SYZE_COLL = 6;
	int num_rand;
	int arr[SYZE_ROW][SYZE_COLL] = { 0 };

	cin >> num_rand;
	srand(num_rand);

	int* ptr = arr[0];

	for (size_t i = 0; i < SYZE_ROW; i++)
	{
		for (size_t j = 0; j < SYZE_COLL; j++, ptr++)
		{
			*ptr = rand() % 10 - 7;
			cout << *ptr << "\t";
		}
		cout << endl;
	}


	ptr = arr[0]; //эквивалентно ptr=&a[1][0];


	for (size_t i = 0; i < SYZE_ROW; i++,ptr++)
	{

		cout << *ptr << "\t";
	}



	return 0;