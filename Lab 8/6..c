#include<stdio.h>
#define NUMBER 3

struct Reward{
	char customerName[50];
	float purchase,points;
};

void calculate(struct Reward record[]);

int main()
{
	FILE *fp;
	struct Reward record[NUMBER];
	int i;
	
	fp = fopen("mesracard.txt","a");
	
	if(fp==NULL)
	{
		printf("File cannot be open.");
		exit(1);
	}
	else
	{
		calculate(record);
		
		printf("\nCustomer's Name\t    Purchase\t Points\n");
		printf("---------------\t    --------\t ------\n");
		
		for(i=0;i<NUMBER;i++)
		{
			printf("%s\t\t    RM %.2f\t %.2f\n",record[i].customerName,record[i].purchase,record[i].points);
			fprintf(fp,"\n%s\t%.2f\t%.2f",record[i].customerName,record[i].purchase,record[i].points);
		}
	}
	fclose(fp);
	return 0;
}

void calculate(struct Reward record[])
{
	int i;
	
	for(i=0;i<NUMBER;i++)
	{
		printf("Enter customer's name	   : ");
		scanf("%s",record[i].customerName);
		printf("Enter customer's purchase  : RM ");
		scanf("%f",&record[i].purchase);
		printf("\n");
		
		if(record[i].purchase>=0 && record[i].purchase<=100)
			record[i].points = 0.45 * record[i].purchase;
		else if(record[i].purchase>100 && record[i].purchase<=250)
			record[i].points = 0.7 * record[i].purchase;
		else if(record[i].purchase>250 && record[i].purchase<=500)
			record[i].points = 0.85 * record[i].purchase;
		else if(record[i].purchase>500)
			record[i].points = 1 * record[i].purchase;
	}
	return;
}
