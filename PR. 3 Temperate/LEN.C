#include<stdio.h>
#include<conio.h>

main()



{
	int i=0,n;

	clrscr();

	printf("Enter the number=");
	scanf("%d",&n);

	while(n>0)
	{
		n=n/10;
		i++;
	}
	printf("the lenth of number=%d",i);
	getch();


}