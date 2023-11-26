#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;

	clrscr();

	printf("Enter the first number=");
	scanf("%d",&a);
	printf("Enter the last number=");
	scanf("%d",&b);

	for(c=a;c<=b;c++)
	{     for(a=a;a<=b;a++)
		{
		for(c=1;c<=10;c++)
			{
			printf("%d*%d=%d\n",a,c,c*a);
			}
		printf("\n");
		}
	}
	getch();

}