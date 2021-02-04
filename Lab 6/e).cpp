#include<stdio.h>

int main()
{ 
	int *ptr;
	int x=7;
	
	ptr = &x;	//ptr--x = 7
	*ptr = 0;	//ptr--x = 0
	printf(" x = %d\n", x);			// 0.
	printf(" *ptr = %d\n", *ptr);	// 0.
	
	*ptr += 15;	//ptr--x=x+15 = 15
	printf(" \nx = %d\n", x);			// 15.
	printf(" *ptr = %d\n", *ptr);	// 15.
	
	(*ptr)++;	// 16
	printf(" \nx = %d\n", x);			// 16.
	printf(" *ptr = %d\n", *ptr);	// 16.

	return 0;
}


