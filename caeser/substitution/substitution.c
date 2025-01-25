#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Enter a key with exactly 26 characters\n");
        return 2;
    }

    char *data;
    data = (char*)malloc(100 * sizeof(char));
    if (data == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("plaintext: ");
    fgets(data, 100, stdin);
    int k = strlen(data);

    for (int i = 0; i < k; i++)
    {
        if (isalpha(data[i])) {
            if (isupper(data[i])) {
                data[i] = toupper(argv[1][data[i] - 'A']);
            } else {
                data[i] = tolower(argv[1][data[i] - 'a']);
            }
        }
    }

    printf("ciphertext: %s\n", data);
    free(data); // Free allocated memory
    return 0;
}