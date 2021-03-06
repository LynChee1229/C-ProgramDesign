#include<stdio.h>
#include<string.h>

void *Get_dest(char code,char name[]);		// passing dest name as empty array.
void Get_rate(int day);

float rate = 0;

int main()
{
	char code; int day; 
	char name[30]; float payment;
	
	for(int count=1;count<=3;count++)
	{
		printf("Enter Destination code	: ");
		scanf("%c",&code);
		printf("Days of stay		: ");
		scanf("%d",&day);
		
		Get_dest(code,name);
		Get_rate(day);
		
		payment = day*rate;
		
		printf("\nDestination	: %s\n",name);
		printf("Payment		: RM %.2f (%d x RM%.2f)\n\n",payment,day,rate);
	
		fflush(stdin);
	}
	return 0;
}

void *Get_dest(char code,char name[])
{
	switch(code)
	{
		case 'P' : 
		case 'p' :	strcpy(name,"Penang");
					break;
		case 'L' : 
		case 'l' :	strcpy(name,"Langkawi");
					break;
		case 'T' : 
		case 't' :	strcpy(name,"Tioman Island");
					break;
	}
}

void Get_rate(int day)
{
	if(day<3)
		rate = 295;
	else if(day<=5)
		rate = 250;
	else
		rate = 210;
}
