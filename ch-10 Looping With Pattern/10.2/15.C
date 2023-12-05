#include<stdio.h>
#include<conio.h>

main()

{

	int i,j,k;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j<=4;j++)
		{
		printf(" ");
		}
		for(k=i;k>=1;k--)
		{
		printf("%d",k);
		}
		printf("\n");
	}
	getch();

}