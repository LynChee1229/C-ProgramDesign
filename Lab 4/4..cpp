#include<stdio.h>
#include<string.h>
float Calculate(float fee,int year);

int main()
{
	char name[30]; char id[10];int year;
	float fee=10000 ; float total;
	
	printf("Enter name : ");
	gets(name);
	printf("Enter ID   : ");
	scanf("%s",id);
	printf("Enter duration of study [year] : ");
	scanf("%d",&year);
	
	printf("\n\n----------------------------------");
	printf("\n\tMULTIMEDIA UNIVERSITY");
	printf("\n----------------------------------\n");
	printf("Student name	  	: %s\n",name);
	printf("Student ID		: %s\n",id);
	printf("Duration of study	: %d\n\n",year );
	
	total = Calculate(fee,year);
	printf("\n--------------------------------");
	printf("\nTotal Course Fees : RM %.2f",total);
	
	return 0;
}

float Calculate(float fee,int year)
{
	float total; int count=1;
	printf("Year	 Course Fee");
	
	while(count<=year)
	{
		printf("\n%d	RM %.2f",count++,fee);
		total = total + fee ;
		fee = fee*1.05 ;
	}
	return total;
}
