#include<stdio.h>
#include<string.h>
float get_price(char code);
float get_discount(int quantity);
char* get_freegift(char code);
void display(char code,float price,int quantity,char freegift[],float total_price,float discount,float payment);

int main()
{
	char code; int quantity;
	float price, total_price, discount, payment;
	char freegift[50];
	
	char answer='Y';
	
	do{
		fflush(stdin);
	printf("Enter the Product Code	: ");
	scanf("%c",&code);
	printf("Enter quantity		: ");
	scanf("%d",&quantity);
	
	price = get_price(code);
	discount = get_discount(quantity);
	strcpy(freegift,get_freegift(code));
	
	total_price = price*quantity;
	payment = total_price - discount;
	
	display(code,price,quantity,freegift,total_price,discount,payment);
	
		fflush(stdin);
	printf("Enter [Y] to continue : ");
	scanf("%c",&answer);
	printf("\n");
	
	}while(answer=='Y'||answer=='y');
	
	return 0;
}

float get_price(char code)
{
	float price;
	
	switch(code)
	{
		case 'K' : 
		case 'k' :	price = 19.90; break;
		case 'M' : 
		case 'm' :	price = 23.60; break;
		case 'C' : 
		case 'c' :	price = 45.00; break;
	}
	return price;
}

float get_discount(int quantity)
{
	float discount;
	
	if(quantity<=10)
		discount = 0;
	else if(quantity<=20)
		discount = 10;
	else if(quantity<=30)
		discount = 20;
	else
		discount = 30;
		
	return discount;
}

char* get_freegift(char code)
{
	char freegift[50];
	
	switch(code)
	{
		case 'K' : 
		case 'k' :	strcpy(freegift,"Mouse Pad"); break;
		case 'M' : 
		case 'm' :	strcpy(freegift,"CD Cover"); break;
		case 'C' : 
		case 'c' :	strcpy(freegift,"Screen Protector"); break;
	}
	//return freegift;
}

void display(char code,float price,int quantity,char freegift[],float total,float discount,float payment)
{
	printf("\nProduct Code	: %c\n",code);
	printf("Product Price	: RM %.2f\n",price);
	printf("Quantity	: %d\n",quantity);
	printf("Free Gift	: %s\n",freegift);
	printf("Total		: RM %.2f\n",total);
	printf("Discount	: RM %.2f\n",discount);
	printf("Payment		: RM %.2f\n\n",payment);
	
	return;
}
