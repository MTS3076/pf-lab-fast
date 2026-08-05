#include<stdio.h>
void takeInput(int attendance[][5])
{
	int i, j;
	printf("Enter the Attendance Records (1 = Present, 0 = Absent):\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Student %d | Class %d = ", i+1, j+1);
			scanf("%d", &attendance[i][j]);
		}
		printf("\n");
	}
}

void calcPerc(int attendance[][5])
{
	float perc;
	int i, j, count;
	for(i=0; i<4; i++)
	{
		perc = 0;
		count = 0;
		for(j=0; j<5; j++)
		{
			if(attendance[i][j] == 1)
			{
				count++;
			}
		}
		perc = ((float)count / 5) * 100;
		printf("Student %d | Percentage = %.2f%%\n", i+1, perc);
		if(perc < 75)
		{
			printf("Warning! Your Attendance is Below 75%%\n");
		}
	}
}

int main()
{
	int attendance[4][5] = {0};
	takeInput(attendance);
	calcPerc(attendance);
	return 0;
}
