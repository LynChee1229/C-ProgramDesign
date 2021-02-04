#include<stdio.h>
#include<math.h>

int main()
{
	int array[3][5];
	int x,y; 
	
	int a=2;
		
	for(x=0;x<3;x++)
	{
		for(y=0;y<5;y++)
		{
			array[x][y] = pow(a,y+1);
			printf("%d\t",array[x][y]);
		}
		a++ ;
		printf("\n");
	}
	return 0;
}
