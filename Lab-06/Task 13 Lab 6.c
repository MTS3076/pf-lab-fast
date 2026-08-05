//Q13
#include<stdio.h>
int main(){
	int num,count,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i>0 && i<=num;i=i<<1){
	 if (num&i)
	 count++;}
	printf("The number of 1s are : %d",count);
	return 0;
}

