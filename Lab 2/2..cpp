#include<stdio.h>

int main()

{
	char name[50];
	int id;
	
	printf("Enter name	:");
	//scanf("%s",name); //take until space bar
	gets(name); //take all input until enter key
	printf("Enter id	:");
	scanf("%d",&id);
	
	printf("\n\tStudent name	: %s",name);
	printf("\n\tStudent id	: %d",id);
	
	return 0;
}
