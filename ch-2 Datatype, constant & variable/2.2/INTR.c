#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t,interest;

	clrscr();

	printf("enter the amount=");
	scanf("%f",&p);
	printf("enter the rate=");
	scanf("%f",&r);
	printf("enter the time=");
	scanf("%f",&t);

	interest=(p*r*t)/100;

	printf("simple interest=%f",interest);

	getch();

}