#include <iostream>
using namespace std;
void frame(int l, int h) {
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

				if (j == 1 || j == l)
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
}
int main() {
    int l, h;
    cin >> l >> h;
    if (l <= 0 || h <= 0) return 1;
    frame(l, h);
    return 0;
}
