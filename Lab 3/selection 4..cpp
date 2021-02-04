#include<stdio.h>
#include<string.h>

int main()
{
	char name [50];
	char type [20];
	char code;
	int day;
	float price, bill;
	
	printf("---------------------------------------------------------\n");
	printf("\t\tWELCOME TO LEGEND HOTEL\n");
	printf("---------------------------------------------------------\n");
	printf("Rooms : Deluxe(1 or D)    Twin Sharing(2 or T)    Single(3 or S)\n\n");
	
	printf("Enter your name		: ");
	gets(name);
	printf("Enter room code		: ");
	scanf("%c",&code);
	printf("Enter number of days	: ");
	scanf("%d",&day);
	
	switch(code)
	{
		case '1' :					//PUT ' ' becuase here 1 is under char not int.
		case 'D' :
		case 'd' :	strcpy(type,"Deluxe");		//assign a string.
					// type = "Deluxe" ------ WRONG.
					price=200.00;
					break ;
		case '2' :
		case 'T' :
		case 't' :	strcpy(type,"Twin Sharing");
					price=170.00;
					break ;
		case '3' :
		case 'S' :
		case 's' :	strcpy(type,"Single");
					price=120.00;
					break ;
		default  :	strcpy(type,"Invalid room.");
					price=0;
					printf("\nInvalid code entered.\n");
					break;
	}
	
	bill=price*day ;
	
	printf("----------------------------------\n");
	printf("\tPAYMENT RECEIPT\n");
	printf("----------------------------------\n");
	printf("Customer name		: %s\n",name);
	printf("Room type		: %s\n",type);
	printf("Room price		: RM %.2f\n",price);
	printf("Number of days		: %d\n",day);
	printf("Bill			: RM %.2f\n\n",bill);
	
	return 0;
}
