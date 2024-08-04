#include <iostream>
using namespace std;
int main() {
	char ch;
	scanf_s("%c", &ch);


	switch (ch)
	{
	case '+': printf("Сложение");
		break;
	case '-': printf("Вычитание");
		break;
	case '*': printf("Умножение");
		break;
	case '/': printf("Деление");
		break;
	default: printf("Неизвестная операция");
		break;
	}

	return 0;
}