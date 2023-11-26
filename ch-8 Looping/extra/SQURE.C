#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,i,sq;

	clrscr();

	printf("enter the value=");
	scanf("%d",&a);
	printf("enter the value=");
	scanf("%d",&b);
	sq=1;
	for(i=1;i<=b;i++)
	{
		sq=sq*a;
		printf("%d ",sq);
	}
	getch();
}