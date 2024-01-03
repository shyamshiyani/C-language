#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the size of string=");
	scanf("%d",&n);
	
	int i;
	char name[n];
	
	printf("Entre any string=");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
		else if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
	printf("Toggle case string=%s",name);
}
