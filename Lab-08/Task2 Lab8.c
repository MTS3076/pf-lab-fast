#include<stdio.h>
int main(){
	int i,j,N;
	printf("Enter the number N for the multiplication table : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		for(j=1;j<=10;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
return 0;
}
