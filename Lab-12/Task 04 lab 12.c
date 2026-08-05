//25K-3076
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, extra, i;
    float total = 0;

    printf("Enter number of days: ");
    scanf("%d", &n);

    float *sales = (float *)malloc(n * sizeof(float));

    printf("Enter sales for %d days:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &sales[i]);
        total += sales[i];
    }

    printf("Total sales = %.2f\n", total);

    printf("\nEnter extra number of days: ");
    scanf("%d", &extra);

    sales = (float *)realloc(sales, (n + extra) * sizeof(float));

    total = 0;

    printf("Enter sales for extra %d days:\n", extra);
    for (i = n; i < n + extra; i++) {
        scanf("%f", &sales[i]);
    }

    for (i = 0; i < n + extra; i++) {
        total += sales[i];
    }

    printf("\nNew total sales = %.2f\n", total);

    free(sales);
    return 0;
}

