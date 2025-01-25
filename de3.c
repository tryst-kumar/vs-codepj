#include <stdio.h>
#include <string.h>

int sumOfDigits(char *s)
{
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int digit = s[i] - '0';

        sum = sum + digit;
    }
    return sum;
}

int main(void)
{
    char s[] = "123456789234661223566";

    printf("%d", sumOfDigits(s));
    return 0;
}