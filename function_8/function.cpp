#include <iostream>
using namespace std;
void initArray(int *a,int M) {
    
    for (size_t i = 0; i < M; i++,a++)
    {
        *a = rand() % 16 - 5;
    }
}
void printArray(int *a, int M) {
    for (size_t i = 0; i < M; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int sumArray(int *a, int M) {
    int numSum = 0;

    for (size_t i = 0; i < M; i++,a++)
    {
        numSum += *a;
    }

    return numSum;
}

int main() {
    int n;
    cin >> n;
    srand(n);
    const int M = 10;
    int a[M];

    initArray(a, M);
    printArray(a, M);
    cout << sumArray(a, M);
    return 0;
}