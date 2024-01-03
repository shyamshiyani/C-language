#include<stdio.h>
struct employee
{
	int id,age;
	char name[20],role[20],city[20],experience[20],company_name[50];
};

void main()
{
	
	int n,i;
	
	printf("Enter the number of employee=");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=1;i<=n;i++)
	{
		printf("\nEnter details of %d employee:",i);
		printf("\nEnter the Employee's-ID=");
		scanf("%d",&e[i].id);
		printf("Enter the Employee's-NAME=");
		scanf("%s",&e[i].name);
		printf("Enter the Employee's-AGE=");
		scanf("%d",&e[i].age);
		printf("Enter the Employee's-ROLE=");
		scanf("%s",&e[i].role);
		printf("Enter the Employee's-CITY=");
		scanf("%s",&e[i].city);
		printf("Enter the Employee's-EXPERIENCE=");
		scanf("%s",&e[i].experience);
		printf("Enter the Employee's-COMPANY_NAME=");
		scanf("%s",&e[i].company_name);	
		printf("\n");	
	}
	for(i=1;i<=n;i++)
	{
		printf("\nThe details of %d employee:",i);
		printf("\nEmployee's-ID=%d",e[i].id);
		printf("\nEmployee's-NAME=%s",e[i].name);
		printf("\nEmployee's-AGE=%d",e[i].age);
		printf("\nEmployee's-ROLE=%s",e[i].role);
		printf("\nEmployee's-CITY=%s",e[i].city);
		printf("\nEmployee's-EXPERIENCE=%s",e[i].experience);
		printf("\nEmployee's-COMPANY_NAME=%s\n",e[i].company_name);
	}
}

