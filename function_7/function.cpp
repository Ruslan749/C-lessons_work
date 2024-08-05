#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int calcNum (int num, int *numPercent) {

    if (num == 0) {
        *numPercent = 100;
        return 1;
    }
            
    int resPercent = 0,
        resLength = 0,
        numRes = num;

    while (numRes != 0 )
    {
        resLength++;
        int corrent = numRes % 10;

        if (corrent % 2 == 0)
        {
            resPercent++;
        }

        numRes /= 10;
    }

    double res = (double) resPercent / (double) resLength * 100;
    *numPercent = res;

    return resLength;
}
int main() {
    int num;
        
    int numLenght = 0,
           numPercent = 0;

    cin >> num;

    numLenght = calcNum(num,&numPercent);
    cout << fixed << setprecision(0) << numLenght << " " << numPercent << "%";
    
    return 0;
}