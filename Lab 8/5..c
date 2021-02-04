#include<stdio.h>

struct Recycle{
	char name[50];
	float weight,income;
};

float get_price(float weight);

int main()
{
	struct Recycle person[4];
	FILE *fwrite;
	int i; float price;
	fwrite = fopen("recycle.txt","w");
	
	for(i=0;i<4;i++)
	{
		printf("Enter name	      : ");
		gets(person[i].name);
		printf("Enter material weight : ");
		scanf("%f",&person[i].weight);
		printf("\n");
		
		fflush(stdin);
		
		price = get_price(person[i].weight);
		person[i].income = price * person[i].weight;
		fprintf(fwrite,"\n%s\t %.2fkg\t RM%.2f",person[i].name,person[i].weight,person[i].income);
	}
	fclose(fwrite);
	return 0;
}

float get_price(float weight)
{
	float price;
	
	if(weight<50)
		price = 0.2;
	else if(weight<100)
		price = 0.4;
	else if(weight>=100)
		price = 0.6;
		
	return price;
}
