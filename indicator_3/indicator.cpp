#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	const int SYZE = 10;
	int num_rand;
	int arr[SYZE] = { 0 };

	cin >> num_rand;
	srand(num_rand);

	int *end = arr + SYZE -1;
	int* ptr = arr;

	for (size_t i = 0; i < SYZE; i++, ptr++)
	{
		*ptr = rand() % 41 - 20; // 1 до 20

		cout << *ptr << " ";

	}
	cout << endl;
	ptr = arr;

	while (ptr < end)
	{
		int temp = *ptr;
		*ptr = *end;
		*end = temp;

		ptr++;
		end--;
	}
	cout << endl;
	ptr = arr;


	for (size_t i = 0; i < SYZE; i++, ptr++)
	{

		cout << *ptr << " ";

	}
	return 0;
}