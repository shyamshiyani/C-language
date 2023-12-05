
#include <stdio.h>  
#include <conio.h>  
  
main ()  
{  
    int a, b,c=0,d=0;

    clrscr();

    printf ("Enter a Number:");  
    scanf ("%d",&a); 
    
    b=a;   
      
    while (b>0)  
    {   
        d=d+b%10;   
        b=b/10;  
    }  

    b=d;   
        
    while (b>0)  
    {  
        c=c*10+b%10;  
        b=b/10;  
    }  

    printf ("The product of %d * %d =%d\n",d,c,c*d);
    
    if (c*d==a)  
    {  
        printf ("%d is a Magic Number",a);  
    }  
    else  
    {  
        printf ("%d is not a Magic Number",a);  
    }  

    getch();      
} 
