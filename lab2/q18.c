#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= (n+1)/2; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 1 + (i - 1)*2; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - (i - 1)*2; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}