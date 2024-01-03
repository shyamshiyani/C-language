#include<stdio.h>
void main()
{
	int a,b,c,i;
	
	for(i=c;i<=0;c++)
	{	
		
	printf("Paress 1 Addition (+)\n");
    printf("Paress 2 Subtraction (-)\n");
    printf("Paress 3 Multiplication (*)\n");
    printf("Paress 4 Division (/)\n");
    printf("Paress 5 Modulo (%%)\n");
    printf("Paress 6 Exit\n");
    
    printf("Enter your choice=");
	scanf("%d",&c);
	
	if(c==0)
	{
		break;
	}
	else if(c>6)
	{
		printf("Enter valid Numbesr");
	}
		
	printf("Enter First Value = ");
	scanf("%d",&a);
	printf("Enter Second Value = "); 
	scanf("%d",&b);
	
	switch(c)
	{
		case 1 :
			printf("Addition Of %d and %d is = %d\n",a,b,sum(a,b));
			break;
			
		case 2 :
			printf("Substriction Of %d and %d is = %d\n",a,b,sub(a,b));
			break;
			
		case 3 :
			printf("multiplication Of %d and %d is = %d\n",a,b,multi(a,b));
			break;
			
		case 4 :
			printf("division Of %d and %d is = %d\n",a,b,divi(a,b));
			break;
			
		case 5 :
			printf("modulo Of %d and %d is = %d\n",a,b,modul(a,b));
			break;
			
		default :
			printf("invalid numebr enter.");
		}
	}	
}

int sum(int e,int d)
{
	return e + d ;
}

int sub(int e,int d)
{
	return e - d ;
}

int multi(int e,int d)
{
	return e * d ;
}

int divi(int e,int d)
{
	return e / d ;
}

int modul(int e ,int d)
{
	return e % d ;
}

