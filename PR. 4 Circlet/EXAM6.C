#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=2;j<=i;j++)
		{
			printf(" ",j);
		}
		for(k=i;k<=5;k++)
		{
			printf("%d",k);
		}
		for(j=4;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	getch();

}
