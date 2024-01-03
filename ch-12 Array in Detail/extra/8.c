#include<stdio.h>

main()
{
	int a[100][100],i,j,max,r,c;


	printf("enter the size of row=");
	scanf("%d",&r);

	printf("enter the size of column=");
	scanf("%d",&c);

	printf("enter the elements of the array=\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("maximum number is the array=%d\n",max);


}


