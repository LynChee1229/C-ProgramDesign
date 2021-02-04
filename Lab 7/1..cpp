#include<stdio.h>
struct Area{
	float width,height,area;
};

float get_area(float width,float height);

int main()
{
	struct Area rectangle[3];
	int i=0;
	
	while(i<3)
	{
		printf("Enter width and height for rectangle %d (in m): ",i+1);
		scanf("%f %f",&rectangle[i].width,&rectangle[i].height);
		rectangle[i].area = get_area(rectangle[i].width,rectangle[i].height);
		i++;
	}
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
	printf("Area of rectangle %d with %.2f by %.2f width and height is %.2f metre square \n",i+1,rectangle[i].width,rectangle[i].height,rectangle[i].area);
	}
	
	return 0;
}

float get_area(float width,float height)
{
	float area;
	area = width*height;
	return area;
}
