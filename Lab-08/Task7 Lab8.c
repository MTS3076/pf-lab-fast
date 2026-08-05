#include<stdio.h>
int main(){
	int start,end,i,j,isPrime;
	printf("Enter the range : ");
	scanf("%d%d",&start,&end);
	
	printf("Prime numbers between %d to %d are:\n",start,end);
	for(i=start + 1;i<end;i++){
		isPrime=1;
		if(i<=1){
		isPrime=0;
	    }
		else{
		    for(j=2;j*j<=i;j++){
		    	if(i%j==0){
		    		isPrime=0;
		    		break;
				}
			}
		}
		if(isPrime)
		printf("%d\n",i);
	}
	return 0;
}

