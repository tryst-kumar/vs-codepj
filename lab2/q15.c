#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}