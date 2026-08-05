#include<stdio.h>
int main(){
	int mat1[2][2],mat2[2][2],result[2][2];
	int i,j;
	printf("Enter the values for matrix 1 : ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	        scanf("%d",&mat1[i][j]);
	    }
    }
    printf("Enter the values for matrix 2 : ");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	        scanf("%d",&mat2[i][j]);
	    }
    }
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			result[i][j]=mat1[i][j] + mat2[i][j];
	    }
    }
    printf("The sum of matrix 1 and matrix 2 is :\n");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
   	        printf("%d ",result[i][j]);
   	    }
   	    printf("\n");
   	}
    return 0;
}
