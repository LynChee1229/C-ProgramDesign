#include<stdio.h>
#include<string.h>
void menu();
char* get_item(int choice);
float get_price(int choice);
void display(char name[],char item[],float price,int quantity,float payment);

int main()
{
	char name[30]; char item[50];
	int choice,quantity; float price,payment,total=0;
	int sold_1=0; int sold_2=0; int sold_3=0;
	char answer='Y';
	
	while(answer=='Y'||answer=='y')
	{
		menu();
		fflush(stdin);
		
		printf("Enter name	: ");
		gets(name);
	
		printf("Enter choice	: ");
		scanf("%d",&choice);
		while(choice!=1 && choice!=2 && choice!=3)
		{
			printf("Re-enter choice	: ");
			scanf("%d",&choice);
		}
		printf("Enter quantity	: ");
		scanf("%d",&quantity);
	
		strcpy(item,get_item(choice));
		price = get_price(choice);
		payment = price*quantity;
		total = total + payment;
	
		switch(choice)
		{
		case 1	: sold_1 = sold_1 + quantity; break;
		case 2	: sold_2 = sold_2 + quantity; break;
		case 3	: sold_3 = sold_3 + quantity; break;
		}
		display(name,item,price,quantity,payment);
		
		fflush(stdin);
		printf("Enter [Y] to continue : ");
		scanf("%c",&answer);
		printf("\n");
	}
	
	printf("------------------------------------------\n");
	printf("-\t       TODAY'S SUMMARY'\t         -\n");
	printf("------------------------------------------\n");
	printf("Total payment	: RM %.2f\n",total);
	printf("Item 1 sold 	: %d\n",sold_1);
	printf("Item 2 sold 	: %d\n",sold_2);
	printf("Item 3 sold 	: %d\n",sold_3);
	
	return 0;
}

void menu()
{
	printf("------------------------------------------------\n");
	printf("-\t     WELCOME TO MYHome COOKIES\t       -\n");
	printf("------------------------------------------------\n");
	printf("1. Chocolate chip Cookies	[ RM 25.00 ]\n");
	printf("2. Best selling Almond Cookies	[ RM 23.00 ]\n");
	printf("3. Cranberry Oats Cookies	[ RM 24.00 ]\n");
	printf("------------------------------------------------\n");
}

char* get_item(int choice)
{
	char item[30];
	switch(choice)
	{
		case 1	: strcpy(item,"Choc-chip Cookie"); break;
		case 2	: strcpy(item,"Almond Cookie"); break;
		case 3	: strcpy(item,"Cranberry Oat Cookie"); break;
	}
	return item;
}

float get_price(int choice)
{
	float price;
	switch(choice)
	{
		case 1	: price=25; break;
		case 2	: price=23; break;
		case 3	: price=24; break;
	}
	return price;
}

void display(char name[],char item[],float price,int quantity,float payment)
{
	printf("\n------------------------------------------------\n");
	printf("-\t     RECEIPT OF PURCHASE\t       -\n");
	printf("------------------------------------------------\n");
	printf("Name		: %s\n",name);
	printf("Item		: %s\n",item);
	printf("Price		: RM %.2f\n",price);
	printf("Quantity	: %d\n",quantity);
	printf("Payment		: RM %.2f\n",payment);
	printf("------------------------------------------------\n\n");
}
