#include<stdio.h>
#include<math.h>
#include<string.h>
float Get_bmi(float height,float weight);
char* Get_status(char gender,float bmi);

int main()
{
	char name[50]; char gender; char *status[20];
	float height, weight, bmi;
	
	char answer='Y';
	
	while(answer=='Y'||answer=='y')
	{
	fflush(stdin);
	
	printf("Please enter your name	        : ");
	gets(name);
	printf("Enter your height in meters	: ");
	scanf("%f",&height);
	printf("Enter your weight in kilograms	: ");
	scanf("%f",&weight);
	fflush(stdin);
	printf("Enter [M] or [F] for gender	: ");
	scanf("%c",&gender);
	
	bmi = Get_bmi(height,weight);	
	*status = Get_status(gender,bmi);
	
	printf("\n%s, your height is %.2f m and your weight is %.2f kg.\n",name,height,weight);
	printf("Your BMI is %.2f, thus you are %s.\n\n",bmi,*status);

	fflush(stdin);
	printf("Enter [Y] to continue : ");
	scanf("%c",&answer);
	printf("\n");
	}
}

float Get_bmi(float height, float weight)
{
	float bmi;
	bmi = weight/pow(height,2);
	return bmi;
}

char* Get_status(char gender,float bmi)
{
	char status[20];
	
	switch(gender)
	{
	case 'M' :
	case 'm' : 	if(bmi<20.7)
					strcpy(status,"Underweight");
				else if(bmi<25.6)
					strcpy(status,"Normal");
				else if(bmi<32.3)
					strcpy(status,"Overweight");
				else
					strcpy(status,"Obese");
				break;
	case 'F' :
	case 'f' : 	if(bmi<19.9)
					strcpy(status,"Underweight");
				else if(bmi<25.3)
					strcpy(status,"Normal");
				else if(bmi<36.0)
					strcpy(status,"Overweight");
				else
					strcpy(status,"Obese");
				break;
	}
	return status;
}


