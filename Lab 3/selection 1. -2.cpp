#include<stdio.h>

int main()

{	
	int choice ;
	
	float distance, time, speed ;
	float mass, height, work ;
	const float gravity = 9.8 ;
	float radian, degree ;
	
	printf("1 - Calculate Speed\n");
	printf("2 - Calculate Work\n");
	printf("3 - Convert radian to degree\n\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :	printf("\nEnter distance(m) : ");
					scanf("%f",&distance);
					printf("Enter time(s)     : ");
					scanf("%f",&time);
					speed = distance/time ;
					printf("Speed is %.2f m/s.",speed);
					break ;
				
		case 2 :	printf("\nEnter mass(kg)  : ");
					scanf("%f",&mass);
					printf("Enter height(m) : ");
					scanf("%f",&height);
					work = mass*gravity*height ;
					printf("Work is %.2f Joules.",work);
					break ;
		
		case 3 :	printf("\nEnter radian : ");
					scanf("%f",&radian);
					degree = radian*57.2958 ;
					printf("%.2f radian is equals to %.2f degree.",radian,degree);
					break ;
		
		default :	printf("\nYou have entered an invalid code. Program will terminate.");
					break ;
	}
	
	return 0;
}
