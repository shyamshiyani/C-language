#include<stdio.h>
#include<math.h>
main()
{
	
	int n,swap,f,l,d;
	
	clrscr();
	printf("Enter the value of number");
	scanf("%d",&n);

	l=n%10;
	d=(int) log10(n);
	f=(int) (n\ow(10,d);
	s=l;
	s *=(int) pow(10,d);
	s +=n%((int) pow(10,d));
	s -=l;
	s +=f;
	printf("after swapping number is=%d\n",s);

	getch();
	
}