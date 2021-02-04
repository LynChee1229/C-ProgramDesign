#include<stdio.h>
#include<string.h>
#include<process.h>			// for exit( )

int main()
{
	int code, ticket, day;
	float price, total ;
	char movie[50] ;
	
	printf("----------------------------------------------\n");
	printf("\t\tMOVIE TITLE\n");
	printf("----------------------------------------------\n");
	printf("1 - The Lego Batman (RM 13.00)\n");
	printf("2 - Furious 8       (RM 12.00)\n");
	printf("----------------------------------------------\n\n");
	
	printf("Enter movie code : ");
	scanf("%d",&code);
	
	
	if(code==1)
	{
		strcpy(movie,"The Lego Batman");
		
		// ^* these four statements wrote inside IF because it wont appear if the code entered is not 1 or 2.
		printf("Enter number of ticket : ");
		scanf("%d",&ticket);
		printf("Enter movie day (1-7; 1 for Monday, 2 for Tuesday,etc.) : ",day);
		scanf("%d",&day);
		
		switch(day)
		{
			case 1 : 
			case 2 : 
			case 3 : 
			case 4 : 
			case 5 :	price=13*0.8 ;
						break ;
			case 6 : 
			case 7 :	price=13 ;
						break ;
			default : 	price=0 ;
						break ;
		}
	}
	else if(code==2)
	{
		strcpy(movie,"Furious 8");
		
		// ^*
		printf("Enter number of ticket : ");
		scanf("%d",&ticket);
		printf("Enter movie day (1-7; 1 for Monday, 2 for Tuesday,etc.) : ",day);
		scanf("%d",&day);
		
		switch(day)
		{
			case 1 : case 2 : case 3 : case 4 : case 5 :
			price=12*0.7 ;
			break ;
			
			case 6 : case 7 :
			price=12 ;
			break ;
			
			default : 	price=0 ;
						break ;
		}	
	}
	else
	{
		printf("Invalid movie code ! ");
		exit(0);				// to terminate the program. (so it won't show the rest). 
	}	
	
	if(price!=0)
	{
		total=price*ticket ;
		printf("\n-------------------------\n");
		printf("\tRECEIPT\n");
		printf("-------------------------\n");
		printf("Movie		: %s\n",movie);
		printf("No. of Ticket	: %d\n",ticket);
		printf("Total price	: RM %.2f\n",total);
	}
	else
		printf("\nInvalid day selection !!");
	
	return 0 ;
}
