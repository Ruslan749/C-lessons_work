#include <iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
	const char key = '$';
	char in;
    cin >> in;
	char resultKey = in ^ key;
	int mask = 1 << 2;
 
   if (mask & resultKey) {
        cout << "Наступаем";
    }
    else {
        cout << "Ожидаем";
    }
}