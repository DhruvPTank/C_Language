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

	 if(persentage>90)
	 {
	 	printf("you get A+ grade\n");
	 }


	 if(persentage>80 && persentage<90 )
	 {
	 	printf("you get A grade\n");
	 }


	 if(persentage>70 && persentage<80 )
	 {
	 	printf("you get B+ grade\n");
	 }


	 if(persentage>70 && persentage<60 )
	 {
	 	printf("you get B grade\n");
	 }


     if(persentage>60 && persentage<50 )
	 {