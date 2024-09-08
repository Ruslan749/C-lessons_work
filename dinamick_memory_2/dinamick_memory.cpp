#include <iostream>

using namespace std;
int main() {
    int SIZE, start_random, * ptrInt = NULL;
    cin >> SIZE >> start_random;
    ptrInt = new int[SIZE];

    int* tempPtr = ptrInt;
    srand(start_random);
    for (size_t i = 0; i < SIZE; i++, tempPtr++)
    {
        *tempPtr = rand() % 23 - 7;
    }

    tempPtr = ptrInt;
    int numSum = 0,
        numMin = 0,
        numMax = 0;
    for (size_t i = 0; i < SIZE; i++, tempPtr++)
    {
        if (*tempPtr < numMin)
        {
            numMin = *tempPtr;
        }

        if (*tempPtr > numMax)
        {
            numMax = *tempPtr;
        }
        cout << *tempPtr << " ";
    }
    numSum = numMax + numMin;
    cout << "\n" << numSum;
    delete[] ptrInt;
    ptrInt = NULL;
    return 0;
}