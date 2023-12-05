#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c=0;

  clrscr();

  printf("\n Please Enter any number to Check  = ");
  scanf("%d", &b);

  for (a = 2; a <= b/2; a++)
   {
     if(b%a == 0)
     {
	c++;
     }
   }

   if(c == 0 && b != 1 )
   {
	printf("\n %d is a Prime number", b);
   }
   else
   {
	printf("\n %d is not Prime number", b);
   }

   getch();

}
