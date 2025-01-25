#include <stdio.h>
#include <stdlib.h>

int closestNumber(int n, int m)
{
    int q = n / m;

    int n1 = m * q;

    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));

    if (abs(n - n1) < abs(n - n2))
    {
        return n1;
    }

    return n2;
}

int main(void)
{
    int n = 13, m = 4;
    printf("%d\n", closestNumber(n, m));

    return 0;
}