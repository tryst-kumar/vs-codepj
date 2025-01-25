#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int n = 12;
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