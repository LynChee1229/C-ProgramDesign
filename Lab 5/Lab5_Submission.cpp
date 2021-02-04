#include<stdio.h>
float get_min(float array[]);
float get_max(float array[]);
float get_average(float array[]);
void display(float array[]);

int main()
{
	float array[5]={5.67,10.9,2.03,12.08,7.11};
	float min,max,average;
	
	min = get_min(array);
	max = get_max(array);
	average = get_average(array);
	display(array);
	
	printf("\nMinimum rain fall : %.2f ml\n",min);
	printf("Maximum rain fall : %.2f ml\n",max);
	printf("Average rain fall : %.2f ml",average);
	
	return 0;
}

float get_min(float array[])
{
	float min; int i;
	min=array[0];
	
	for(i=0;i<5;i++)
	{
		if(min>array[i])
			min = array[i];
	}
	return min;
}

float get_max(float array[])
{
	float max; int i;
	max=array[0];
	
	for(i=0;i<5;i++)
	{
		if(max<array[i])
			max = array[i];
	}
	return max;
}

float get_average(float array[])
{
	float average, total=0; int i,count=0;
	
	for(i=0;i<5;i++)
	{
		total = total + array[i];
		count=count+1;
	}
	average = total/count ;
	
	return average;
}

void display(float array[])
{
	int i;
	printf("5 months rain fall statistics.\n");
	printf("-------------------------------\n");
	
	for(i=0;i<5;i++)
	{
		printf("Month %d : %.2f ml\n",i+1,array[i]);	
	}
}
