#include<stdio.h>
#include<conio.h>

main()
{
       const float pi=3.14;
       float radius,area;
       clrscr();

       printf("Enter the value of radius:-");
       scanf("%f",&radius);

       area=pi*radius*radius;
       printf("area of a cricle=%.2f",area);
       getch();



}

