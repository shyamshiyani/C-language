#include<stdio.h>
#include<conio.h>

main()
{

	int i,j,sum=0,a[5][5];

	clrscr();

	printf("Enter array's elements:\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}

	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(i==0 || j==0 || i==4 || j==4)
		{
		printf("%0d",a[i][j]);
		sum=sum+a[i][j];
		}
		else
		{
		printf(" ");
		}
		}

	printf("\n");
	}
	printf("\nthe sum of boundary number is=%d",sum);
	getch();


}