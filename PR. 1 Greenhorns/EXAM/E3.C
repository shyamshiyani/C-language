#include<stdio.h>
#include<conio.h>

main()
{
    int t=180;
    int a,b,c=0;
    clrscr(); 
	

    printf("Enter the value of angle-a=");
    scanf("%d",&a);
    printf("Enter the value of angle-b=");
    scanf("%d",&b);

    c=t-a-b;

    printf("the value of angle-c=%d",c);
    getch();
}


