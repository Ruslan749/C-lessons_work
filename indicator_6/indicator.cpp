#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
   const char* names[] = {"Анна","Андрей","Степан","Мария","Сергей" };
   const char** man_names[] = { names + 1, names + 2, names + 4 };
   const char** woman_names[] = { names,names + 3 };
   
   for (size_t i = 0; i < 3; i++)
   {
       cout << *man_names[i] << " ";
   }
   cout << endl;
   for (size_t i = 0; i < 2; i++)
   {
       cout << *woman_names[i] << " ";
   }
   cout << endl;
    return 0;
}