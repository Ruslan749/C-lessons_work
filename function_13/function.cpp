#include <iostream>
using namespace std;
double mySum(double x, double y);
double mySum(int a, int b, int c, int d);
int main() {
    double x, y;
    int a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    cout << mySum(x, y) << endl;
    cout << mySum(a, b, c, d) << endl;
    return 0;
}
double mySum(double x, double y) {
    return x + y;
}

double mySum(int a, int b, int c, int d) {
    double res = (double)(a * d + b * c) / (b * d);
    return res;
}