#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float findArea(float r)
{
    return (PI * r * r);
}

int main(void)
{
    float r = 5, area;
    area = findArea(r);
    printf("%.6f\n", area);
    return 0;
}

