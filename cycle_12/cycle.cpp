#include <iostream>
using namespace std;
int main() {
	int l,
		h;
	cin >> l >> h;

	for (int i = 1; i <= h; i++) // i Ц номер строки
	{
		if (i == 1 || i == h) {
			for (int j = 1; j <= l; j++) { //j Ц номер звездочки в строке
				
				cout << '*';
			}
		}
		else
		{
			for (int j = 1; j <= l; j++) { //j Ц номер звездочки в строке
				
				if (j == 1 || j == l-1)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				
			}
			
		}
		cout << "\n";

	}

	return 0;
}