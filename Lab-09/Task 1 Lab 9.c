#include<stdio.h>
void statusGen(int wards[][5], int *genBed)
{
	int j;
	for(j=0; j<5; j++)
	{
		if(wards[0][j] == 0)
		{
			wards[0][j] = 1;
			(*genBed)++;
			printf("Total Beds Occupied in General Ward = %d\n", *genBed);
			return;
		}
	}
	printf("All Beds Occupied in General Ward!\n");
}

void statusIcu(int wards[][5], int *icuBed)
{
	int j;
	for(j=0; j<5; j++)
	{
		if(wards[1][j] == 0)
		{
			wards[1][j] = 1;
			(*icuBed)++;
			printf("Total Beds Occupied in ICU Ward = %d\n", *icuBed);
			return;
		}
	}
	printf("All Beds Occupied in ICU Ward!\n");
}

void statusPriv(int wards[][5], int *privBed)
{
	int j;
	for(j=0; j<5; j++)
	{
		if(wards[2][j] == 0)
		{
			wards[2][j] = 1;
			(*privBed)++;
			printf("Total Beds Occupied in Private Ward = %d\n", *privBed);
			return;
		}
	}
	printf("All Beds Occupied in Private Ward!\n");
}

void displayStatus(int wards[][5])
{
    printf("\n----Current Bed Status----\n");
	int i, j;
    for(i=0; i<3; i++)
    {
        if(i == 0) printf("General: ");
        if(i == 1) printf("ICU    : ");
        if(i == 2) printf("Private: ");

        for(j=0; j<5; j++)
        {
            printf("%d ", wards[i][j]);
		}
        printf("\n");
    }
    printf("--------------------------\n");
}

void totalCount(int *genBed, int *icuBed, int *privBed)
{
    int totalOcc = *genBed + *icuBed + *privBed;
    int totalFree = 15 - totalOcc;

    printf("Total Beds Occupied: %d\n", totalOcc);
    printf("Total Beds Available: %d\n\n", totalFree);
}

int main()
{
	int wards[3][5] = {0};
	int genBed = 0, icuBed=0, privBed = 0;
	int choice;
	do
	{
		printf("1. Occupy General Bed\n");
        printf("2. Occupy ICU Bed\n");
        printf("3. Occupy Private Bed\n");
        printf("4. Display Ward Status\n");
        printf("5. Show Total Count\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 0:
				break;
			case 1:
				statusGen(wards, &genBed);
				break;
			case 2:
				statusIcu(wards, &icuBed);
				break;
			case 3:
				statusPriv(wards, &privBed);
				break;
			case 4:
				displayStatus(wards);
				break;
			case 5:
				totalCount(&genBed, &icuBed, &privBed);
				break;
			default:
				printf("Invalid Ward Input!\n");
		}
	} while(choice != 0);
	return 0;
}
