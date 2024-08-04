#include <iostream>
#include<iomanip>
#include<cmath>
#include <stdio.h>
using namespace std;
void main() {
    double x, y,res;
    scanf_s("%lf%lf", &x,&y);

    res = sqrt(pow(x, 2) + pow(y, 2));

    printf("%.3lf", res);

}