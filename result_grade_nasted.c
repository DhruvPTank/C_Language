#include <stdio.h>
void main ()
{
	int physics, chemistry, maths, Total;
	float persentage;
	 printf("enter the marks of physics\n");
	 scanf("%d" , &physics);

	 printf("enter the marks of chemistry\n");
	 scanf("%d" , &chemistry);

	 printf("enter the marks of maths\n");
	 scanf("%d" , &maths);

	 Total=physics+chemistry+maths;
	 printf("\nTotal=%d" , Total);
	
	 persentage=Total/3;
	 printf("\npersentage=%f" , persentage);

	 if(physics<35)
	 {
	 	printf("you failed in physics\n");
	 }

	 if(chemistry<35)
	 {
	 	printf("you failed in chemistry\n");
	 }
	 
 if(maths<35)
	 {
	 	printf("you failed in maths");
	 }
	  
		

	 if(persentage>90)
	 {
	 	printf("you get A+ grade\n");
	 }


	 else if (persentage>80)
	 {
	 	printf("you get A grade\n");
	 }


	 else if (persentage>70)
	 {
	 	printf("you get B+ grade\n");
	 }


	 else if (persentage>60)
	 {
	 	printf("you get B grade\n");
	 }


	 else if (persentage>50)
	 {
	 	printf("you get C+ grade\n");
	 }


	 else if (persentage>40)
	 {
	 	printf("you get C grade\n");
	 }


	 else
	 {
	 	printf("sorry you failed\n");
	 }
}