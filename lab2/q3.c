#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("Enter the  value of n: ");
    scanf("%d",&n);

    for (int  i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}