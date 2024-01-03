#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,r,c,a[100][100];

	clrscr();

	printf("Enter the array's row size=");
	scanf("%d",&r);
	printf("Enter the array's column size=");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[0][0]<a[i][j])
			{
			a[0][0]=a[i][j];
			}
		}

	}
	printf("Largest  element of array=%d",a[0][0]);
	getch();

}
