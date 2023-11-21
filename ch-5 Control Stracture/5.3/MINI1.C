#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter the value of a=");
	scanf("%d",&a);
       printf("Enter the value of b=");
	scanf("%d",&b);
	printf("Enter the value of c=");
	scanf("%d",&c);

	(a==b && b==c)
		?printf("all values are same...")
		:(a==b)
			?printf("a & b are same...")
			:(a==c)
				?printf("a & c are same...")
				:(b==c)
					?printf("b & c are same...")
					:(a<b)
						?printf("The minimum value is=%d",a)
						:(a<c)
							?printf("The minimum value is=%d",a)
							:(b<c)
								?printf("The minimum value is=%d",b)
								:printf("The minimum value is=%d",c);


	getch();
 }