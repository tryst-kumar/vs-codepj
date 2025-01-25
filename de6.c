#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2 || n ==3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int n = 11;
    if (isPrime(n))
    {
        printf("%s", "true");
    }
    else
    {
        printf("%s", "false");
    }

    return 0;
}