#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the length of string=");
	scanf("%d",&n);
	
	char name[n];
	int i;
	
	printf("Enter any string=");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}


	printf("Lowercase string=%s",name);
}
