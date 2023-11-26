#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,mul=1;

	clrscr();

	printf("Enter the number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	mul=mul*i;
	}
	printf("The factorial is=%d",mul);
	getch();
}