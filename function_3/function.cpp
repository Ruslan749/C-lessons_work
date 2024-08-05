#include <iostream>
using namespace std;
int power(int x) {
	int res = 1;
	for (size_t i = 1; i <= 3; i++)
	{
		res *= x;
	}

	return res;
}

int main() {
	int i = 2;
	while (i <= 10)
	{
		cout << power(i) << " ";
		i++;
	}
    
    return 0;
}