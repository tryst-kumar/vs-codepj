#include <stdio.h>
#include <stdbool.h>
#include "lib.h"

int comp(int *array)
{
    int mAx = array[0];
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i <length; i++)
    {
        if (mAx < array[i])
        {
            mAx = array[i];
        }
    }
    return mAx;
}

bool isPrime(int number)
{
    bool flag = true;
    for(int i = 2; i < number/2; i++)
    {
        if(number / i == 0)
        {
            return false;
        }
        return true;
    }
}