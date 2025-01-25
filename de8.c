#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPower(int x, long int y)
{
    float res1 = log(y)/ log(x);

    return res1 == floor(res1);
}

int main(void)
{
    if (isPower(3, 81))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}