#include <iostream>
using namespace std;
//put your code here
int order(int a, int b) { 
    if (a == b) {
        cout << a << " ";
        return a;
    }
    if (a < b) {
        order(a,b -1); 
        cout << b << " ";
    }
    if (a > b) {
        cout << a << " ";
        order(a - 1, b);
        
    }
    
}
int main() {
    int a, b;
    cin >> a >> b;
    order(a, b);
    return 0;
}