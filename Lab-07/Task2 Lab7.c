#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements of the array : ");
	scanf("%d",&n);
	int i;
	int num[n];
	printf("Enter %d elements in the array :",n);
	for(i=0;i<n;i++){
	   scanf("%d",&num[i]);
    }
    printf("Reverse Order : ");
	for (i=n-1;i>=0;i--){
		printf("%d",num[i]);
	}	    
return 0;
}

