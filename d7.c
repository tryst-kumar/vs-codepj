#include <stdio.h>
#include <math.h>

float sumOfGP(float a, float r, int n)
{
    return (a * (1 - pow(r, n))) / (1 - r);
}

int main(void)
{
    float a = 2;
    float r = 2;
    int n = 15;

    printf("%f\n",sumOfGP(a, r, n));
    return 0;
}