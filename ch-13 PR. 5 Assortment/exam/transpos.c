#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,n,a[100][100],b[100][100];
	clrscr();,

	printf("enter the array's row & column=");
	scanf("%d",&n);

	printf("enter  array a's element=\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("transpose matrix of an array:\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	getch();
}



