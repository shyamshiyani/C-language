#include<stdio.h>
#include<conio.h>

main()
{
	float total,a,b,first,price;

	clrscr();

	printf("Enter Electricity units:");
	scanf("%f",&a);
	if(a<=50)
	{
	price=a*0.50;
	}
	else if(a<=150)
	{
	price=25+(a-50)*0.75;
	}
	else if(a<=250)
	{
	price=100+(a-150)*1.20;
	}
	else
	{
	price=220+(a-250)*1.50;
	}
	b=price*0.20;
	total=price+b;
	printf("Electricity bill=%.2f",total);
	getch();


}