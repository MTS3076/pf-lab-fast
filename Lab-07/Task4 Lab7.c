#include<stdio.h>
int main(){
	char str[100],result[100];
	printf("Enter a Character String : ");
	scanf("%[^\n]",str);
	int i=0,j=0;
	while(str[i]!='\0') {
	 	  if(str[i]<'0' || str[i]>'9'){
	 	  	result[j++]=str[i];
	 	  }
		  i++;
	}
	result[j]='\0';
	printf("Your string without numeric characters : %s\n",result);
return 0;	
}





