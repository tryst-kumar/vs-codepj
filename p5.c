#include<stdio.h>

int main()
{
    int height = 0, width = 0;
    printf("Enter the height of  rectangle in inches ");
    scanf("%d", &height);
    printf("Enter the width of rectangle in inches ");
    scanf("%d", &width);
    printf("Perimeter of the rectangle = %d inches\n", 2*(height + width));
    printf("Area of the rectangle = %d square inches", height*width);

    return 0;
}