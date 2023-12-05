#include<stdio.h>
#include<conio.h>

main()
{

	int i;

	int  n,a[100],b[100],c[100];

	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);
	printf("Enter array A's elements\n");
	for(i=1;i<=n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	printf("Enter array B's elemnets\n");
	for(i=1;i<=n;i++)
	{
	printf("b[%d]=",i);
	scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
	c[i]=a[i]+b[i];
	}
	printf("Array c's elemnets\n");
	for(i=1;i<=n;i++)
	{
	printf("c[%d]=%d\n",i,c[i]);
	}
	getch();



}
