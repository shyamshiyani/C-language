#include<stdio.h>
#include<conio.h>

main()
{
	int a=15,b=10;

	clrscr(),

	printf("addition of %d and %d is=%d\n",a,b,a+b);
	printf("subtraction of %d and %d is=%d\n",a,b,a-b);
	printf("multiplication of %d and %d is=%d\n",a,b,a*b);
	printf("division of %d and %d is=%d\n",a,b,a/b);
	printf("modular of %d and %d is=%d\n",a,b,a%b);

	printf("--------------------------\n");

	printf("||\t%d+%d=%d\t||\n",a,b,a+b);
	printf("||\t%d-%d=0%d\t||\n",a,b,a-b);
	printf("||\t%d*%d=%d\t||\n",a,b,a*b);
	printf("||\t%d/%d=0%d\t||\n",a,b,a/b);
	printf("||\t%d%%%d=0%d\t||\n",a,b,a%b);

	printf("--------------------------\n");

	getch();




}