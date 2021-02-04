#include<stdio.h>

struct Record{
	char prodid[10],status[20];
	float rating[3];
};

char* get_status(float average);

int main()
{
	struct Record product[4];
	FILE *fwrite;
	int i=0,x;
	
	fwrite = fopen("product_rating.txt","w");
	
	while(i<4)
	{
		float total=0,average=0;
		
		printf("Enter product ID	: ");
		scanf("%s",product[i].prodid);
		
		for(x=0;x<3;x++)
		{
			printf("Enter product rating %d	: ",x+1);
			scanf("%f",&product[i].rating[i]);
			
			if(product[i].rating[i]<1 || product[i].rating[i]>5)
			{
				printf("\tRating must between 1 and 5.\n");
				printf("Enter product rating %d	: ",x+1);
				scanf("%f",&product[i].rating[i]);
			}
			total = total + product[i].rating[i];
			average = total/(x+1);
		}
		strcpy(product[i].status,get_status(average));
		fprintf(fwrite,"\n%s \t%.2f \t%s",product[i].prodid,average,product[i].status);
		printf("\n");
		i++;
	}
	fclose(fwrite);
	return 0;
}

char* get_status(float average)
{
	char status[30];
	
	if(average<2)
		strcpy(status,"Poor");
	else if(average<3)
		strcpy(status,"Satisfactory");
	else if(average<4)
		strcpy(status,"Good");
	else
		strcpy(status,"Excellent");
		
	return status;
}
