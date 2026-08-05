#include<stdio.h>
int main(){
	int N;
	printf("Enter the number for elements in the array : ");
	scanf("%d",&N);
	int i,j;
	int arr[N];
	for(i=0;i<N;i++){
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	int found=0;
	printf("Numbers occuring more than once : ");
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if (arr[i]==arr[j]){
			 printf("%d",arr[i]);
			 found = 1;
			 break;
		    }
		}
	}
	if (!found){
	printf("None");
    }
	return 0;
}





