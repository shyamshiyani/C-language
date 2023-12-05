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
		printf(" ");
		}
		for(j=i;j<=5;j++)
		{
		printf("%d",i);
		}
	printf("\n");
	}
       getch();
}