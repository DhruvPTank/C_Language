#include <stdio.h>
void main ()
{
	int a;
	printf("Enter the value of a");
	scanf ("%d" , &a);

	if(a>=65 && a<= 90 || a >=90 && a<= 122)
{
  printf("you entered alphabet");
}

if(a>=48 && a<=57)
{
  printf("you entered alphabet");
}
else
{
	printf ("you entered a spacial charcter");
}
	
}