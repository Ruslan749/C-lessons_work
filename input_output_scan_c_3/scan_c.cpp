#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    int i;
    scanf_s("%o", &i);
    printf("--------------------------------\n");
    printf("| ����������        |%-10d|\n", i);
    printf("| ������������      |%-10o|\n", i);
    printf("| ����������������� |%-10x|\n", i);
    printf("--------------------------------");
}