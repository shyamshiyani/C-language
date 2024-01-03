
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter the vale of a =");
	scanf("%d",&a);
	printf("Enter the vale of b =");
	scanf("%d",&b);
	
	
	
	printf("Before swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	int *first,*second,*third;
	
	first=&a;
	second=&b;
	third=&c;
	
	*third=*first;
	*first=*second;
	*second=*third;
	
	printf("after swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
}
