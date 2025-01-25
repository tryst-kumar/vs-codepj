#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum += last;
        n /= 10;
    }    
    return sum;
}

int main(void)
{
    int n = 12345;
    printf("%d", sumOfDigits(n));
    return 0;
}