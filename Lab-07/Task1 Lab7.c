#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements of the array : ");
	scanf("%d",&n);
	int i,sum=0;
	int num[n];
	for(i=0;i<n;i++){
	   printf("Enter element %d of the array :",i+1);
	   scanf("%d",&num[i]);
	   sum+=num[i];
    }
	printf("The sum of all elements is :%d",sum);
return 0;
}
