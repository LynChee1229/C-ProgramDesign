#include<stdio.h>
int main()
{
	int length, x, height, y;
	
	printf("Enter the length of the box : ");
	scanf("%d",&length);
	printf("Enter the height of the box : ");
	scanf("%d",&height);
	
	for(y=1; y<=height; y++)
	{
		printf("\n# ");
		
		for(x=1; x<length; x++)
			printf("# ");
	}
	
	return 0 ;
}
