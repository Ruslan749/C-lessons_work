#include <iostream>
using namespace std;
#include <string.h>
//������� ��������� ������ c � ������ str �� ����� ptr
void insert(char* str, char c, char* ptr) {
	char* q = str + strlen(str); // �� ��������� ������ �\0�
	while (q >= ptr) {//���� �� ������� ��� ������� ����� ptr (� ��� ����)
		*(q + 1) = *q; //����� ������� ������
		q--;//��������� ��������� �����
	}
	*ptr = c; //������� �������
}
int main() {
	const int MAXLEN = 100;
	char mystring[MAXLEN];
	char sim, * ptr;
	fgets(mystring, MAXLEN, stdin); //���� ������ � ���������
	sim = ';';
	ptr = mystring; //��������� - �� ������ ������
	while (*ptr != '\0') { //���� �� ��������� ����� ������
		if (*ptr == sim) {
			insert(mystring, sim, ++ptr); //��������� sim � ����. �������
		}
		ptr++; //������� � ���������� �������
	}
	puts(mystring);
	return 0;
}