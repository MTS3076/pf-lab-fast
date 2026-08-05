#include<stdio.h>
int main(){
	int i,j,rows,columns;
    printf("Enter the number of rows and columns for the 2D array : ");
    scanf("%d %d",&rows,&columns);
    int arr[i][j],transpose[i][j];
    
    printf("Enter the values for a 2D array :\n");
    for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
             scanf("%d",&arr[i][j]);	
		}
	}
	for(i=0;i<rows;i++){
    	for(j=0;j<columns;j++){
    		transpose[j][i]=arr[i][j];
    	}
    }
    printf("Transpose of a 2D array :\n");
    for(i=0;i<columns;i++){
    	for(j=0;j<rows;j++){
    		printf("%d ",transpose[i][j]);
    	}
    	printf("\n");
    }
	return 0;	    
}
