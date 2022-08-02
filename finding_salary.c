#include <stdio.h>
void main()
{
	int Basic_salary;
	float hra;
	float da;
	float Gross_salary;

	printf("Enter your Basic_salary\n");
	scanf("%d" , &Basic_salary);

	if (Basic_salary>=10000 && Basic_salary<=20000)
	{
		da=(Basic_salary*80)/100;
		hra=(Basic_salary*20)/100;
		Gross_salary=da+hra+Basic_salary;
		printf("\n Gross_salary=%f" , Gross_salary);

	
	}

	if (Basic_salary>=20000 && Basic_salary<=30000)
	{
		da=(Basic_salary*90)/100;
		hra=(Basic_salary*25)/100;
		Gross_salary=da+hra+Basic_salary;
		printf("\n Gross_salary=%f" , Gross_salary);

	
	}

	if (Basic_salary>=30000)
	{
		da=(Basic_salary*95)/100;
		hra=(Basic_salary*30)/100;
		Gross_salary=da+hra+Basic_salary;
		printf("\n Gross_salary=%f" , Gross_salary);

	
	}
}