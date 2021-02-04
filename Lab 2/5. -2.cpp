#include<stdio.h>

int main()

{
	const float WHITE_PRICE = 0.05;
	const float GREEN_PRICE = 0.10;
	const float PINK_PRICE = 0.15;
	
	int white_quantity, green_quantity, pink_quantity;
	float white, green, pink, total;
	
	printf("Quantity of White A4 paper : ");
	scanf("%d", &white_quantity);
	printf("Quantity of Green A4 paper : ");
	scanf("%d", &green_quantity);
	printf("Quantity of Pink A4 paper  : ");
	scanf("%d", &pink_quantity);
	
	white = white_quantity * WHITE_PRICE;
	green = green_quantity * GREEN_PRICE;
	pink = pink_quantity * PINK_PRICE;
	total = white + green + pink;
	
	printf("\nWhite A4 paper : RM %.2f (%d x %.2f)", white, white_quantity, WHITE_PRICE);
	printf("\nGreen A4 paper : RM %.2f (%d x %.2f)", green, green_quantity, GREEN_PRICE);
	printf("\nPink  A4 paper : RM %.2f (%d x %.2f)", pink, pink_quantity, PINK_PRICE);
	printf("\nTotal          : RM %.2f ", total );
	
	return 0;
}
