#include<stdio.h>
#include<conio.h>

main()

{

	int i,j,k;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j>=2;j--)
		{
		printf(" ");
		}
		for(k=5;k>=i;k--)
		{
		printf("%d",k);
		}
		printf("\n");
	}
	getch();

}