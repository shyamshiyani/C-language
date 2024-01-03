#include<stdio.h>
main()
{	
	FILE *ptr;
	int i;
	
	ptr = fopen("shyam.txt","w");
	
	if(ptr == NULL)
	{
		printf("File does't created...");
	}
	else
	{
		printf("File created successfully...");
		
		for(i=1;i<=50;i++)
		{
			if(i%3==0 && i%5==0)
			{
					fprintf(ptr,"That number are diviseble by 3 and 5 =%d\n",i);
			}
		}
	}
	
}
