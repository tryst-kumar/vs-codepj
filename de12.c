#include <stdio.h>
#include <math.h>

int countPairs(int n)
{
    int count = 0;

    for (int i = 1; i <= cbrt(n); i++)
    {
        /*Store cube of a number*/
        int cb = i*i*i;

        /*Subtract the cube from given N*/
        int diff = n - cb;

        /*Check if the difference is also a perfect cube*/
        int cbrtDiff = cbrt(diff);

        if(cbrtDiff*cbrtDiff*cbrtDiff == diff)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
        int n = 9;
        printf("%d\n", countPairs(n));
        return 0;
}
