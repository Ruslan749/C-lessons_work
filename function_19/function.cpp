#include <iostream>
using namespace std;
template <typename T1>
void myswap(T1 &x, T1 &y) {
    T1 temp = x;
    x = y;
    y = temp
}
int main() {
    int k, m;
    double x, y;
    char c, d;
    cin >> k >> m >> x >> y >> c >> d;
    myswap(k, m);
    cout << "k= " << k << " m= " << m << endl;
    myswap(x, y);
    cout << "x= " << x << " y= " << y << endl;
    myswap(c, d);
    cout << "c= " << c << " d= " << d << endl;
    return 0;
}