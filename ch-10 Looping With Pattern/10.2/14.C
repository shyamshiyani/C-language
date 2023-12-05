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
		for(j=1;j<=i;j++)
		if((i+j)%2)
		{
		printf("0");
		}
		else
		{
		printf("1");
		}
	printf("\n");
	}
       getch();
}