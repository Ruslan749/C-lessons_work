#include <iostream>
#include<iomanip>
#include<cmath>
#include <stdio.h>
using namespace std;
void main() {
    double const Pi = 4 * atan(1);
    double x,y;
    scanf_s("%lf", &x);

    y = pow(cos(x), 2) + pow(cos(x), 4) / 2;

    printf("%.3lf", y);

}