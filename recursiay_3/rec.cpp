#include <iostream>
#include<cmath>
using namespace std;
int sumOfNumbers(int n) {
    if (n == 0) return 0;
    return (n % 10 + sumOfNumbers(n / 10));

}
int main() {
    int n;
    cin >> n;
    cout << sumOfNumbers(abs(n));
    return 0;
}