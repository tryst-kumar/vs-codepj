#include <stdio.h>
#include <stdbool.h>

bool isValid(double a, double b, double c)
{
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    if (isValid(2, 5, 7))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}