#include<stdio.h>

int main()
{ 

	int numbers[]={10,8,34,100,3,12,14,7};
	int *a, *b;
	
	a = &numbers[3];	//a--[3] = 100
	b = numbers;		//b=[0] = 10
	
	printf("\n %d", *a + *b);			// 100+10 = 110.
	printf("\n %d", *a-- - ++*b);		// 100-11 = 89.		while a=[3-1]=[2] ; b=11
	printf("\n %d", *(a+2) + *b+15);	// [2+2]+11+15=[4]+26=3+26 = 29. 

	return 0;
}


