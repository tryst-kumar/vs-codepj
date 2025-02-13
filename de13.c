#include <stdio.h>
#include <stdbool.h>

bool isPerfect(long long int n)
{
    long long int sum = 1;

    for (long long int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i*i != n)
            {
                sum = sum + i + n/i;
            }
            else
            {
                sum = sum + i;
            }
        }
    }
    if (sum == n && n != 1)
    {
        return true;
    }

    return false;
}

int main()
{
    printf("Below are all perfect numbers till 10000\n");
    for (int n = 2; n < 10000; n++)
    {
        if (isPerfect(n))
        {
            printf("%d is perfect number\n", n);
        }
    }
    return 0;
}