#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("*\n");
    for (int i = 2; i <= n - 1; i++)
    {
        printf("*");
        for (int j = 1; j < i - 1; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int k = 1; k <= n; k++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}