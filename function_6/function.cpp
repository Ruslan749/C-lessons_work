#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;

double circle(double r, double* length) {
    const double PI = 4 * atan(1);
    *length = 2 * PI * r;
    return  PI * r * r;
}
int main() {
    double r, square, length;
    cin >> r;
    square = circle(r, &length);
    cout << fixed << setprecision(2) << square << " " << length;
    return 0;
}