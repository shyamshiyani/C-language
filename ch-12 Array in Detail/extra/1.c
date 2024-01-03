#include<stdio.h>


main()
{
	int a[100],i,n,max;


	printf("enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the element=");
		scanf("%d",&a[i]);
	}
	max=a[0];

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("the maximum value is=%d",max);


}


