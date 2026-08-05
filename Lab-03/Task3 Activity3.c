#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], n, i, j, k;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter first matrix:\n");
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&b[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    printf("Result:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
