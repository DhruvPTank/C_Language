	#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("can you type a number\n");
	scanf ("%d" , &a);
	printf ("can you type a second number\n");
	scanf ("%d" , &b);
	printf ("can you type third number\n");
	scanf ("%d" , &c);
	if(a>b)
	{
        if (a>c)
        
        {
        	printf ("a is greatest");
        }
        	else 
        	{
        		printf("c is greatest");
        	}
        
  	}
	else {
		if(a<b)
			{
				if (b>c)
				{
					printf ("b is gratest");
				}
			}
		else
		{
			printf("c is greater");
		}
		
	}
}