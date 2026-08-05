#include<stdio.h>
void takeInput(int runs[])
{
	int i;
	printf("Enter Runs Scored:\n");
	for(i=0; i<11; i++)
	{
		printf("Player %d | Runs Scored = ", i+1);
		scanf("%d", &runs[i]);
	}
}

void calcTotalAvg(int runs[], int *total, float *average)
{
	*total = 0;
	*average = 0;
	int i;
	for(i=0; i<11; i++)
	{
		*total += runs[i];	
	}
	*average = (float)(*total) / 11;
}

void findHighest(int runs[], int *highestScore, int *playerIndex)
{
	*highestScore = runs[0];
	int i;
	for(i=0; i<11; i++)
	{
		if(runs[i] > *highestScore)
		{
			*highestScore = runs[i];
			*playerIndex = i;
		}
	}
}

int main()
{
	int runs[11];
	int total;
    float average;
    int highestScore, playerIndex;
    takeInput(runs);
    calcTotalAvg(runs, &total, &average);
    findHighest(runs, &highestScore, &playerIndex);
    printf("\nTotal Runs = %d\n", total);
    printf("Average Runs = %.2f\n", average);
    printf("Highest Scorer = Player %d with %d Runs\n", playerIndex + 1, highestScore);
	return 0;
}
