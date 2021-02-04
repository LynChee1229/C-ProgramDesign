#include<stdio.h>

int main()
{
	FILE *fread;
	int id; float salary,epf,socso,epf_deduct,socso_deduct,net_salary;
	
	fread = fopen("salary_file.txt","r");
	
	if(fread==NULL)
	{
		printf("File cannot be accessed!");
		exit(1);
	}
	else
	{
		while(!feof(fread))
		{
			fscanf(fread,"%d %f %f %f",&id,&salary,&epf,&socso);
			epf_deduct = epf/100 * salary;
			socso_deduct = socso/100 * salary;
			net_salary = salary - epf_deduct - socso_deduct;
			
			printf("Staff No	: %d\n",id);
			printf("Salary		: RM %.2f\n",salary);
			printf("EPF Amount	: RM %.2f\n",epf_deduct);
			printf("SOCSO Amount	: RM %.2f\n",socso_deduct);
			printf("Net Salary	: RM %.2f\n\n",net_salary);
		}
	}
	fclose(fread);
	return 0;
}
