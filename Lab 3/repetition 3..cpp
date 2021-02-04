#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	float price, total;
	int counter;
	
	counter=1 ;
	do{
		printf("Enter product's name : ");
		scanf("%s",name);
		printf("Enter the price      : RM ");
		scanf("%f",&price);
		printf("\n%s : RM %.2f\n\n",name,price);
		total = total + price ;
		counter++ ;
	}while(counter<=3);
	
	printf("Total amount         : RM %.2f ",total);
	
	return 0 ;
}
