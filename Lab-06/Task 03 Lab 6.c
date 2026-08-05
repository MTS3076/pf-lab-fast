//Q3
#include<stdio.h>
int main(){
	int bankbalance=50000,withdrawamt;
	while( bankbalance >0){
	  printf("Enter the withdrawl amount");
	  scanf("%d", &withdrawamt);
	  if (withdrawamt <= bankbalance)
	   bankbalance = bankbalance - withdrawamt;
	   printf("Your bank balance is : %d\n",bankbalance);}
	return 0 ;
}
