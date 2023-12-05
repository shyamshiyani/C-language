#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enetr the value=");
	scanf("%d",&a);

	if(a<0)
	{
	printf("this is negative number");
	}
	else if(a>0)
	{
	printf("this is positive number");
	}
	else
	{
	printf("this is neutral number");
	}

	getch();
}