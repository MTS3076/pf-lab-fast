#include<stdio.h>
int main(){
	char str[100];
	int count=0,i=0;
	printf("Enter a string : ");
	scanf("%[^\n]",str);
	
	while(str[i] !='\0'){
		if(str[i]==' '){
			count++;
		}
		i++;
	}
printf("The total number of white spaces are : %d",count);
return 0;
}
