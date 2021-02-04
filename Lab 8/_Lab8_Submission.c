#include<stdio.h>

struct Claims{
	char name[30];
	float mileage, claim;
	int days;
};

float get_mileage_amount(float mileage);
float get_food_claim(int days);
void display_report(struct Claims staff[]);
void file_processing(struct Claims staff[]);

int main()
{
	struct Claims staff[3];
	int i=0;	float mileage_amount,food_claim;
	
	do{
		printf("Enter staff #%d name	: ",i+1);
		scanf("%s",staff[i].name);
		printf("Enter number of days	: ");
		scanf("%d",&staff[i].days);
		printf("Enter mileage in km	: ");
		scanf("%f",&staff[i].mileage);
		printf("\n");
		
		mileage_amount = get_mileage_amount(staff[i].mileage);
		food_claim = get_food_claim(staff[i].days);
		staff[i].claim = mileage_amount + food_claim;
		i++;
	}while(i<3);
	
	display_report(staff);
	file_processing(staff);
	return 0;
}

float get_mileage_amount(float mileage)
{
	float mileage_amount;
	const float Mileage_Rate = 0.70;
	mileage_amount = mileage*Mileage_Rate;
	return mileage_amount;
}

float get_food_claim(int days)
{
	float food_claim;
	const float Food_Rate = 35.00;
	food_claim = days*Food_Rate;
	return food_claim;
}

void display_report(struct Claims staff[])
{
	int i, num_ofClaim=0;		float sum_ofClaim=0;
	printf("\n------------------------------\n");
	printf("\tCLAIM REPORT\n");
	printf("------------------------------\n\n");
	
	for(i=0;i<3;i++)
	{
		if(staff[i].claim > 150)
		{
			printf("Staff #%d name	: %s\n",i+1,staff[i].name);
			printf("Staff's claim	: RM %.2f\n\n",staff[i].claim);
			num_ofClaim++;
			sum_ofClaim = sum_ofClaim + staff[i].claim;
		}
	}
	printf("Total claims above RM 150.00		: %d\n",num_ofClaim);
	printf("Sum of total claims above Rm 150.00	: RM %.2f\n",sum_ofClaim);
}

void file_processing(struct Claims staff[])
{
	FILE *fptr;	int i;
	fptr = fopen("claims_file.txt","w");
	
	for(i=0;i<3;i++)
	{
		fprintf(fptr,"\n\nStaff #%d\n",i+1);
		fprintf(fptr,"Name	: %s\n",staff[i].name);
		fprintf(fptr,"Claims	: RM %.2f",staff[i].claim);
	}
	fclose(fptr);
}
