#include<stdio.h>
// #define PI 3.142 (define constant PI)

int main()

{
	const float PI = 3.142; // (memory constant PI)
	float radius, time, velocity;
	
	printf("Enter radius (cm) :");
	scanf("%f",&radius);
	printf("Enter time (s)	  :");
	scanf("%f",&time);
	
	velocity = (2*PI*radius) / time;
	
	printf("\nRadius	: %.2f cm", radius); //(rmb to format the variables)
	printf("\nTime	: %.2f seconds", time); //(rmb to format the variables)
	printf("\nCircular velocity : %.2f cm/s", velocity); //(rmb to format the variables)
	
	return 0;
}
