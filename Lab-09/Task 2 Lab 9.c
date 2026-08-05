#include<stdio.h>
void deposit(float *balance, int account, float amount)
{
	if(account < 1 || account > 5)
	{
		printf("Invalid Account No!\n");
		return;
	}
	balance[account-1] += amount;
	printf("Total Balance After Depositing = %.2f\n", balance[account-1]);
	return;
}

void withdraw(float *balance, int account, float amount)
{
	if(account < 1 || account > 5)
	{
		printf("Invalid Account No!\n");
		return;
	}
	balance[account-1] -= amount;
	printf("Total Balance After Withdrawing = %.2f\n", balance[account-1]);
	return;
}

void displayAvg(float *balance)
{
	float sum = 0, avg = 0;
	int i;
	for(i=0; i<5; i++)
	{
		sum += balance[i];
	}
	avg = sum / 5;
	printf("Average Balance = %.2f\n", avg);
	return;
}

int main()
{
	float balance[5] = {0};
	int account, choice;
	float amount = 0;
	do
	{
		printf("Enter 0 to Exit\n");
		printf("Enter 1 to Deposit Balance\n");
		printf("Enter 2 to Withdraw Balance\n");
		printf("Enter 3 to Display Average Balance\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 0:
				break;
			case 1:
				printf("Enter Account Number: ");
				scanf("%d", &account);
				printf("Enter Amount to Deposit: ");
				scanf("%f", &amount);
				deposit(balance, account, amount);
				break;
			case 2:
				printf("Enter Account Number: ");
				scanf("%d", &account);
				printf("Enter Amount to Withdraw: ");
				scanf("%f", &amount);
				withdraw(balance, account, amount);
				break;
			case 3:
				displayAvg(balance);
				break;
			default:
				printf("Invalid Choice!\n");
				break;
		}
	} while(choice != 0);
	return 0;
}
