	#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("can you type a number\n");
	scanf ("%d" , &a);
	printf ("can you type a second number\n");
	scanf ("%d" , &b);
	if(a>b)
	{
   printf("a is greater than b\n");
	}
	else {
		if(a<b)
			{
			printf("b is greatar than a\n");
			}
		else
		{
			printf("both are equal");
		}
	}
}