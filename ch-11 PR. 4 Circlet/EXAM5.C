#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(c=4;c>=a;c--)
		{
			printf("  ");
		}
		for(b=a;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}

	getch();

}
