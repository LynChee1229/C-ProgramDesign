#include<stdio.h>
#include<string.h>

int main()
{
	char answer; char message[200]; int length, total_message=0;
	float cost,bill,total_bill=0;
	
	printf("Enter [Y] if you want to write a message : ");
	scanf("%c",&answer);
	
	while(answer=='Y'||answer=='y')
	{
			fflush(stdin);
		printf("\nWrite your message : ");
		gets(message);
		length = strlen(message);
		
		if(length<=20)
			cost = 0.50;
		else if(length<=50)
			cost = 0.30;
		else
			cost = 0.10;
			
		bill = length*cost;
		total_bill = total_bill + bill;
		total_message = total_message + 1;
		
		printf("\nMessage : %s\n",message);
		printf("Length  : %d\n",length);
		printf("Cost    : RM %.2f\n",cost);
		printf("Bill    : RM %.2f\n\n",bill);
		
		printf("Enter [Y] if you want to write a message : ");
		scanf("%c",&answer);
	} 
	printf("\nTotal message : %d",total_message);
	printf("\nTotal bill    : RM %.2f",total_bill);
	
}
