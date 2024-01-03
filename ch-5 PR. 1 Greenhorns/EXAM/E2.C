#include<stdio.h>
#include<conio.h>

main()
{
	float bs,HRA,DA,TA,RS=0;
	clrscr();

	printf("Enter the Base salary=");
	scanf("%f",&bs);
	printf("\nEnter the HRA in per.(%)=");
	scanf("%f",&HRA);
	printf("\nEnter the DA in per.(%)=");
	scanf("%f",&DA);
	printf("\nEnter the TA in per.(%)=");
	scanf("%f",&TA);

	RS=(bs+(bs*HRA/100)+(bs*DA/100)+(bs*TA/100));

	printf("\ntotal salary is=%.2f",RS);
	getch();


}