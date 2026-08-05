//Q5
#include<stdio.h>
int main(){
	int numofpart,factorial=0,value=1;
	printf("Enter the number of participants");
	scanf("%d", &numofpart);
	while(numofpart > 0){
	  value = value *  numofpart;
	  numofpart--;}
   printf("Total number of ways to arrange the participants is : %d", value);
  return 0;	  	 
}
