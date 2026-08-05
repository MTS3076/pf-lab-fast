#include<stdio.h>

int search(int arr[],int size,int num){
	int i;
	for(i=0;i<size;i++){
	  if (num==arr[i]){
    	return i;
      }	
}
 return -1;
}
int main(){
	int arr[10];
	int i,num,size,index;
	for(i=0;i<10;i++){
	printf("Enter element %d of the array : ",i+1);
	scanf("%d",&arr[i]);
    }
    printf("Enter the specific integer to be found : ");
    scanf("%d",&num);
    
    index=search(arr,10,num);
 
       
   
	if (index!=-1){
		printf("The number found at : %d\n",index);
	}
	else{
		printf("Number not found\n");
	}
return 0;
}
