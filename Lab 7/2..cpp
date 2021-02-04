#include<stdio.h>
struct Area{
	float width,height,area;
};

void get_area(struct Area rectangle[]);

int main()
{
	struct Area rectangle[3];
	get_area(rectangle);
	return 0;
}

void get_area(struct Area rectangle[])
{
	int i=0;

	while(i<3)
	{
		printf("Enter width and height for rectangle %d (in m): ",i+1);
		scanf("%f %f",&rectangle[i].width,&rectangle[i].height);
		rectangle[i].area = rectangle[i].width * rectangle[i].height;
		i++;
	}
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
	printf("Area of rectangle %d with %.2f by %.2f width and height is %.2f metre square \n",i+1,rectangle[i].width,rectangle[i].height,rectangle[i].area);
	}
}
