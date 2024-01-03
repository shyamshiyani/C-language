#include<stdio.h>
shyam(int n,int m)
{
	n=n*m;
	m=n/m;
	n=n/m;
	
	printf("After swap a=%d\n",n);
	printf("After swap b=%d\n",m);
}
void main()
{
	int a,b;
	
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	int *first,*second;
	first=&a;
	second=&b;
	
	shyam(*first,*second);
	
}
