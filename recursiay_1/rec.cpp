#include <iostream>
using namespace std;
//put your code here
void printNumber(int num) {
    if (num == 0) return;
    printNumber(num / 10);
    cout << num % 10 << " ";   
}
int main() {
    int k;
    cin >> k;
    printNumber(k);
    return 0;
}