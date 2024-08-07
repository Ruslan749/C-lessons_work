#include <iostream>
using namespace std;
#include <typeinfo>
template <typename T1, typename T2>
auto division(T1 num_1, T2 num_2) -> decltype(num_1 + num_2) {
    return num_1 / num_2;
}
int main() {
    int a, b;
    double x;
    float z;
    cin >> a >> b;
    cin >> x;
    cin >> z;
    cout << division(a, b) << " " << typeid(division(a, b)).name() << endl;
    cout << division(x, b) << " " << typeid(division(x, b)).name() << endl;
    cout << division(x, z) << " " << typeid(division(x, z)).name() << endl;
    cout << division(z, b) << " " << typeid(division(z, b)).name() << endl;
    return 0;
}