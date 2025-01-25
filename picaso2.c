#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    if(isPrime(atoi(argv[1])))
    {
        printf("The number is prime");
    }
    else if(isPrime(atoi(argv[1])) == false)
    {
        printf("the nummber is not prime");
    }
}