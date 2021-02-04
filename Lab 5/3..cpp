#include<stdio.h>

int main()
{
	float array[4][5]={{2.3,4,5},{3,2.1,1,4},{1,2,3,4,5},{4,2.5}};
	int x,y;
	
	for(x=0;x<4;x++)
	{
		float total=0, average=0; int count=0;
		
		for(y=0;y<5;y++)
		{
			if(array[x][y] != 0)
			{
				count = count + 1;
				total = total + array[x][y];
			}
			average = total/count;
		}
		printf("Product %d : %.2f",x+1,average);
		printf("\n\n");	
	}
	return 0;
}
