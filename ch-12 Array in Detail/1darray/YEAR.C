#include<stdio.h>
#include<conio.h>

main()
{

	int n,m,o=0,i,a[100];

	clrscr();

	printf("Enter the starting year=");
	scanf("%d",&n);
	printf("Enter the ending year=");
	scanf("%d",&m);

	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		{
		a[o]=i;
		o++;
		}
	}
	for(i=0;i<o;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();

}