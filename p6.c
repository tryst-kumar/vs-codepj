#include<stdio.h>
#define pi 3.14
int main()
{
    double radius = 0;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    printf("the perimeter of circle is %f inches\n",2*pi*radius);
    printf("The area of circle is %f square inches", pi*radius*radius);

    return 0;

}