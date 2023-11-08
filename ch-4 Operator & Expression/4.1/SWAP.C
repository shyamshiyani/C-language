#include<stdio.h>
#include<conio.h>

main()
{

	int a=11,b=21,c;

	clrscr;

	printf("The value of a=%d\n",a);
	printf("The value of b=%d\n",b);

	c=a;
	a=b;
	b=c;

	printf("The swaped value of a=%d\n",a);
	printf("The swaped value of b=%d\n",b);


	getch();

}



