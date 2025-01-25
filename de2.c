#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main(void)
{
    printf("%d", sumOfDigits(12345));
    return 0;
}