#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>=i)
	{
	if(n%2!=0)
	printf("%d ",n);
	n--;
	}
	getch();
}
