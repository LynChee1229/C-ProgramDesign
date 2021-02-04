#include<stdio.h>

struct Student{
	char ID [20];
	float lab,quiz,assignment,midterm,total;
}coursework[3];

float get_assignment(float assignment);
float get_midterm(float midterm);
void display_report(struct Student coursework[]);

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter student ID #%d			: ",i+1);
		scanf("%s",coursework[i].ID);
		printf("Enter your lab marks (10%%) 		: ");
		scanf("%f",&coursework[i].lab);
		
		float quiz[2];
		int z;
		for(z=0;z<2;z++)
		{
		printf("Enter your quiz %d marks (5%%)		: ",z+1);
		scanf("%f",&quiz[z]);
		}
		
		printf("Enter your assignment marks (80%%)	: ");
		scanf("%f",&coursework[i].assignment);
		printf("Enter your midterm marks (50%%)		: ");
		scanf("%f",&coursework[i].midterm);
		printf("\n");
		
		coursework[i].quiz = quiz[0] + quiz[1];
		coursework[i].assignment = get_assignment(coursework[i].assignment);
		coursework[i].midterm = get_midterm(coursework[i].midterm);
		coursework[i].total = coursework[i].lab + coursework[i].quiz + coursework[i].assignment + coursework[i].midterm;
	}
	display_report(coursework);
	return 0;
}

float get_assignment(float assignment)
{
	assignment = assignment/80*15;
	return assignment;
}

float get_midterm(float midterm)
{
	midterm = midterm/50*15;
	return midterm;
}

void display_report(struct Student coursework[])
{
	int i,count=0; 
	
	printf("--------------------------------------\n");
	printf("\tCOURSEWORK GRADE A\n");
	printf("--------------------------------------\n");	
	
	for(i=0;i<3;i++)
	{
		if(coursework[i].total>=40 && coursework[i].total<=50)
		{
			printf("Student ID	: %s\n",coursework[i].ID);
			printf("Coursework mark	: %.2f\n\n",coursework[i].total);
			count++;
		} 
	}
	printf("Total number of students with grade A : %d",count); 
}	

