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
        for (int i = 1; i < a; i++) { //������� ��������� n-1 ����������
            int k = va_arg(p, int); //����� ��������� ����� ��������
            if (k > max) max = k; //���������� ��� � ������� ���������
        }

        va_end(p); //���������� ���������
        return max; //���������� ��������
    }
    else
    {
        double max = va_arg(p, double);
        for (int i = 1; i < a; i++) { //������� ��������� n-1 ����������
            double k = va_arg(p, double); //����� ��������� ����� ��������
            if (k > max) max = k; //���������� ��� � ������� ���������
        }

        va_end(p); //���������� ���������
        return max; //���������� ��������
    }

}
