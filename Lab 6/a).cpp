#include<stdio.h>

int main()
{
	int m=5, n=2, *ptr;
	
	ptr = &n;			//ptr--n = 2
	m = ++*ptr % 3;		//m=3%3= 0 while n=3
	n = m + n * *ptr;	//n=0+3*3 = 9
	
	printf("m = %d\n",m);		// 0. 
	printf("n = %d\n",n);		// 9.
	printf("*ptr = %d\n",*ptr);	// 9.
	
	return 0;
}
