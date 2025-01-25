#include <stdio.h>

float sumOfGP(float a, float r, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}
int main(void)
{
    int a = 1;
    float r = 0.5;
    int n = 10;

    printf("%f\n",sumOfGP(a, r, n));
    return 0;
}