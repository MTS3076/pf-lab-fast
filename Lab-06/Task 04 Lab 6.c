//Q4
#include<stdio.h>
int main(){
	int num,digit,cube,sum=0,original;
	printf("Enter a number");
	scanf("%d", &num);
	original = num;
	while (num > 0){
	 digit = num % 10;
	 cube = digit * digit * digit;
	 sum = sum + cube;
	 num = num / 10;}
	if (sum == original){
	 printf("%d is an Armstrong number",original);}
	else{
	 printf("%d is not an armstrong number",original);}
	return 0;
}
