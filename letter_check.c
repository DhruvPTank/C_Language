#include <stdio.h>
void main ()
{
	char a;


	printf("enter a charcter\n");
	scanf ("%c" , &a);

	if (a>=65 && a<= 90)
	{
		printf ("you entered a upper case letter");
	}
	if(a >=90 && a<= 122)
	{
		printf("you entered a lower letter");
	}
	else
	{
		printf("you entered somthing other");
	}

}