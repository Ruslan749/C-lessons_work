#include <iostream>
using namespace std;
int main() {
	int num;
	scanf_s("%u", &num);

	switch (num)
	{
	case 10: printf("������");
		break;
	case 11: printf("�����������");
		break;
	case 12: printf("����������");
		break;
	case 13: printf("����������");
		break;
	case 14: printf("������������");
		break;
	case 15: printf("����������");
		break;
	default: printf("�������� �����");
		break;
	}

	return 0;
}