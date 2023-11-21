#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;

	clrscr();

	printf("enter the a =");
	scanf("%d",&a);
	printf("enter the b =");
	scanf("%d",&b);
	printf("enter the c =");
	scanf("%d",&c);

	if(a==b && a==c)
	{
		printf("all are same... %d",a);
	}
	else if(a==b)
	{
		printf("a and b are same... %d",a);
	}
	else if(b==c)
	{
		printf("b and c are same... %d",b);
	}
	else if(a==c)
	{
		printf("a and c are same... %d",a);
	}

	else if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum value with... %d",a);
		}
		else
		{
			printf("c is minimum value with... %d",c);
		}
	}
	else if(b<c)
	{
		printf("b is minimum value with... %d",b);
	}
	else
	{
		printf("c is minimum value with... %d",c);
	}

	getch();

}
