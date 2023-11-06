#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	float b,h,area;

	clrscr();

	p("enter the value of b=");
	s("%f",&b);
	p("enter the value of h=");
	s("%f",&h);

	area=(b*h/2);

	p("area of triangle=%f",area);

	getch();

}