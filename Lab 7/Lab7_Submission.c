#include<stdio.h>
struct Calculator{
	float price,rate,downPayment,financingAmount,profitAmount,totalFinancing,monthlyInstallment;
	int years;
	char model[30];
}financing[3];

void get_input(struct Calculator financing[]);
void get_finance(struct Calculator financing[]);
void display(struct Calculator financing[]);

int main()
{
	printf("=================================\n");
	printf("=\tCAR PAYMENT FORMULA\t=\n");
	printf("=================================\n\n");
	get_input(financing);
	get_finance(financing);
	display(financing);
	return 0;
}

void get_input(struct Calculator financing[])
{
	int i;
	for(i=0;i<3;i++)
	{
			fflush(stdin);
		printf("Enter car model	#%d		: ",i+1);
		gets(financing[i].model);
		printf("Enter car price	#%d		: ",i+1);
		scanf("%f",&financing[i].price);
		printf("Enter down payment amount	: ");
		scanf("%f",&financing[i].downPayment);
		printf("Enter financing rate		: ");
		scanf("%f",&financing[i].rate);
		printf("Enter number of financing years	: ");
		scanf("%d",&financing[i].years);
		printf("\n");
	}
}

void get_finance(struct Calculator financing[])
{
	int i;
	for(i=0;i<3;i++)
	{
		financing[i].financingAmount = financing[i].price - financing[i].downPayment;
		financing[i].profitAmount = financing[i].financingAmount * financing[i].years * (financing[i].rate/100);
		financing[i].totalFinancing = financing[i].financingAmount + financing[i].profitAmount;
		financing[i].monthlyInstallment = financing[i].totalFinancing/(financing[i].years*12);
	}	
}

void display(struct Calculator financing[])
{
	printf("=================================\n");
	printf("=\tFINANCING SUMMARY\t=\n");
	printf("=================================\n");
	
	int i;
	for(i=0;i<3;i++)
	{
		printf("Car #%d\n-----\n",i+1);
		printf("Car model		: %s\n",financing[i].model);
		printf("Financing amount	: RM %.2f\n",financing[i].financingAmount);
		printf("Bank's profit amout	: RM %.2f\n",financing[i].profitAmount);
		printf("Total amout		: RM %.2f\n",financing[i].totalFinancing);
		printf("Monthly installment	: RM %.2f\n\n",financing[i].monthlyInstallment);
	}
}
