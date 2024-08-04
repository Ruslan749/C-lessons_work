#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	const int SYZE = 12;
	int num_rand;
	int arr[SYZE] = {0};

	cin >> num_rand;
	srand(num_rand);

	double  num_pos = 0,
		    num_neg = 0;
	int *ptr = arr;

	for (size_t i = 0; i < SYZE; i++,ptr ++)
	{
		*ptr = rand() % 91 - 45; // 1 до 20

		cout << arr[i] << " ";
		if (*ptr > 0)
		{
			num_pos++;
		}

		if (*ptr < 0)
		{
			num_neg++;
		}

	}
	cout << endl;

	cout <<fixed<<setprecision(2) << num_pos * 100 / SYZE << "% " << num_neg * 100 / SYZE<<"%" << endl;

	return 0;
}