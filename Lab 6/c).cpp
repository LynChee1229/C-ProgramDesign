#include<stdio.h>

int main()
{
	int my_array[] = {1, 3, 5, 7, 11, 13, 17, 19};
	int *ptr1, *ptr2, i;
	
	ptr1 = &my_array[2];	//ptr1--[2] = 5
	printf("\n%d", *ptr1 + 3);				// 5+3 = 8.
	printf("\n%d", *(ptr1 + 3));			// [2+3]=[5] = 13.
	
	ptr2 = &my_array[4];	//ptr2--[4] = 11
	printf("\n%d", *ptr1 + *ptr2);			// 5+11 = 16.
	printf("\n%d", *(ptr1) + ++(*ptr2));	// 5+(++11)=5+12 = 17.
	printf("\n%d\n", *(++ptr1) + *ptr2);	//[++2]+12=[3]+12=7+12 = 19. 
	
	return 0;
}
