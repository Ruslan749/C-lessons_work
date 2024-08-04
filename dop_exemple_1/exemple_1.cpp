#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    int rub,cop,sumRub,sumCop;
    scanf_s("%u%u", &rub,&cop)
        ;
    sumCop = cop % 100;
    sumRub = rub + (cop / 100);

    printf("%u ð. %u ê.", sumRub, sumCop);

}