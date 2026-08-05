//Q9
#include<stdio.h>
#include<math.h>
int main(){
	int members;
	double totcost;
	printf("Enter the number of members in the group : ");
	scanf("%d",&members);
	totcost = ceil(members *250.50);
	printf("Minimum total cost for the group is : %.0f",totcost);
return 0;
}
