#include<stdio.h>
char Get_choice();
void Calculate(int num1,int num2);

char choice;
int num1,num2, answer;

int main()
{
	choice = Get_choice();
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	Calculate(num1,num2);
	return 0;
}

char Get_choice( )
{
	printf("A - Add numbers\n");
	printf("B - Multiply numbers\n");
	printf("C - Substract numbers\n");
	printf("D - Remainder numbers\n\n");
	printf("What is your choice ? : ");
	scanf("%c",&choice);
	
	while(choice!='A' && choice!='B' && choice!='C' && choice!='D')
	{
		fflush(stdin);
		printf("\nYour choice is invalid. What is your choice ? : ");
		scanf("%c",&choice);
	}
	return choice;
}

void Calculate(int num1,int num2)
{
	switch(choice)
	{
		case 'A' : 	answer = num1 + num2 ;
					break ;
		case 'B' : 	answer = num1 * num2 ;
					break ;
		case 'C' : 	answer = num1 - num2 ;
					break ;
		case 'D' : 	answer = num1 % num2 ;
					break ; 
	}
	printf("Answer : %d",answer);
	return ;
}

