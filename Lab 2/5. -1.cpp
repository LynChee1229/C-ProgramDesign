#include<stdio.h>

int main()

{
	const float WHITE_PRICE = 0.05;
	const float GREEN_PRICE = 0.10;
	const float PINK_PRICE = 0.15;
	int white_quantity, green_quantity, pink_quantity;
	
	printf("Quantity of White A4 paper : ");
	scanf("%d", &white_quantity);
	printf("Quantity of Green A4 paper : ");
	scanf("%d", &green_quantity);
	printf("Quantity of Pink A4 paper  : ");
	scanf("%d", &pink_quantity);
	
	printf("\nWhite A4 paper : RM %.2f (%d x %.2f)", white_quantity*WHITE_PRICE, white_quantity, WHITE_PRICE);
	printf("\nGreen A4 paper : RM %.2f (%d x %.2f)", green_quantity*GREEN_PRICE, green_quantity, GREEN_PRICE);
	printf("\nPink  A4 paper : RM %.2f (%d x %.2f)", pink_quantity*PINK_PRICE, pink_quantity, PINK_PRICE);
	printf("\nTotal          : RM %.2f ", (white_quantity*WHITE_PRICE)+(green_quantity*GREEN_PRICE)+(pink_quantity*PINK_PRICE) );
	
	return 0;
}
