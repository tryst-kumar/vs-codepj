#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);

    char names[n][100], temp[100];

    printf("Enter names:\n");
    for(int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sorting the names using bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
