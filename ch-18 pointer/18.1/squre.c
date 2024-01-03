#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the size of an array=");
	scanf("%d",&n);
	
	int a[n],i,sum;
	int *array[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		array[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=(*array[i])*(*array[i]);
	}
	printf("Square of each element:\n");
	for(i=0;i<n;i++)
	{
			printf("%d\n",a[i]);	
	}	

	
	
}
