#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",65 + i);
        }
        printf("\n");
    }
    return 0;
}