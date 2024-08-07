#include <iostream>
#include <stdarg.h>
using namespace std;
double average (int a, ...) {
    double sum = 0;
    int num;
    va_list p;
    va_start(p, a);
    for (size_t i = 0; i < a; i++)
    {
        num = va_arg(p, int);
        sum += num;
    }

    va_end(p);
    return sum / a;
}
int main() {
    cout << average(3, 5, 7, 12) << " " << average(5, 1, 8, 3, 2, -5);
    return 0;
}