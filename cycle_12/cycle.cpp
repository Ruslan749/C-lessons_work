#include <iostream>
using namespace std;
int main() {
	int l,
		h;
	cin >> l >> h;

	for (int i = 1; i <= h; i++) // i � ����� ������
	{
		if (i == 1 || i == h) {
			for (int j = 1; j <= l; j++) { //j � ����� ��������� � ������
				
				cout << '*';
			}
		}
		else
		{
			for (int j = 1; j <= l; j++) { //j � ����� ��������� � ������
				
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