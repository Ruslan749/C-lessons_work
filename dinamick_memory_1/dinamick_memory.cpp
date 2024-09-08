#include <iostream>

using namespace std;
int main() {
    int SIZE, start_random,*ptrInt;
    cin >> SIZE >> start_random;
    ptrInt = (int*)malloc(SIZE * sizeof(int));

    int* tempPtr = ptrInt;
    srand(start_random);
    for (size_t i = 0; i < SIZE; i++,tempPtr++)
    {
        *tempPtr = rand() % 21;
    }

    tempPtr = ptrInt;
    int numSum = 0;
    for (size_t i = 0; i < SIZE; i++, tempPtr++)
    {
        numSum += *tempPtr;
        cout << *tempPtr << " ";
    }
    cout <<"\n" << numSum;
    free(ptrInt);
    return 0;
}