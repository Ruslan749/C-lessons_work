// Ввести 2 целых числа и вывести сумму этих чисел
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;

	cout << "Введите число А: ";
	cin >> a;

	cout << "Введите число Б: ";
	cin >> b;

	cout << "Сумма = " << a + b << "\n";
	system("pause");

	return 0;
}