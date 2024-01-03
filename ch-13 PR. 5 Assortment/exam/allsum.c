#include<stdio.h>
#include<conio.h>

main()
{
	int a[100][100],i,j,r,c,ro,co,rsum=0,csum=0;
	clrscr();

	printf("enter the array's row size=");
	scanf("%d",&r);

	printf("enter the array's column size=");
	scanf("%d",&c);

	printf("enter array's element=\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter row number=");
	scanf("%d",&ro);

	printf("elements of row [%d]= ",ro);

	for(j=0;j<c;j++)
	{
		printf("%d ",a[ro][j]);
		rsum=rsum+a[ro][j];
	}
	printf("\nsum of row [%d]= %d\n",ro,rsum);

	printf("enter column number=");
	scanf("%d",&co);

	printf("elements of column [%d]=",co);

	for(i=0;i<r;i++)
	{
		printf("%d ",a[i][co]);
		csum=csum+a[i][co];
	}
	printf("\nsum of column [%d]= %d\n",co,csum);

	getch();
}













