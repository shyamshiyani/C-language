#include<stdio.h>
#include<conio.h>


main()
{

	int i,j,r,c,a[100][100];

	clrscr();
	printf("Enter the Array's row size=");
	scanf("%d",&r);
	printf("Enter the Array's coulmn size=");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Negetive number form array= ");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
		if(a[i][j]<0)
		printf("%d ",a[i][j]);
		}
	}
	getch();
}
