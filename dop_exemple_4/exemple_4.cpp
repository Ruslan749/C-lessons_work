#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");

    int hS, minS, secS, hF, minF, secF;
    scanf("%d-%d-%d", &hS, &minS, &secS);
    scanf("%d-%d-%d", &hF, &minF, &secF);

    // вычисляем время в секундах
    int h1, h2;
    h1 = hS * 3600 + minS * 60 + secS;
    h2 = hF * 3600 + minF * 60 + secF;

    // если конец разговора находится после начала следующего дня, добавляем 24 часа
    h2 = (h2 < h1) ? h2 + 24 * 3600 : h2;

    // расчет продолжительности разговора в секундах
    int durationInSeconds = h2 - h1;

    // вычисляем стоимость разговора в целых минутах и добавляем 0.07, если есть остаток
    double money = ceil(abs(durationInSeconds) / 60) * 0.07 + ((durationInSeconds % 60) > 0 ? 0.07 : 0.0);

    printf("%.2f", money);

}