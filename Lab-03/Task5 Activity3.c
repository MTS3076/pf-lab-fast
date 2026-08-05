#include <stdio.h>

int main() {
    int a[3][3][3], i, j, k, same, x, y;
    printf("Enter 3x3x3 matrix set:\n");
    for(i=0;i<3;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)scanf("%d",&a[i][j][k]);
    for(x=0;x<3;x++){
        for(y=x+1;y<3;y++){
            same=1;
            for(i=0;i<3;i++)for(j=0;j<3;j++)if(a[x][i][j]!=a[y][i][j])same=0;
            if(same) printf("Layer %d and %d are identical\n",x+1,y+1);
            else printf("Layer %d and %d are different\n",x+1,y+1);
        }
    }
    return 0;
}
