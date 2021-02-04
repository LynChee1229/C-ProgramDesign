#include<stdio.h>
void display(int rate);

int main()
{
	int rating[4],x;
	
	for(x=0;x<4;x++)
	{
		printf("Rate product %d : ",x+1);
		scanf("%d",&rating[x]);
	}
	
	int y=0;
	do{
		printf("\nProduct %d : ",y+1);
		display(rating[y]);
		y++ ;
	}while(y<4);
	
	return 0;
}

void display(int rate)
{
	int i=0;
	while(i<rate)
	{
		printf("*");
		i++ ;
	}
}
