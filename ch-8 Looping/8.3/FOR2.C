#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;

	clrscr();

	printf("Enetr the number=");
	scanf("%d",&n);

	for(i=0	;i<=n;i++)
	{
	sum=sum+i;
	}
	printf("The sum of all numbers is=%d",sum);
	getch();

}
