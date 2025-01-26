#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Upper part of the pattern
    for (int i = 0; i <= n / 2; i += 2)
    {
        for (int j = 0; j < i; j += 2)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j += 2)
        {
            printf(" ");
        }
        printf("\n");
    }

    // Middle part of the pattern
    for (int k = 1; k < n - 1; k += 2)
    {
        printf(" ");
    }
    printf("*");
    for (int k = 1; k < n - 1; k += 2)
    {
        printf(" ");
    }
    printf("\n");

    // Lower part of the pattern
    for (int i = n / 2; i >= 0; i -= 2)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
