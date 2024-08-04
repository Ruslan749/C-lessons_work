#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double grade, k = 0, sum = 0, sred;
	cin >> grade;
	while (grade >= 0)
	{
		sum += grade;
		k++;
		cin >> grade;
	}
	if (k > 0)
	{
		sred = sum / k;
		cout << fixed << setprecision(1) << sred;
	}
	else
		cout << "No data";
	return 0;
}