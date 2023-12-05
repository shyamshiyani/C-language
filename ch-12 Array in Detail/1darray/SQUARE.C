#include<stdio.h>
#include<conio.h>

main()
{

	int i,n,a[100],s;

	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	a[i]=a[i]*a[i];
	}
	printf("The squares are:\n");
	for(i=0;i<n;i++)
	{
	printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}