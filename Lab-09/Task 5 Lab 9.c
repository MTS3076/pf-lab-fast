#include<stdio.h>
void printData(void *ptr, char type)
{
	int i;
    switch(type)
	{
        case 'i':
        	for(i=0; i<5; i++)
        	{
        		printf("Product ID = %d\n", *((int *)ptr + i));
			}
            break;  
        case 'f':
            for(i=0; i<5; i++)
        	{
        		printf("Price = %.2f\n", *((float *)ptr + i));
			}
            break;
        case 'c':
            for(i=0; i<5; i++)
        	{
        		printf("Category Code = %c\n", *((char *)ptr + i));
			}
            break;
    }
}

int main()
{
	int productID[5] = {1,2,3,4,5};
	float price[5] = {25.25, 50.75, 80.00, 120.45, 75.00};
	char categoryCode[5] = {'A','B','C','D','E'};
	char type;
	printf("Enter The Type to Display (i = ProductID, f = Price, c = CategoryCode): ");
	scanf(" %c", &type);
	switch(type)
	{
		case 'i':
			printData(productID, type);
			break;
		case 'f':
			printData(price, type);
			break;
		case 'c':
			printData(categoryCode, type);
			break;
		default:
			printf("Invalid Type!\n");
	}
	return 0;
}
