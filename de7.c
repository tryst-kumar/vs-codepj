#include <stdio.h>
#include <stdbool.h>

bool isPower(int x, long int y)
{
    if (x == 1)
    {
        return (y == 1);
    }

    long int pow = 1;
    while (pow < y)
    {
        pow *= x;
    }
    return (pow == y);
}

int main(void)
{
    if (isPower(8, 78))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}