//Q8
#include<stdio.h>
#include<math.h>
int main(){
	double intensity,refvalue,M;
	printf("Enter the Intensity and Standard Reference Value: ");
	scanf("%lf %lf",&intensity,&refvalue);
	M=log10(intensity/refvalue);
	printf("The magnitude of the earth quake is : %.2lf",M);
	return 0;
}
