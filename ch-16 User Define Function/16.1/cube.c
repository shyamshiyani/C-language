#include<stdio.h>
cube()
{
	int n,num;
	
	printf("Enter the number=");
	scanf("%d",&n);
	
	num=n*n*n;
	printf("Cube is=%d",num);	
}
main()
{
	cube();
}
