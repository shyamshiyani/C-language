
#include<stdio.h>


main()
{
	int i,a[100],n,j,k;


	printf("enter the size of an array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the elements of array a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	printf("decending order of an array=");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}


