#include <stdio.h>

 main() 
{
    int i,j,k,n=3;

    for (i=1;i<=n;i++)
	 { 
        printf("|\n");
        for (j=1;j<=i;j++) 
		{
            printf("| ");
            for (k=1;k<=j;k++)
			{
                printf("_ ");
            }
            printf("\_\ ");
        }

        printf("\n");
    }

  
}

