#include<stdio.h>
#define Convert 2.54

int main()
{
	float cm[5]; float inch[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter value in inches : ");
		scanf("%f",&inch[i]);
		cm[i] = inch[i]*Convert;
	}
	
	printf("\nResults of the conversion.\n");
	printf("-------------------------------\n");
	
	int i=0;
	do{
		printf("%.2f inch(es) = %.2f cm(s)\n",inch[i],cm[i]);
		i++ ;
	}while(i<5);
	
	return 0;
	
}
