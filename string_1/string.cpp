#include <iostream>
using namespace std;
#include <string.h>
//функци€ вставл€ет символ c в строку str на место ptr
void insert(char* str, char c, char* ptr) {
	char* q = str + strlen(str); // на последний символ С\0Т
	while (q >= ptr) {//пока не сдвинем все символы после ptr (и его тоже)
		*(q + 1) = *q; //сдвиг символа вправо
		q--;//подвигаем указатель влево
	}
	*ptr = c; //вставка символа
}
int main() {
	const int MAXLEN = 100;
	char mystring[MAXLEN];
	char sim, * ptr;
	fgets(mystring, MAXLEN, stdin); //ввод строки с пробелами
	sim = ';';
	ptr = mystring; //указатель - на начало строки
	while (*ptr != '\0') { //пока не достигнут конец строки
		if (*ptr == sim) {
			insert(mystring, sim, ++ptr); //вставл€ем sim в след. позицию
		}
		ptr++; //переход к следующему символу
	}
	puts(mystring);
	return 0;
}