#include<stdio.h>
int main()
{
	float weight, rate, iron, bill;
	char answer;
	
	printf("------------------------------------------\n");
	printf("\tWelcome to Clean Laundry\n");
	printf("------------------------------------------\n");
	
	printf("Laundry weight(kg)  : ");
	scanf("%f",&weight);
		fflush(stdin);					// to clear the buffer.
	printf("\nNeed ironing [y/n]? : ");
	scanf("%c",&answer);
	
	if(answer=='Y'||answer=='y')
	{
		if(weight<5)
			rate=1.00 ;
		else if(weight<10)
			rate=1.50 ;
		else if(weight<15)
			rate=2.00 ;
		else
			rate=2.50 ;	
		
		iron=5.00 ;
	}
	
	else if(answer=='N'||answer=='n')
	{
		if(weight<5)
			rate=1.00 ;
		else if(weight<10)
			rate=1.50 ;
		else if(weight<15)
			rate=2.00 ;
		else
			rate=2.50 ;	
		
		iron=0 ;
	}
	
	bill = (weight*rate)+iron ;
	
	printf("\nYour Bill ");
	printf("\n----------");
	printf("\nWeight	: %.2f",weight);
	printf("\nRate	: %.2f",rate);
	printf("\nIron	: %c (RM %.2f)",answer,iron);
	printf("\nBill	: RM %.2f",bill);
	
	return 0;
}
