#include<stdio.h>
#include<string.h>
char* confirmpassword(char password[],char confirmPassword[]);

int main()
{
	char password[30], confirmPassword[30], status[15];
	int length,i;
	
	for(i=0;i<2;i++)
	{
		printf("Enter your password    : ");
		gets(password);
		length = strlen(password);
	
		while(length<8)
		{
			printf("Your password is too short!\n\n");
			printf("Enter another password : ");
			gets(password);
			length = strlen(password);
		}
	
		printf("Re-enter password      : ");
		gets(confirmPassword);
	
		strcpy(status,confirmpassword(password,confirmPassword));
		printf("Password status        : %s\n\n",status);
	}
	
	return 0;
}

char* confirmpassword(char password[],char confirmPassword[])
{
	char status[15];
	if (strcmp(password,confirmPassword)==0)
		strcpy(status,"Matched!");
	else
		strcpy(status,"Not Matched!");
		
	//return status;
}
