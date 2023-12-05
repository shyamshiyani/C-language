#include<stdio.h>
#include<conio.h>

main()
{

	int i,n,a[100],c=0;

	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	c++;
	}
	printf("length of Array=%d",c);
	getch();


}