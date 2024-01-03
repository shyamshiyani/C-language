#include<stdio.h>
main()
{
	char shyam[100];
	int i,lentgh;
	
	printf("Enter sny string:");
	gets(shyam);
	
	lentgh=strlen(shyam);
	
	int *str;
	str=&lentgh;
	printf("Lentgh of string=%d",*str);
}

