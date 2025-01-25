#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if (argc != 4) 
    {
        printf("Usage: %s candidate1 candidate2 candidate3\n", argv[0]);
        return 1;
    }

    int k;
    printf("No of voters: ");
    scanf("%i", &k);
    char data[k][20]; // Assuming each string has a maximum length of 19 characters

    for (int i = 0; i < k; i++) 
    {
        printf("Vote: ");
        scanf("%s", data[i]);
        if (strcmp(data[i], argv[1]) != 0 && strcmp(data[i], argv[2]) != 0 && strcmp(data[i], argv[3]) != 0) 
        {
            printf("Invalid Vote!\n");
        }
    }

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < k; i++) {
        if (strcmp(data[i], argv[1]) == 0) 
        {
            c1++;
        } else if (strcmp(data[i], argv[2]) == 0) 
        {
            c2++;
        } else if (strcmp(data[i], argv[3]) == 0) 
        {
            c3++;
        }
    }



    if (c1 > c2 && c1 > c3)
    {
        printf("%s ", argv[1]);
    }
    else if (c2 > c1 && c2 > c3)
    {
        printf("%s ", argv[2]);
    }
    else if (c3 > c1 && c3 > c2)
    {
        printf("%s ", argv[3]);
    }
    else if (c1 == c2)
    {
        printf("%s\n%s ", argv[1], argv[2]);
    }
    else if (c1 == c2 && c1 == c3)
    {
        printf("%s\n%s\n%s", argv[1], argv[2], argv[3]);
    }

    return 0;
}