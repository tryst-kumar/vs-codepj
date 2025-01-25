#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc > 2 || atoi(argv[1]) <= 0 || atoi(argv[1]) >= 26)
    {
        printf("Usage: ./caeser key\n");
        return 1;
    }
    int k = atoi(argv[1]);
    char *data;
    data = (char*)malloc(100 * sizeof(char)); // Allocate more memory to avoid buffer overflow
    if (data == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("plaintext: ");
    fgets(data, 100, stdin); // Limit input to avoid buffer overflow
    for (int i = 0; i < strlen(data); i++)
    {
        if (isalpha(data[i])) {
            char offset = isupper(data[i]) ? 'A' : 'a';
            data[i] = (char)(((data[i] - offset + k) % 26) + offset);
        }
    }
    printf("ciphertext: %s\n", data);
    free(data); // Free allocated memory
    return 0;
}