//Q11
#include<stdio.h>
#include<math.h>
int main(){
	double a,H,L;
	printf("Enter the height(h) of the building and angle of elevation(a): ");
	scanf("%lf%lf",&H,&a);
	a= a * M_PI/180;
	L = H / tan(a);
	printf("The length of the shadow is : %.2f",L);
return 0;
}
