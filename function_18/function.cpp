#include <iostream>
#include <stdarg.h>
using namespace std;
//put your code here
double mymax(int a, char sim, ...);

int main() {
    cout << mymax(5, 'd', 3, 6, 7, -2, 1) << endl;
    cout << mymax(3, 'f', -2.3, 3.14, 0.72) << endl;
    cout << mymax(6, 'f', -13., 0.23, 6.6, 4.56, 0.0, -1.1);

    return 0;
}

double mymax(int a, char sim, ...) { 

    va_list p;
    va_start(p, sim);
    
    if (sim == 'd')
    {
        int max = va_arg(p, int);
        for (int i = 1; i < a; i++) { //перебор остальных n-1 аргументов
            int k = va_arg(p, int); //берем следующий целый аргумент
            if (k > max) max = k; //сравниваем его с текущим минимумом
        }

        va_end(p); //сбрасываем указатель
        return max; //возвращаем максимум
    }
    else
    {
        double max = va_arg(p, double);
        for (int i = 1; i < a; i++) { //перебор остальных n-1 аргументов
            double k = va_arg(p, double); //берем следующий целый аргумент
            if (k > max) max = k; //сравниваем его с текущим минимумом
        }

        va_end(p); //сбрасываем указатель
        return max; //возвращаем максимум
    }

}
