#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	const int SYZE = 7;
	int num_rand;
	int arr[SYZE] = { 0 };

	int* ptr = arr;

	for (size_t i = 0; i < SYZE; i++, ptr++)
	{
		cin >> *ptr;

	}

	ptr = arr;

	for (size_t i = 0; i < SYZE - 2; i += 2, ptr += 2)
	{
		int temp = *ptr;
		*ptr = *(ptr + 1);
		*(ptr + 1) = temp;
	}

	ptr = arr;

	for (size_t i = 0; i < SYZE; i++, ptr++)
	{
		cout << *ptr << " ";
	}
	return 0;
}