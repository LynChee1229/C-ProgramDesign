#include<stdio.h>
#include<string.h>
int main()
{
	char name [50];
	char id [20];
	int duration, x ;
	float rate, fee, total;
	
	printf("Enter name			: ");
	gets(name);
	printf("Enter ID			: ");
	scanf("%s",id);
	printf("Enter fee (RM)			: ");
	scanf("%f",&fee);
	printf("Enter duration of study(years)	: ");
	scanf("%d",&duration);
	
	printf("\n---------------------------------------\n");
	printf("\tMULTIMEDIA UNIVERSITY\n");
	printf("---------------------------------------\n");
	printf("Student name      : %s\n",name);
	printf("Student ID        : %s\n",id);
	printf("Duration of study : %d\n\n",duration);
	printf("Year	Course Fee\n");

	for(x=1; x<=duration; x++)
	{
		total = total + fee ;
		printf("%d	  RM %.2f\n",x, fee);
		fee=fee*1.05 ;
	}
	
	printf("--------------------------------\n");
	printf("Total Course Fees : RM %.2f",total);
	
	return 0;
}
