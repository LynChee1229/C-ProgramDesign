#include<stdio.h>
#include<string.h>
int main()
{
	char code ;
	int num ;
	float price, rate, discount, payment ;
	char name[50] ;
	char gift[30] ;
	
	printf("COURSES OFFERED\n");
	printf("A - Windows Azure (RM 1250.00 per pax)\n");
	printf("B - JQuery for Beginners (RM 990.00 per pax)\n");
	printf("C - Advanced PHP and MySQL (RM 2150.00 per pax)\n\n");
	
	printf("Enter the COURSE CODE        : ");
	scanf("%c",&code) ;
	printf("Enter number of participants : ");
	scanf("%d",&num) ;
	
	switch(code)
	{
		case 'A' :	
		case 'a' :	strcpy(name,"Windows Azure");
					price = 1250 ;
					break ;
		case 'B' :	
		case 'b' :	strcpy(name,"JQuery for Beginners");
					price = 990 ;
					break ;
		case 'C' :	
		case 'c' :	strcpy(name,"Advanced PHP and MySQL");
					price = 2150 ;
					break ;
		default  :	strcpy(name,"Invalid code.");
					break ;
	}
	
	if(num<=10)
	{
		rate = 0 ;
		discount = price*0 ;
		strcpy(gift,"None");
	}
	else if(num<=20)
	{
		rate = 10 ;
		discount = price*0.1 ;
		strcpy(gift,"Coffee Mug");
	}
	else
	{
		rate = 15 ;
		discount = price*0.15 ;
		strcpy(gift,"Kingston 16GB Thumbdrive");
	}
	
	payment = (price-discount)*num ;
	
	printf("\nCourse name		: %s\n",name);
	printf("Course price		: RM %.2f\n",price);
	printf("Participants		: %d\n",num);
	printf("Discount		: RM %.2f (%.2f %%)\n",discount,rate);
	printf("Gift			: %s\n",gift);
	printf("Total payment		: RM %.2f\n",payment);
	
	return 0 ;
}
