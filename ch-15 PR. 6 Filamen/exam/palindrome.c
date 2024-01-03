#include <stdio.h>
 
main()
{
   char shyam[50], length = 0;
   int tf = 1, i;
 
   printf("Enter the String=");
   scanf("%s",shyam);
 
   for (i = 0; shyam[i]!='\0'; i++)
   {
      length++;
   }
 
   for (i=0;i<length/2;i++)
   {
      if (shyam[i]!=shyam[length-1-i])
      {
         tf=0;
         break;
      }
   }
 
   if (tf==1)
   {
      printf("%s=is a palindrome.", shyam);
   }
   else
    {
	    printf("%s=is not a palindrome.", shyam);
	}
	
}

