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

    // ��������� ����� � ��������
    int h1, h2;
    h1 = hS * 3600 + minS * 60 + secS;
    h2 = hF * 3600 + minF * 60 + secF;

    // ���� ����� ��������� ��������� ����� ������ ���������� ���, ��������� 24 ����
    h2 = (h2 < h1) ? h2 + 24 * 3600 : h2;

    // ������ ����������������� ��������� � ��������
    int durationInSeconds = h2 - h1;

    // ��������� ��������� ��������� � ����� ������� � ��������� 0.07, ���� ���� �������
    double money = ceil(abs(durationInSeconds) / 60) * 0.07 + ((durationInSeconds % 60) > 0 ? 0.07 : 0.0);

    printf("%.2f", money);

}