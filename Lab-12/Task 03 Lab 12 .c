//25K-3076
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j;
    char temp[1000];

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char **arr = (char **)malloc(n * sizeof(char *));

    for (i = 0; i < n; i++) {
        char buffer[1000];
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        arr[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(arr[i], buffer);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    for (i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

