#include<iostream>
using namespace std;
#include <iomanip>

void usred(double *x, double *y) {
    double res = (*x + *y) / 2;
    *x = res;
    *y = res;
}
int main() {
    double x, y;
    cin >> x >> y;
    usred(&x, &y);
    cout << fixed << setprecision(1) << x << " " << y;
    return 0;
}