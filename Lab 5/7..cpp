#include<stdio.h>
#include<string.h>

int main()
{
	int ans,quantity,book1=0,book2=0,book3=0;
	float price,bill,total=0;  char code[10];
	
	printf("Enter [1] to continue : ");
	scanf("%d",&ans);
	
	if(ans==0)
	{
		printf("\nEnter [1] to continue : ");
		scanf("%d",&ans);
	}
	
	while(ans==1)
	{
			fflush(stdin);
		printf("\nEnter book code : ");
		gets(code);
		printf("Enter quantity  : ");
		scanf("%d",&quantity);
		
		if(strcmp(code,"B1001")==0)
		{	price = 34.50 ;
			book1 = book1 + quantity;	}
		else if(strcmp(code,"B1002")==0)
		{	price = 77.30 ;
			book2 = book2 + quantity;	}
		else if(strcmp(code,"B1003")==0)
		{	price = 54.90 ;
			book3 = book3 + quantity;	}
		
		bill = price*quantity;
		total = total + bill;
		printf("\nBill = RM %.2f",bill);
		printf("\n-----------------------\n\n",bill);
		
		printf("Enter [1] to continue : ");
		scanf("%d",&ans);
	}
	printf("\nTotal bill : RM %.2f\n",total);
	printf("Total Book 1 sold : %d\n",book1);
	printf("Total Book 2 sold : %d\n",book2);
	printf("Total Book 3 sold : %d\n",book3);

	return 0;
}
