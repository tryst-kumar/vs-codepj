#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int comparitor(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

bool checkIsAP(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    qsort(arr, n, sizeof(int), comparitor);

    int d = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != d)
        {
            return false;
        }
    }

    return true;
}
int main(void)
{
    int arr[] = {60, 15, 5, 0, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    (checkIsAP(arr, n)) ? (printf("Yes")) : printf("No");
    return 0;
}