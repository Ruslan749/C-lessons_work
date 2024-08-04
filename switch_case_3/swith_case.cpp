#include <iostream>
using namespace std;
void main() {
	char a;
	scanf("%c", &a);

	switch (a) {
	case 'J':printf("январь");
		break;
	case 'F':printf("февраль");
		break;
	case 'D':printf("декабрь");
		break;
	default: printf("Ошибка");
		break;
	}