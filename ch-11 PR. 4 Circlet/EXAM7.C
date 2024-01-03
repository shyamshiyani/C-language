#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==2 && (b>1 && b<5) || a==4 && (b>1 && b<5) || a==5 && (b>1 && b<5))
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}

	getch();

}

