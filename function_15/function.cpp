#include <iostream>
using namespace std;

template<typename T1, typename T2>
void getArray(T1* arr, T2 num) {
    for (size_t i = 0; i < num; i++, arr++)
    {
        cin >> *arr;
    }
}

template<typename T1, typename T2>
double average(T1* arr, T2 num) {
    double tmp = 0;
    for (size_t i = 0; i < num; i++, arr++)
    {
        tmp += *arr;
    }
    return tmp / num;
}
int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    short c[K];
    getArray(a, N);
    getArray(b, M);
    getArray(c, K);
    cout << average(a, N) << endl;
    cout << average(b, M) << endl;
    cout << average(c, K) << endl;
    return 0;
}