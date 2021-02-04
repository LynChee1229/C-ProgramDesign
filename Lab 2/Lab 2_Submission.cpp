#include<stdio.h>

int main()

{
	const float TAX = 0.06 ;
	float lunch_bill, tax_amount, total_bill, individual_bill ;
	int friends_num ;
	
	printf("Enter the bill for lunch : RM "); 
	scanf("%f", &lunch_bill);
	printf("Total number of friends  : ");
	scanf("%d", &friends_num);
	
	tax_amount = lunch_bill * TAX ;
	total_bill = lunch_bill + tax_amount ;
	individual_bill = total_bill / friends_num ;
	
	printf("\nLunch bill		: RM %.2f", lunch_bill);
	printf("\nTax amount		: RM %.2f", tax_amount);
	printf("\nTotal bill		: RM %.2f", total_bill);
	printf("\nIndividual bill		: RM %.2f", individual_bill);
	
	return 0;
}
