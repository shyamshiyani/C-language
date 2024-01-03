#include<stdio.h>

struct student
{
	int rollno,chem,maths,phy;
	char name[10];	
};

void main()
{
	struct student s[5];
	int i;
	float avg,sum;
	
	for(i=0;i<5;i++)
	{
		printf("Enter details of student %d:\n",i+1);
		
		printf("Roll no=");
		scanf("%d",&s[i].rollno);
		printf("Name=");
		scanf("%s",&s[i].name);
		printf("Chemistry=");
		scanf("%d",&s[i].chem);
		printf("Mathematics=");
		scanf("%d",&s[i].maths);
		printf("Physics=");
		scanf("%d",&s[i].phy);
		
		printf("\n");
	
	}    
	for(i=0;i<5;i++)
	{
		printf("\nresult student %d:\n",i+1);
		
	
			
		printf("Roll no=%d\n",s[i].rollno);
	
		printf("Name=%s\n",s[i].name);
	
		printf("Chemistry=%d\n",s[i].chem);
		
		printf("Mathematics=%d\n",s[i].maths);
		
		printf("Physics=%d\n",s[i].phy);
		
		sum=(s[i].chem+s[i].maths+s[i].phy);
		printf("Total=%.2f/300\n",sum);
		avg=(s[i].chem+s[i].maths+s[i].phy)/3;
		printf("percent=%.2f%%\n",avg);
		
	}

}
