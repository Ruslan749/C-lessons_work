#include <iostream>
using namespace std;
void initArray(int* a, int n) {
    
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 11 - 5;
    }
}

void printArray(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
 void convertArray(int* &a, int &n) {
    int kol = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            kol++;
        }
    }

    int* b = new int[kol];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            b[j] = a[i];
            j++;
        }
    }

    delete[] a;
    a = b;
    n = kol;

}
int main() {
    int n = 10, beg = 67;
    //cin >> n >> beg;
    srand(beg);
    int* a = NULL;
    a = new int[n];
    initArray(a, n);
    printArray(a, n);
    convertArray(a, n);
    printArray(a, n);
    delete[] a;
     a = NULL;
    return 0;
}