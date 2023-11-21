#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enter the number=");
	scanf("%d",&a);

	a%2==0?printf("This is even number..."):printf("This is odd number...");

	getch();



}