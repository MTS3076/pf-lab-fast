#include<stdio.h>
int main(){
	int arr1[5],arr2[5],arr3[10];
	int i=0;
	printf("Enter the elements for 1st Array : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements for 2nd Array : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++){
		arr3[i]=arr1[i];
	}
	for(i=0;i<10;i++){
		arr3[i+5]=arr2[i];
	}
	printf("The merged array : ");
	for(i=0;i<10;i++){
		printf("%d",arr3[i]);
    }
	return 0;
}
