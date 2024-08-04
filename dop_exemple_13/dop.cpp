#include <iostream>
using namespace std;
int main() {
	int num;
	scanf_s("%u", &num);

	switch (num)
	{
	case 10: printf("десять");
		break;
	case 11: printf("одиннадцать");
		break;
	case 12: printf("двенадцать");
		break;
	case 13: printf("тринадцать");
		break;
	case 14: printf("четырнадцать");
		break;
	case 15: printf("пятнадцать");
		break;
	default: printf("Неверное число");
		break;
	}

	return 0;
}