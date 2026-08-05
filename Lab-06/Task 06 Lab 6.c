//Q6
#include<stdio.h>
int main(){
	int num,newnum=0,digit;
	printf("Enter the number");
	scanf("%d", &num);
	while(num >0){
	 digit= num%10;
	 newnum = (newnum * 10) + digit;
	 num= num/10;}
   printf("%d",newnum);
return 0;
}
