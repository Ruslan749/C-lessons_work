#include <iostream>
using namespace std;
int main() {
	char ch;
	scanf_s("%c", &ch);


	switch (ch)
	{
	case '+': printf("��������");
		break;
	case '-': printf("���������");
		break;
	case '*': printf("���������");
		break;
	case '/': printf("�������");
		break;
	default: printf("����������� ��������");
		break;
	}

	return 0;
}