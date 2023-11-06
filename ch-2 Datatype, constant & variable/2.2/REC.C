#include<stdio.h>
#include<conio.h>

main()
{
	float area,width,height;
	clrscr();

	printf("Enter the value of width=");
	scanf("%f",&width);
	printf("Enter the value of height=");
	scanf("%f",&height);

	area=width*height;
	printf("area of a rectangle=%.2f",area);
	getch();
}