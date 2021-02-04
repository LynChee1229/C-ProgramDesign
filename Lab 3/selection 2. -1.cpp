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
	
	if(weight<5 && answer=='y'||answer=='Y')
		{
		rate=1.00 ; 
		iron=5.00 ;
		}
	else if(weight<5 && answer=='n'||answer=='N')
		{
		rate=1.00 ; 
		iron=0 ;
		}
	else if(weight<10 && answer=='y'||answer=='Y')
		rate=1.50 , iron=5.00 ;
	else if(weight<10 && answer=='n'||answer=='N')
		rate=1.50 , iron=0 ;	
		
	else if(weight<15 && answer=='y'||answer=='Y')
		rate=2.00 , iron=5.00 ;
	else if(weight<15 && answer=='n'||answer=='N')
		rate=2.00 , iron=0 ;	

	else if(weight>=15 && answer=='y'||answer=='Y')
		rate=2.50 , iron=5.00 ;
	else if(weight>=15 && answer=='n'||answer=='N')
		rate=2.50 , iron=0 ;
		
	bill = (weight*rate)+iron ;
	
	printf("\nYour Bill ");
	printf("\n----------");
	printf("\nWeight	: %.2f",weight);
	printf("\nRate	: %.2f",rate);
	printf("\nIron	: %c (RM %.2f)",answer,iron);
	printf("\nBill	: RM %.2f",bill);
	
	return 0;
}
