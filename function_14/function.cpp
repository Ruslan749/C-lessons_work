#include <iostream>
using namespace std;

template <typename T, typename T2>
void getArray(T* arr, T2 dl) { 
    for (size_t i = 0; i < dl; i++,arr++)
    {
        cin >> *arr;
    } 
}

template <typename T, typename T2>
void printArray(T* arr, T2 dl) {
    for (size_t i = 0; i < dl; i++, arr++)
    {
        cout << *arr << " ";
    }
    cout << endl;
}
template <typename T, typename T2>
 void transform(T mas[], T2 X) {
    for (int i = 0; i < X / 2; i++) {
        T tmp = mas[i];
        mas[i] = mas[X - 1 - i];
        mas[X - 1 - i] = tmp;
    }
}

int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    char c[K];
    getArray(a, N);
    getArray(b, M);
    getArray(c, K);
    transform(a, N);
    transform(b, M);
    transform(c, K);
    printArray(a, N);
    printArray(b, M);
    printArray(c, K);

    return 0;
}