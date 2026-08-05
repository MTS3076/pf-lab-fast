#include <stdio.h>

int main() {
    int a[3][3], i, j;
    float det = 0;
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
        det += (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
    printf("Determinant: %.2f\n",det);
    printf("Transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
    printf("Cofactor:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]));
        printf("\n");
    }
    printf("Adjoint:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",(a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3]-a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]));
        printf("\n");
    }
    if(det!=0){
        printf("Inverse:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
                printf("%.2f ",((a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]))/det);
            printf("\n");
        }
    } else printf("Inverse not possible.\n");
    return 0;
}

