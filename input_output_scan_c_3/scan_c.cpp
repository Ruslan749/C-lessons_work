#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    int i;
    scanf_s("%o", &i);
    printf("--------------------------------\n");
    printf("| десятичная        |%-10d|\n", i);
    printf("| восьмеричная      |%-10o|\n", i);
    printf("| шестнадцатеричная |%-10x|\n", i);
    printf("--------------------------------");
}