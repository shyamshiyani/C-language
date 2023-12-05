#include<stdio.h>
#include<conio.h>

main()

{
	int i,s,k;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}