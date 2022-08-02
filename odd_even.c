#include <stdio.h>
int main()

{
int number;
    int rem;
   printf("enter value of number\n");
   scanf("%d",&number);
   rem=number%2;
   if(rem == 0)
   {
   	printf("you enterd an even number\n");
   }
   else
   {
   	printf("you enterd an odd number\n");
   }
}