#include <stdio.h>

int main() {
    int arr[10], num, count = 0, i;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter number to search: ");
    scanf("%d", &num);
    for(i = 0; i < 10; i++)
        if(arr[i] == num)
            count++;
    if(count > 0)
        printf("Number %d occurred %d times\n", num, count);
    else
        printf("Number not found\n");
    return 0;
}

