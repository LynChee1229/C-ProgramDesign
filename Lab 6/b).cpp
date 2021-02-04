#include<stdio.h>

int main()
{
	int a = 2, b = 4, c = 6;
	int *p1, *p2, *p3;
	
	p1 = &b;		//p1--b = 4
	p2 = &c;		//p2--c = 6
	p3 = p2;		//p3=p2--c = 6
	printf("\n %d %d %d", *p1, *p2, *p3);	// 4,6,6.
	
	*p2 *= *p1;		//p2--c=c*(p1--b)=6*4 , so p2--c = 24 
	
	if (*p2 < 24)	//false
	{
	 *p1 += *p3;
 	--(*p3);
	}
	
	printf("\n %d %d %d", *p1, *p2, *p3);	// 4,24,24.
	printf("\n %d %d %d\n", a, b, c); 		// 2,4,24.
	
	return 0;
}
