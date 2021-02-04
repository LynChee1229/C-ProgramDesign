#include<stdio.h>

void que88(int *p, int *q)	//*p--x=5 ; *q--y=10
{
	int temp;
	printf("\nin function que88: *p : %d, *q : %d ", *p, *q);	// 5, 10.
	temp = *p;	//temp=*p--x = 5
	*p = *q;	//*p=*q--y= 10  while x=10
	*q = temp;	//*q--y = 5
}

int main()
{ 
	int x=5, y=10;
	printf("\nMain: x : %d, y : %d ", x, y);	// 5, 10.
	que88(&x,&y);
	printf("\nMain: x : %d, y : %d ", x, y);	// 10, 5.
	
	return 0;
}


