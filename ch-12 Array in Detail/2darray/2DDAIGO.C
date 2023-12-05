#include<stdio.h>
#include<conio.h>

main()
{

	int cr,i,j,a[100][100],sum=0;

	clrscr();

	printf("Enter the Array's row and column size=");
	scanf("%d",&cr);

	for(i=0;i<cr;i++)
	{
		for(j=0;j<cr;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Array A's element:\n");
	for(i=0;i<cr;i++)
	{
		for(j=0;j<cr;j++)
		{
		printf("%2d ",a[i][j]);
		}
	printf("\n");
	}
	for(i=0,j=0;i<cr;i++,j++)
	{
	sum=sum+a[i][j];
	}
	printf("The sum of diagonal elements=%d",sum);
	getch();
}