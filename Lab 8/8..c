#include<stdio.h>

struct Training{
	char name[50];
	float fee,cert,material,meal,cost,profit;
}detail[4];

float get_total(struct Training detail[]);

int main()
{
	FILE *fptr;
	int i;	float total;
	
	fptr = fopen("trainee.txt","w");
	total = get_total(detail);
	
	printf("\nName\t     Total Cost\t   Profit\n");
	printf("-----\t     ----------\t   ------\n");
	
	for(i=0;i<4;i++)
	{
		printf("%s\t     RM %.2f\t   RM %.2f\n",detail[i].name,detail[i].cost,detail[i].profit);
		fprintf(fptr,"\n%s\t %.2f\t %.2f",detail[i].name,detail[i].cost,detail[i].profit);
	}
	printf("\n\nTOTAL PROFIT : RM %.2f",total);
	fclose(fptr);
	return 0;
}

float get_total(struct Training detail[])
{
	int i; float total=0;
	
	for(i=0;i<4;i++)
	{
		printf("Enter trainee #%d name	 : ",i+1);
		scanf("%s",detail[i].name);
		printf("Enter trainee meal price : RM ");
		scanf("%f",&detail[i].meal);
		printf("\n");
		
		detail[i].fee = 60;
		detail[i].cert = 1.3;
		detail[i].material = 7.95;
		
		detail[i].cost = detail[i].cert + detail[i].material + detail[i].meal;
		detail[i].profit = detail[i].fee - detail[i].cost;
		total = total + detail[i].profit;
	}
	return total;
}
