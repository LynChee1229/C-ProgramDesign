#include<stdio.h>
#include<math.h>
#define Pi 3.142
float Get_area( );
float Get_circumference( );

float radius, area, circumference ;

int main( )
{	
	int counter=1;
	
	while(counter!= -1)
	{
	int choice;
	char answer;
	printf("\nKey in [1] to calculate the area of circle\n");
	printf("Key in [2] to calculate circumference of circle\n\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :	area = Get_area( );
					printf("Area of the circle : %.2f",area);
					break;
		case 2 :	circumference = Get_circumference( );
					printf("Circumference of the circle : %.2f",circumference);
					break;
		default : printf("Invalid choice entered.");
				  break;
	}
	
	printf("\n\nEnter -1 to quit, enter any number to continue : ");
	scanf("%d",&counter);
	}
	
	return 0;
}

float Get_area( )
{
	printf("\nEnter the radius of circle : ");
	scanf("%f",&radius);
	area = Pi*pow(radius,2);	 //area = Pi*radius*radius ;  
	return area;
}

float Get_circumference( )
{
	printf("\nEnter the radius of circle : ");
	scanf("%f",&radius);
	circumference = 2*Pi*radius;
	return circumference ;
}
