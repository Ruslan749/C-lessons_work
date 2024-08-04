#include <stdio.h>
int isPrime(int value) {
    for (int i = 2; i < value; i++) {
        if (value % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;

    printf("n: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
