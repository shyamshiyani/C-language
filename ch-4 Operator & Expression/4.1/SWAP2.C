#include<stdio.h>
#include<conio.h>

main()
{
	int a=21,b=11;

	clrscr();

	printf("The value of a=%d\n",a);
	printf("The value of b=%d\n",b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("The swaped value of a=%d\n",a);
	printf("The waa[ed value of b=%d\n",b);

	getch();

}

