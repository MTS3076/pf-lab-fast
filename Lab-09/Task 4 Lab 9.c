#include<stdio.h>
int main()
{
	int arr[3][3] = {{1,4,7}, {2,5,8}, {3,6,9}};
	int (*p)[3] = arr;
	int search;
	printf("Enter an Element to Search for: ");
	scanf("%d", &search);
	int i, j, found = 0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(*(*(p + i) + j) == search)
			{
				printf("Element Found at Row %d and Column %d\n", i, j);
				found = 1;
				break;
			}
		}
		if(found)
		break;
	}
	if(!found)
	printf("Element not Found!\n");
	return 0;
}
