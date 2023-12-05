#include<stdio.h>
#include<conio.h>
main()
{
    int a[200],b[200],c[200],n,m,sum=0,i,j;

    clrscr();

    printf("Enter arrry A's size=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i] = a[i];
	}

    printf("Enter arrry B's size=");
    scanf("%d",&m);

    sum = n + m ;

    for(i=0;i<m;i++)
    {
	    printf("b[%d] = ",i);
	    scanf("%d",&b[i]);

	    for(j=0;j<m;j++)
		{
		    c[j+n] = b[j] ;
		}
    }
    printf("Array C is\n");
    for(i=0;i<sum;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}

    getch();
}
