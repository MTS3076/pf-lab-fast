//Q15
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter number 1 and number 2 : ");
	scanf("%d%d",&num1,&num2);
	 num1 = num1^num2;
	 num2 = num2^num1;
	 num1 = num1^num2;
	 printf("Num1 is :%d\nNum2 is :%d\n",num1,num2);
	return 0;
}
