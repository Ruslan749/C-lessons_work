#include <iostream>
#include<iomanip>
#include<cmath>
#include <stdio.h>
using namespace std;
void main() {
    double const Pi = 4 * atan(1);
    double r1,r2,r3, l1,l2,l3;
    scanf_s("%lf%lf%lf", &r1, &r2,&r3);

    l1 = 2 * Pi * r1;
    l2 = 2 * Pi * r2;
    l3 = 2 * Pi * r3;
    printf("%7.2lf\n%7.2lf\n%7.2lf", l1,l2,l3);

}