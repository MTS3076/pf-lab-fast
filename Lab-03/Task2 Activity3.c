#include <stdio.h>

int main() {
    int a[5][5], n, m, i, j, flag=1;
    printf("Enter rows and cols (max 5): ");
    scanf("%d %d",&n,&m);
    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    if(n==m) printf("Square Matrix\n"); else printf("Rectangular Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(a[i][j]!=0)flag=0;
    if(flag) printf("Zero Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(i!=j && a[i][j]!=0)flag=0;
    if(flag) printf("Diagonal Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if((i==j && a[i][j]!=1)||(i!=j && a[i][j]!=0))flag=0;
    if(flag) printf("Identity Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(i>j && a[i][j]!=0)flag=0;
    if(flag) printf("Upper Triangular Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(i<j && a[i][j]!=0)flag=0;
    if(flag) printf("Lower Triangular Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(a[i][j]!=a[j][i])flag=0;
    if(flag) printf("Symmetric Matrix\n");
    flag=1;
    for(i=0;i<n;i++)for(j=0;j<m;j++)if(a[i][j]!=-a[j][i])flag=0;
    if(flag) printf("Skew-Symmetric Matrix\n");
    return 0;
}
