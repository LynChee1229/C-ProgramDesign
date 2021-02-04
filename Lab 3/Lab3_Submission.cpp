#include<stdio.h>

int main()
{
	char answer; char name[50];	int frequency; int client=0;
	float donation, total_donation, overall_donation;
	
	printf("Donation from clients? [Enter Y to continue] : ");
	scanf("%c",&answer);
	
	while(answer=='Y' || answer=='y')
	{
		++client;
		
		printf("\nEnter client's name		: ");
		scanf("%s",name);
		printf("Enter frequency of donation	: ");
		scanf("%d",&frequency);
		
		int count=1; total_donation=0;
		do{
			printf("Enter the amount of donation	: RM ");
			scanf("%f",&donation);
			total_donation = total_donation + donation ;
			count++ ;
		} while(count<=frequency);
		
		printf("\nTotal donation from %s : RM %.2f\n",name,total_donation);
		
		overall_donation = overall_donation + total_donation;
		
		fflush(stdin);
		
		printf("\nDonation from clients? [Enter Y to continue] : ");
		scanf("%c",&answer);
	}
	
	printf("\nTotal Clients		: %d\n",client);
	printf("Total Donations		: RM %.2f",overall_donation);
	
	return 0;
}
