#include<stdio.h>

int main()
{
	float allowance, expenses, total_allowance, total_expenses ;
	int day=1;
	
	allowance=0;										// Initialization for outter while loop.
	
	printf("Day %d allowance. [Enter -1 to stop] : RM ",day);
	scanf("%f",&allowance);
	
	while(allowance!=-1)								// Condition for outter while loop.
	{
		expenses=1; int num=1; float daily_expenses=0;						// Initialization for inner while loop.
		while(expenses!=0)													// Condition for outter while loop.
		{
			printf("-- Expenses %d [type 0 to stop]      : RM ",num++);
			scanf("%f",&expenses);											// Update for outter while loop.
			daily_expenses = daily_expenses + expenses ;
			total_expenses = total_expenses + expenses ;
		}
		
		total_allowance = total_allowance + allowance ;
		
		printf("\nDay %d allowance : RM %.2f\n",day, allowance);
		printf("Day %d expenses  : RM %.2f\n\n",day++, daily_expenses);
				
		printf("Day %d allowance. [Enter -1 to stop] : RM ",day);
		scanf("%f",&allowance);							// Update for outter while loop.
	}
	
	printf("\nTotal allowance for %d day(s) : RM %.2f",--day,total_allowance);
	printf("\nTotal expenses for %d day(s)  : RM %.2f",day,total_expenses);
		
	return 0;
}

