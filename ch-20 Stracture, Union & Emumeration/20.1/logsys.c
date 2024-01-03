#include<stdio.h>

struct student
{
	int std,id,age;
	char name[10],school[20],city[20],course[10];
};

void main()
{
	int s,a,b,d;
	int i=3,c;
	struct student st[i];
		
	for(b=1;b<=i;b++)
	{
		printf("Enter student %d data:\n",b);
		printf("id=");
		scanf("%d",&st[b].id);
		printf("name=");
		scanf("%s",&st[b].name);
		printf("age=");
		scanf("%d",&st[b].age);
		printf("course=");
		scanf("%s",&st[b].course);
		printf("city=");
		scanf("%s",&st[b].city);
		printf("standard=");
		scanf("%s",&st[b].std);
		printf("school=");
		scanf("%s",&st[b].school);
	}

	printf("Press 1 for id login \n");
	printf("Press 2 for age login \n");
	printf("Press 3 for standard login \n");
	

	
	printf("entre the number=");
	scanf("%d",&s);
	
	switch(s)	
	{
			case 1:
			printf("your choice-ID login:\n");
				
			printf("enter your id=");
			scanf("%d",&a);
				
			for(b=1;b<=i;b++)
			{
				if(st[b].id==a)
				{
					printf("ID=%d\n",st[b].id); 
					printf("name=%s\n",st[b].name); 
					printf("age=%d\n",st[b].age); 
					printf("course=%s\n",st[b].course); 
					printf("city=%s\n",st[b].city); 
					printf("std=%s\n",st[b].std); 
					printf("school=%s\n",st[b].school);	
				}	
			}	
			break;

			case 2:	
			printf("your choice-Age login\n");
				
			printf("Press 1 if you age is equal 18\n");
			printf("Press 2 if you age is greater 18\n");
			printf("Press 3 if you age is less 18\n");
				
			printf("enter your Age=");
			scanf("%d",&c);
			
			switch(c)
			{
				case 1 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].age==18)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
				
				case 2 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].age>18)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
				
				case 3 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].age<18)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
				
				default:
					printf("please enter valid input:::");
			}
			break;
			
			case 3:	
			printf("your choice-standard login\n");
				
			printf("Press 1 if you std. less than 4\n");
			printf("Press 2 if you std. less than 8\n");
			printf("Press 3 if you std. less than 12\n");
				
			printf("enter the number=");
			scanf("%d",&d);
			
			switch(d)
			{
				case 1 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].std>=9)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
				
				case 2 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].std>=5)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
				
				case 3 :	
					for(b=1;b<=i;b++)
					{
						if(st[b].std>=1)
						{
							printf("id=%d\n",st[b].id); 
							printf("name=%s\n",st[b].name); 
							printf("age=%d\n",st[b].age); 
							printf("course=%s\n",st[b].course); 
							printf("city=%s\n",st[b].city); 
							printf("std=%s\n",st[b].std); 
							printf("school=%s\n",st[b].school);	
						}	
					}
					break;
					
				default:
					printf("please enter valid input:::");
			}	
		default:
			printf("please enter valid input:::");
			
	}
}
