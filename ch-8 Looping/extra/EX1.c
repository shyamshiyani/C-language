#include<stdio.h>
#include<conio.h>
main()
{
    int n, firstDigit, lastDigit;

    clrscr();

    printf("Enter number=");
    scanf("%d", &n);

    lastDigit=n%10;

    while(n>=10)
    {
	n=n/10;
    }
    firstDigit=n;
    	printf("first digit=%d",firstDigit);
	printf("last digit=%d",lastDigit);
	getch();
}