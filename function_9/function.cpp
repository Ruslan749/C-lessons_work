#include <iostream>
using namespace std;
void initArray(int* a, int M) {

    for (size_t i = 0; i < M; i++, a++)
    {
        *a = rand() % 19 - 9;
    }
}
void printArray(int* a, int M) {
    for (size_t i = 0; i < M; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int* findNeg (int* a, int M) {
    int *numFirstNeg = NULL;

    for (size_t i = 0; i < M; i++, a++)
    {
        
        if (*a < 0)
        {
            numFirstNeg = a;
            break;
        }
    }

    return numFirstNeg;
}

int* findPoz(int* a, int M) {
    int* numFindPos = NULL;
    int* ptr = a;
    ptr = a + M - 1;

    for (int i = M - 1; i >= 0; i--, ptr--)
    {
        if (*ptr > 0)
        {
            numFindPos = ptr;
            break;
        }
    }

    return numFindPos;
}

void swap(int* neg, int* pos) {
    int tmp = *neg;
    *neg = *pos;
    *pos = tmp;
}

int main() {
    int n;
    cin >> n;
    srand(n);
    const int M = 6;
    int a[M];

    initArray(a, M);
    printArray(a, M);

    int* firstNeg = findNeg(a, M);

    int* lastPoz = findPoz(a, M);

    if (firstNeg == NULL || lastPoz == NULL) {
        cout << "ERROR";
        return 0;
    }
    swap(firstNeg, lastPoz);
    printArray(a, M);
    return 0;
}