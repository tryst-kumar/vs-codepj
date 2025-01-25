#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 2; i < n; i++)
    {
        printf("*");
        for (int j = 1; j < n-1; j++)
        {
            printf("  ");
        }
        printf(" *");
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("* ");
    }
    return 0;
}