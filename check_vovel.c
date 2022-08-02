#include <stdio.h>
void main ()
{
	char M;	
	printf("enter a charcter\n");
	scanf ("%c" , &M);

	if (M=='a' || M=='e' || M=='i' || M=='o' || M=='u' || M=='A' || M=='E' || M=='I' || M=='O' || M=='u')
	{
		printf ("you entered a vovel");
	}
    else
	{
		printf("you entered a consonants");
	}

}