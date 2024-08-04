#include <iostream>
using namespace std;
void main() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("Working day");
		break;
	case 6:printf("Saturday");
		break;
	case 7:printf("Sunday");
		break;
	default: printf("Error");
		break;
	}