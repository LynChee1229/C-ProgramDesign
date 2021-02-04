#include<stdio.h>
#include<string.h>
char* get_status(float cgpa);

int main()
{
	FILE *fread;
	int id,fail=0,pass=0,credit=0,distinction=0; 
	float cgpa; char status[30];
	
	fread = fopen("student_file.txt","r");
	
	if(fread==NULL)
	{
		printf("File cannot be accessed!");
		exit(1);
	}
	else
	{
		while(!feof(fread))
		{
			fscanf(fread,"%d %f",&id,&cgpa);
			strcpy(status,get_status(cgpa));
			
			if(strcmp(status,"Fail")==0)
				fail = fail+1;
			else if(strcmp(status,"Pass")==0)
				pass = pass+1;
			else if(strcmp(status,"Credit")==0)
				credit = credit+1;
			else if(strcmp(status,"Distinction")==0)
				distinction = distinction+1;
			
			printf("Student ID	: %d\n",id);
			printf("Status		: %s\n\n",status);
		}
		printf("\nStudent with Fail status	: %d\n",fail);
		printf("Student with Pass status	: %d\n",pass);
		printf("Student with Credit status	: %d\n",credit);
		printf("Student with Distinction status	: %d",distinction);
	}
	fclose(fread);
	return 0;
}

char* get_status(float cgpa)
{
	char status[50];
	
	if(cgpa>=0 && cgpa<2)
		strcpy(status,"Fail");
	else if(cgpa>=2 && cgpa<2.5)
		strcpy(status,"Pass");
	else if(cgpa>=2.5 && cgpa<3.5)
		strcpy(status,"Credit");
	else if(cgpa>=3.5 && cgpa<=4)
		strcpy(status,"Distinction");
		
	return status;
}
