#include<stdio.h>
#include<conio.h>

main()
{
	float c,f;
	clrscr();

	printf("Enter the tamprature in celsius=");
	scanf("%f",&c);

	f=(c*9/5)+32;

	printf("The temprature in fahrenheit=%.2f",f);
	getch();

}
