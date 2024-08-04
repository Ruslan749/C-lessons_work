#include <iostream>
#include <math.h>
using namespace std;
void main() {
	int input = 2,res, x_1 = 3423, x_2 = 1500,late_arrival = 0;
	//scanf_s("%u", &input);

	switch (input)
	{
	case 1:
		if (x_2 % 3 == 1)
		{
			late_arrival = x_2 / 3;
		}
		else if (x_2 % 3 > 1)
		{
			late_arrival = x_2 / 3 + 1;
		}

		late_arrival *= 2;
		res = (x_1 / 0.5) + (20 * late_arrival);

		printf("%u", res);
		break;
	case 2:
		late_arrival = x_1 * 0.5;
		res = (late_arrival - x_2) / 20*3;

		printf("%u", res);
		break;
	case 3: 
	default:
		break;
	}

	
}