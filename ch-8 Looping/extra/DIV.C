#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;

	clrscr();

	printf("Enter the number=");
	scanf("%d",&n);

	printf("Numbers divided by 3 and 5=\n");

	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
		printf("%d ",i);
		}

	}

	getch();
}