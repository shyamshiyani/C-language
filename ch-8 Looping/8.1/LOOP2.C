#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;

	clrscr();

	printf("Enter the starting point=");
	scanf("%d",&n);

	while(n>=i)
	{
	printf("%d ",n);
	n--;
	}
	getch();
}
