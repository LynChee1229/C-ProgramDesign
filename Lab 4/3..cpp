#include<stdio.h>
#include<string.h>
#define COST 150.00

int Get_credit_hour(char code[]);		//declare the string.
void Display_receipt(char code[],int hour,float fee);

int main()
{
	char answer; char code[10]; int hour; float fee; float total_fee=0.00;
	
	printf("Need to register a subject ? : ");
	scanf("%c",&answer);
	
	while(answer=='Y' || answer=='y' )
	{
		printf("Enter the subject code	     : ");
		scanf("%s",code);
		hour = Get_credit_hour(code);
		fee = hour*COST ;
		Display_receipt(code,hour,fee);
		total_fee = total_fee + fee ;
		
		fflush(stdin);
		
		printf("Need to register a subject ? : ");
		scanf("%c",&answer);
	}
	
	printf("Total fee to be paid : RM %.2f",total_fee);
	
	return 0;
}

int Get_credit_hour(char code[])
{
	int hour;
	
	if(strcmp(code,"DCS5038")==0)
		hour=4;
	else if(strcmp(code,"DET5078")==0)
		hour=3;
	else if(strcmp(code,"DPR5038")==0)
		hour=2;
	else
	{
		hour=0;
		printf("Invalid code entered.");
	}	
	return hour;
}

void Display_receipt(char code[],int hour,float fee)
{
	printf("\nSubject Code	: %s\n",code);
	printf("Credit Hour	: %d\n",hour);
	printf("Total Fee	: RM %.2f\n\n",fee);
	
	return ;
}
