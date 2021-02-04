#include<stdio.h>
#define EPF_RATE 0.11
#define PART_TIME_RATE 8.5

struct Employee{
	char name[50];
	int type,hours;
	float salary,epf,tax,net;
};

void get_details(struct Employee info[]);
void calc_net(struct Employee info[]);
void display(struct Employee info[]);

int main()
{
	struct Employee info[4];
	get_details(info);
	calc_net(info);
	display(info);
	return 0;
}

void get_details(struct Employee info[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("Staff's %d Name	  	     : ",i+1);
		scanf("%s",info[i].name);
		printf("1[Full time]	2[Part time] : ");
		scanf("%d",&info[i].type);
		
		while(info[i].type!=1 && info[i].type!=2)
		{
			printf("Wrong Input - Please ReEnter\n\n");
			printf("1[Full time]	2[Part time] : ");
			scanf("%d",&info[i].type);
		}
		
		if(info[i].type==1)
		{
			printf("Monthly salary	    	     : RM ");
			scanf("%f",&info[i].salary);
		}
		else if(info[i].type==2)
		{
			printf("Total hours worked	     : ");
			scanf("%d",&info[i].hours);
		}
		printf("\n");
	}
	
}

void calc_net(struct Employee info[])
{
	int i;
	for(i=0;i<4;i++)
	{
		if(info[i].type==1)
		{
			info[i].epf = info[i].salary * EPF_RATE;
		}
		else if(info[i].type==2)
		{
			info[i].epf = 0;
			info[i].salary = info[i].hours * PART_TIME_RATE;
		}
		
		if(info[i].salary>=10000)
		{
			info[i].tax = info[i].salary*0.20;
		}
		else if(info[i].salary>=8000)
		{
			info[i].tax = info[i].salary*0.15;
		}
		else if(info[i].salary>=5000)
		{
			info[i].tax = info[i].salary*0.10;
		}
		else if(info[i].salary<5000)
		{
			info[i].tax = info[i].salary*0;
		}
		
		info[i].net = info[i].salary-info[i].epf-info[i].tax;
	}
}

void display(struct Employee info[])
{
	printf(": : PAYROLL LIST - NET SALARY : :\n");
	printf("-------------------------------------\n");
	
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s\t RM %.2f\n",info[i].name,info[i].net);
	}
}
