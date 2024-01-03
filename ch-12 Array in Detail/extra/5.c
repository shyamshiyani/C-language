
#include<stdio.h>


main()
{
	int a[100][100],i,j,r,c,sum=0;


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
	for(i=0,j=2;i<3,j>=0;i++,j--)
	{
		sum=sum+a[i][j];
	}
	printf("the sum of anti-diagonal elements of an array=%d",sum);


}

