
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the a =");
	scanf("%d",&a);
	printf("enter the b =");
	scanf("%d",&b);
	printf("enter the c =");
	scanf("%d",&c);
	printf("enter the d =");
	scanf("%d",&d);

	if(a==b && a==c && a==d )
	{
		printf("all are same... %d",a);
	}
	else if(a==b && b==c)
	{
		printf("a,b and c are same... %d",a);
	}
	else if(b==c && c==d)
	{
		printf("b,c and d are same... %d",b);
	}
	else if(a==b && b==d)
	{
		printf("a,b and d are same... %d",a);
	}
	else if(a==c && a==d)
	{
		printf("a,c and d are same... %d",a);
	}
	else if(a==b)
	{
		printf("a and b are same... %d",a);
	}
	else if(a==c)
	{
		printf("a and c are same... %d",a);
	}
	else if(a==d)
	{
		printf("a and d are same... %d",a);
	}
	else if(b==c)
	{
		printf("b and c are same... %d",b);
	}
	else if(b==d)
	{
		printf("b and d are same... %d",b);
	}
	else if(c==d)
	{
		printf("c and d are same... %d",c);
	}

	else if(a>b)
	{
		if(a>c && a>d)
		{
			printf("a is max... %d",a);
		}
		else if(c>d)
		{
			printf("c is max... %d",c);
		}
		else
		{
			printf("d is max... %d",d);
		}
	}
	else if(b>c)
	{
		if(b>d)
		{
			printf("b is max... %d",b);
		}
		else
		{
			printf("d is max... %d",d);
		}
	}
	else if(c>d)
	{
		printf("c is max... %d",c);
	}
	else
	{
		printf("d is max... %d",d);
	}

	getch();

}
