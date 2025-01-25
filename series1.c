#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
    if (argc > 2)
    {
        printf("only one number");
        return 1;
    }
    int n = atoi(argv[1]);

    int sum = n * (n + 1) / 2;
    printf("Sum of %i integers is %i", n, sum);

    return 0;
}