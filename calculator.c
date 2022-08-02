#include <stdio.h>
int main()
{
	int a;
	int b;
	int sum;
	int divide;
	int multi;
	int substract;
	
	ch=getchar();

	printf ("enter the value of a\n");
	scanf ("%d" , &a);

      printf ("enter the value of b\n");
      scanf ("%d" , &b);

      printf ("which process would you like to do for a and b.\n");
      printf ("1.sum\n");
      printf ("2.substract\n");
      printf ("3.multiplication\n");
      printf ("4.divide\n");

      if(ch==1)
      	sum=a+b;
      printf("sum of a and b is\n");
      printf("%d",&sum);

       if(ch==2)
       substract=a-b;
      printf("substraction of a and b is\n");
      printf("%d",&substract);
      
        if(ch==3)
       multi=a*b;
      printf("multipliction of a and b is\n");
      printf("%d",&multi);
       
       if(ch==4)
       divide=a/b;
      printf("divide of a and b is\n");
      printf("%d",&divide);


     
}