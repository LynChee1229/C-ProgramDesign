#include<stdio.h>

int main()
{ 
	int list[4]={1,2,3,4};
	int x, *p=list;		//p-->[0] = 1
	
	list[2] = 5;
	for(x=0;x<4;x++)
		printf("%d ", list[x]);		// {1,2,5,4}.
	printf("\n");
	
	*(p+2)=7;			//p-->[0+2]=[2] = 7
	for(x=0;x<4;x++)
		printf("%d ", list[x]);		// {1,2,7,4}.
	printf("\n");
	
	p[2]=6;				//p[2]-->list[2] = 6
	for(x=0;x<4;x++)
		printf("%d ", list[x]);		// {1,2,6,4}.
	printf("\n");
	
	*(list+2)=5;		//list[0+2]=[2]= 5
	for(x=0;x<4;x++)
		printf("%d ", list[x]);		// {1,2,5,4}.
	printf("\n");

	return 0;
}

/*	Output:
	1 2 5 4
	1 2 7 4
	1 2 6 4
	1 2 5 4
*/




