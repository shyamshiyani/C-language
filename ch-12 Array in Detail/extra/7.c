#include<stdio.h>


main()
{
	int a[100][100],i,r,c,j,sum=0;


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
	printf("The inner elements of array=\n");
	for(i=1;i<r-1;i++)
	{
		for(j=1;j<c-1;j++)
		{
			printf("%.2d ",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("sum of inner elements=%d\n",sum);


}





