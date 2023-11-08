#include<stdio.h>
#include<conio.h>

main()
{

	int x,y,z=0;

	clrscr();

	printf("Enter the value of x=");
	scanf("%d",&x);
	printf("Enter the value of y=");
	scanf("%d",&y);

	z=(x+y)*(x+y);

	printf("answer is=%d",z);
	getch();
}

