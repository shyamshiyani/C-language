#include<stdio.h>
main()
{
	int n;

	printf("Enter the size of array=");
	scanf("%d",&n);
	
int i,a[n],*array[n];
	
printf("Enter the array's elemenet:\n");
	
for(i=0;i<n;i++)
	{
		array[i]=&a[i];
		printf("a[%d]=",i);
		scanf("%d",&*array[i]);
	}
	
printf("Reversed array elements:\n");
		
for(i=n-1;i>=0;i--)
	{
		printf("%d\n",*array[i]);
	}
}
