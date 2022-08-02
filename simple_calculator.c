#include <stdio.h>
void main ()
{
      int a;
      int b;
      int choice;
      int answer;

	printf("hello! can you please type two numbers\n");
	scanf ("%d", &a);
	printf ("can you type second number\n");
	scanf ("%d" , &b);
	printf ("can you choose which opration would you like to do\n");
    printf ("1 for add\n");
    printf("2 for substract\n");
    printf ("3 for multiply\n");
    printf ("4 for divide\n");
    scanf ("%d" , &choice);
	if (choice == 1);
	{
        
        answer = a+b;
       printf ("answer=%d" , answer"\n");
	}
	else{

if (choice == 2);
	      {
        
        answer = a-b;
    printf ("answer=%d" , answer"\n");
	      }
	      else{

if (choice == 3);
	    {
        
        answer = a*b;
     printf ("answer=%d" , answer"\n");
	    }

          else{
if (choice == 4);
	      {
        
        answer = a/b;
printf ("answer=%d" , answer"\n");
	      }
  }
}
    }
}
