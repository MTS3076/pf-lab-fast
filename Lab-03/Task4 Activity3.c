#include <stdio.h>

int main() {
    int a[3][3][3], i, j, k, sum, total=0;
    printf("Enter 3x3x3 array:\n");
    for(i=0;i<3;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)scanf("%d",&a[i][j][k]);
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++)for(k=0;k<3;k++)sum+=a[i][j][k];
        printf("Layer %d total=%d\n",i+1,sum);
        total+=sum;
    }
    printf("Overall total=%d\n",total);
    return 0;
}

