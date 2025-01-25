#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Enter the exp and number");
        return 1;
    }
    int exp = atoi(argv[1]);
    int n = atoi(argv[2]);
    int temp = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        k = power(i + 1, exp);
        temp = temp + k;
    }
    printf("Sum of squares of %i natural numbers is %d.", n, temp);
}

int power(int base, int exp)
{
    int result = base;
    for (int i = 0; i < exp - 1; i++)
    {
        result *= base;
    }
    return result;
}