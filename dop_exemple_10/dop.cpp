#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	double km_ch, m_s;
	cin >> km_ch >> m_s;

	if (km_ch < 0 || m_s < 0) {
		printf("Ошибка");
		return 0;
	}

	km_ch = km_ch * 1000 / 3600;

	if (km_ch > m_s)
	{
		printf("Больше");
	}
	else if (km_ch == m_s)
	{
		printf("Равны");
	}else {
		printf("Меньше");
	}

	return 0;
}