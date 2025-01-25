#include <stdio.h>

int oppositeFaceOfDice(int n)
{
    int ans = 7 - n;
    printf("%d",ans);
    return 0;
}

int main(void)
{
    int p = 13;
    if(p > 6)
    {
        printf("Error!!");
        return -1;
    }
    oppositeFaceOfDice(p);
    return 0;
}
