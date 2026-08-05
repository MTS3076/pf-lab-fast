//Q10
#include<stdio.h>
#include<math.h>
int main(){
	double A,P,r,t,n;
	printf("Enter the amount for investment(P) interest rate(r) time(t) no of times(n): ");
	scanf("%lf%lf%lf%lf",&P,&r,&t,&n);
	A=P*pow((1+(r/100)/n),(n*t));
	printf("The future value of investment of %.2f = %.2f",P,A);
return 0;
}
