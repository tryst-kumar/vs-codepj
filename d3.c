#include <stdio.h>

int oppositeFaceOfDice(int n)
{
    if (n == 1)
    {
        printf("6");
    }
    else if(n == 2)
    {
        printf("5");
    }
    else if(n == 3)
    {
        printf("4");
    }
    else if(n == 4)
    {
        printf("3");
    }
    else if(n == 5)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
}
int main(void)
{
    int n = 2;
    oppositeFaceOfDice(n);
    return 0;
}