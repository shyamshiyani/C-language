#include<stdio.h>
#include<conio.h>

main()
{

	int i,j,c,r,a[100][100],b[100][100],ab[100][100],sum=0;

	clrscr();

	printf("Enter the array's row size=");
	scanf("%d",&r);
	printf("Enter the array's column size=");
	scanf("%d",&c);

	printf("Array A's elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}

	printf("Array B's elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		ab[i][j]=a[i][j]+b[i][j];
		}

	}
	printf("array C is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%2.0d ",ab[i][j]);
		}
		printf("\n");
	}

	getch();
}

