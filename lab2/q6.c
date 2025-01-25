#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    for (int  i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",65 + j);
        }
        printf("\n");
    }
    return 0;
}