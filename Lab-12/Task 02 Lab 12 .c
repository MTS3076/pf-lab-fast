//25K-3076
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter size n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, 2 * n * sizeof(int));

    printf("Enter %d new elements:\n", n);
    for (i = n; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUpdated array:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}

