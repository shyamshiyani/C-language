#include<stdio.h>


main()
{
	int i,n,a[100][100],sum=0,j,r,c;


	printf("enter the size of row=");
	scanf("%d",&r);

	printf("enter the size of column=");
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
		sum=sum+a[i][i];
		sum=sum+a[i][r-1-i];
	}
	if(r%2==1)
	{
		sum=sum-a[r/2][r/2];
	}
	printf("sum of cross diagonal elements=%d\n",sum);

	getch();
}

