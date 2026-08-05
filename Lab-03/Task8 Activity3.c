#include <stdio.h>

int main() {
    int marks, pass[10], fail[10];
    int pcount = 0, fcount = 0;
    float psum = 0, fsum = 0;
    printf("Enter marks (-1 to stop): ");
    while(1) {
        scanf("%d", &marks);
        if(marks == -1)
            break;
        if(marks >= 5 && marks <= 10 && pcount < 10) {
            pass[pcount++] = marks;
            psum += marks;
        } else if(marks >= 0 && marks < 5 && fcount < 10) {
            fail[fcount++] = marks;
            fsum += marks;
        }
    }
    printf("\nPassed Students Marks: ");
    int i;
    for(i = 0; i < pcount; i++)
        printf("%d ", pass[i]);
    if(pcount > 0)
        printf("\nAverage of passed: %.2f", psum / pcount);
    else
        printf("\nNo passed students.");

    printf("\nFailed Students Marks: ");
    for(i = 0; i < fcount; i++)
        printf("%d ", fail[i]);
    if(fcount > 0)
        printf("\nAverage of failed: %.2f", fsum / fcount);
    else
        printf("\nNo failed students.");
    return 0;
}

