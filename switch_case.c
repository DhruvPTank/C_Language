#include <stdio.h>
void main()
{
	int a;
	printf("Enter the value of a between 1 and 7\n");
	scanf("%d" , &a);

	switch (a)
	{
		case 1 :
		printf("Today is Monday");
		break;

	
		case 2 :
		printf("Today is Tuesday");
		break;


		case 3 :
		printf("Today is Wednesday");
		break;

	
		case 4 :
		printf("Today is Thursday");
		break;


		case 5 :
		printf("Today is Friday");
	    break;


		case 6 :
		printf("Today is Saturday");
        break;

	
		case 7 :
		printf("Today is Sunday");
		break;

       default :

       printf("Enter the valid number");
}
	
	}
