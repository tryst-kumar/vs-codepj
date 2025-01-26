#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = n - i; j > 0; j -= 2)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2)
    {
        for (int j = n - i; j > 0; j -= 2)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}