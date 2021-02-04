#include<stdio.h>

int main()

{
	int choice ;
	printf("1 - Calculate Speed\n");
	printf("2 - Calculate Work\n");
	printf("3 - Convert radian to degree\n\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{	float distance, time, speed ;
		
		printf("\nEnter distance(km) : ");
		scanf("%f",&distance);
		printf("Enter time(h)      : ");
		scanf("%f",&time);
		
		speed = distance/time ;
		
		printf("Speed is %.2f km/h.",speed);
	}
	
	else if(choice==2)
	{	float mass, height, work ;
		const float GRAVITY = 9.8 ;
		
		printf("\nEnter mass (kg) : ");
		scanf("%f",&mass);
		printf("Enter height(m) : ");
		scanf("%f",&height);
		
		work = mass*GRAVITY*height ;
		
		printf("Work is %.2f Joules.",work);
	}
	
	else if(choice==3)
	{	float radian, degree ;
		
		printf("\nEnter value in radian : ");
		scanf("%f",&radian);
		
		degree = radian*57.2958 ;
		
		printf("%.2f radian is equals to %.2f degree.",radian,degree);
	}
	
	else
		printf("\nYou have entered an invalid code. Program will terminate.\n");

	return 0;
	
}
