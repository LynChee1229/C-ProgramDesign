#include<stdio.h>
float get_total_cost(float salary,float maintenance,float vehicle);
float get_cost(float total_cost,int unit);
void store_record(float total_cost,float cost);

int main()
{
	FILE *fpinput;
	int unit,i;
	float salary,maintenance,vehicle,total_cost,cost,highest_totalCost=0,highest_cost=0;
	
	fpinput = fopen("input.txt","r");
	
	if(fpinput==0)
	{
		printf("The file could not be found.");
		exit(1);
	}
	else
	{
		while(!feof(fpinput))
		{
			fscanf(fpinput,"%f %f %f %d",&salary,&maintenance,&vehicle,&unit);
			total_cost = get_total_cost(salary,maintenance,vehicle);
			cost = get_cost(total_cost,unit);
			store_record(total_cost,cost);
		
			if(highest_totalCost < total_cost)
				highest_totalCost = total_cost;
		
			if(highest_cost < cost)
				highest_cost = cost;
		
			printf("Month %d\n",++i);
			printf("\tTotal Cost	 : RM %.2f\n",total_cost);
			printf("\tCost per product : Rm %.2f\n\n",cost);
		}
		printf("Highest cost  : RM %.2f\n",highest_totalCost);
		printf("Highest price : RM %.2f",highest_cost);
	}
	fclose(fpinput);
	return 0;
}

float get_total_cost(float salary,float maintenance,float vehicle)
{
	float total_cost;
	total_cost = salary + maintenance + vehicle;
	return total_cost;
}

float get_cost(float total_cost,int unit)
{
	float cost;
	cost = total_cost/unit;
	return cost;
}

void store_record(float total_cost,float cost)
{
	FILE *write;
	write = fopen("cost.txt","a");
	fprintf(write,"\n%.2f %.2f",total_cost,cost);
	fclose(write);
}
