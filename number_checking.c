	#include <stdio.h>
int main()
{
	int a;
	printf("can you type a number\n");
	scanf ("%d" , &a);
	if(a>0)
	{
   printf("you enterd an positive number\n");
	}
	else {
		if(a<0)
			{
				printf("you enterd a negative number\n");
		}
		else
		{
			printf("you enterd zero");
		}
	}
}