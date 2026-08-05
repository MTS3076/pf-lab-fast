//Q7
#include<stdio.h>
int main(){
	int amt,c1=0,c2=0,c3=0,c4=0;
	printf("Enter the amount");
	scanf("%d", &amt);
	while(amt>=25){
	 c4++;
	 amt-=25;}
	while(amt>=10){
	 c3++;
	 amt-=10;}
	while(amt>=5){
	 c2++;
	 amt-=5;}
	while(amt>=1){
	 c1++;
	 amt-=1;}
	printf("c4(25cents)=%d\nc3(10cents)=%d\nc2(5cents)=%d\nc1(1cent)=%d\n",c4,c3,c2,c1);
return 0;	
}
