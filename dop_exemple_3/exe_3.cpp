#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
    int distance, min, sec;
    scanf_s("%d %d:%d", &distance, &min, &sec);

    double secToMin = (double) min * 60;
    double convertDistance = (double)distance / 1000;

    double time = (secToMin + sec) / 3600;
    double speed = convertDistance / time;
    printf("%.2f",speed);

}