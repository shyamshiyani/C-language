#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z,formula=0;

	clrscr();

	printf("Enter the value of x=");
	scanf("%d",&x);
	printf("Enter the value of y=");
	scanf("%d",&y);
	printf("Enter the value of z=");
	scanf("%d",&z);

	formula=(x+y+z)*(x+y+z);

	printf("answer is=%d",formula);
	getch();
}