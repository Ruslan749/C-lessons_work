#include<iostream>
using namespace std;
//put your code here

bool simple(int x) {
    if (x == 0 || x == 1 || x < 0) { 
        return false; 
    }

    for (size_t i = 2; i < x; i++)
    {
        if (x % i == 0) {
            return false;
        }  
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "rus");
    int x = 0;
    cin >> x;
    if (simple(x)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}