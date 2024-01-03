
#include<stdio.h>


main()
{
	int a[100],i,n,j=0,k=0;

	printf("enter the size of an array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the elements of array a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>j)
		{
			k=j;
			j=a[i];
		}
		else if(a[i]>k && a[i]<j)
		{
			k=a[i];
		}
	}
	printf("the second largest number in array is=%d\n",k);


}

