#include<stdio.h>
#define EPF_DEDUCTION 0.11
#define SOCSO_DEDUCTION 0.01

int main()

{
	float salary, epf, socso, nettsalary;
	
	printf("Enter your salary : RM ");
	scanf("%f",&salary);
	
	epf = salary * EPF_DEDUCTION ;
	socso = salary * SOCSO_DEDUCTION ;
	nettsalary = salary - epf - socso ;
	
	printf("\nSalary		: RM %.2f ",salary );
	printf("\nEPF		: RM %.2f ",epf );
	printf("\nSOCSO		: RM %.2f ",socso );
	printf("\nNett Salary	: RM %.2f ",nettsalary );
	
	return 0;
}
