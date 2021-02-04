#include<stdio.h>
#include<string.h>		// library for strings.

int main()
{
	char choice ;
	float quiz1, quiz2, total ;
	int mark;
	char status[50] ;
	
	printf("Enter type of assessment [Q/A] : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'Q' : 
		case 'q' :
		{
			printf("Enter Quiz 1 and Quiz 2 marks : ");
			scanf("%f %f",&quiz1,&quiz2);
			
			total=quiz1+quiz2 ;
			printf("\nAssessment Type : Quiz\nQuiz total : %.2f",total);
			break;
		}
		
		case 'A' :
		case 'a' :
		{
			printf("Enter assignment marks : ");
			scanf("%d",&mark);
			
			if(mark<50)
				strcpy(status,"Re-do Assignment") ;
			else if(mark<70)
				strcpy(status,"Good") ;
			else if(mark<=100)
				strcpy(status,"Excellent") ;
			else
				strcpy(status,"Not available") ;
				
			printf("\nAssessment Type : Assignments\nStatus : %s",status);
			break ;
		}
		
		default : printf("Invalid assessment code entered.");
	}
	
	return 0;
}
