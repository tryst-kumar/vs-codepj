#include <stdio.h>

float simpleInterest(float p, float t, float r)
{
    float ans = (p * t * r) / 100;
    return ans;
}

int main(void)
{
    float p = 1, r = 1, t = 1;
    printf("%f", simpleInterest(p, r, t));
    return 0;
}