#include<stdio.h>
#include<string.h>
void replaceVowel(char arr[][20])
{
	int i, j;
	for(i=0; i<5; i++)
	{
		for(j=0; arr[i][j]!='\0'; j++)
		{
			if(arr[i][j] == 'a' || arr[i][j] == 'A'
			|| arr[i][j] == 'e' || arr[i][j] == 'E'
			|| arr[i][j] == 'i' || arr[i][j] == 'I'
			|| arr[i][j] == 'o' || arr[i][j] == 'O'
			|| arr[i][j] == 'u' || arr[i][j] == 'U')
			{
				arr[i][j] = '*';
			}
		}
	}
	printf("\nReplaced Array:\n");
	for(i=0; i<5; i++)
	{
		printf("%s", arr[i]);
		printf("\n");
	}
	return;
}

int main()
{
	int i;
	char arr[5][20];
	printf("Enter Array Strings:\n");
	for(i=0; i<5; i++)
	{
		printf("String %d:\n", i+1);
		fgets(arr[i], sizeof(arr[i]), stdin);
		arr[i][strcspn(arr[i], "\n")] = '\0';
	}
	replaceVowel(arr);
	return 0;
}
