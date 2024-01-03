#include<stdio.h>

struct student{
	int id,age,standard;
	char name[20],course[20],city[20],school[50];
};
void main()
{
	struct student s1,s2,s3;
		
	printf("Enter the First student details:\n");
	
	printf("Enter the student Id=");
	scanf("%d",&s1.id);
	printf("Enter the student NAME=");
	scanf("%s",&s1.name);	
	printf("Enter the student AGE=");
	scanf("%d",&s1.age);
	printf("Enter the student COURSE=");
	scanf("%s",&s1.course);
	printf("Enter the student LIVING-CITY=");
	scanf("%s",&s1.city);
	printf("Enter the student STANDARD=");
	scanf("%d",&s1.standard);
	printf("Enter the student SCHOOL-NAME=");
	scanf("%s",&s1.school);
	

		
	printf("\nEnter the Second student details:");
	
	
	printf("\nEnter the student Id=");
	scanf("%d",&s2.id);
	printf("Enter the student NAME=");
	scanf("%s",&s2.name);
	printf("Enter the student AGE=");
	scanf("%d",&s2.age);
	printf("Enter the student COURSE=");
	scanf("%s",&s2.course);
	printf("Enter the student LIVING-CITY=");
	scanf("%s",&s2.city);
	printf("Enter the student STANDARD=");
	scanf("%d",&s2.standard);
	printf("Enter the student SCHOOL-NAME=");
	scanf("%s",&s2.school);
	
	

		
	printf("\nEnter the Thired student details=\n");
	
	printf("Enter the student Id=");
	scanf("%d",&s3.id);
	printf("Enter the student NAME=");
	scanf("%s",&s3.name);
	printf("Enter the student AGE=");
	scanf("%d",&s3.age);
	printf("Enter the student COURSE=");
	scanf("%s",&s3.course);
	printf("Enter the student LIVING-CITY=");
	scanf("%s",&s3.city);
	printf("Enter the student STANDARD=");
	scanf("%d",&s3.standard);
	printf("Enter the student SCHOOL-NAME=");
	scanf("%s",&s3.school);
	
	
	printf("\nStudent Id=%d\n",s1.id);
	printf("Student Name=%s\n",s1.name);
	printf("Student Age=%d\n",s1.age);
	printf("Student Course=%s\n",s1.course);
	printf("Student Living-city=%s\n",s1.city);
	printf("Student Standerd=%d\n",s1.standard);
	printf("Student School-name=%s\n",s1.school);
	
	
	printf("\nStudent Id=%d\n",s2.id);
	printf("Student Name=%s\n",s2.name);
	printf("Student Age=%d\n",s2.age);
	printf("Student Course=%s\n",s2.course);
	printf("Student Living-city=%s\n",s2.city);
	printf("Student Standerd=%d\n",s2.standard);
	printf("Student School-name=%s\n",s2.school);


	printf("\nStudent Id=%d\n",s3.id);
	printf("Student Name=%s\n",s3.name);
	printf("Student Age=%d\n",s3.age);
	printf("Student Course=%s\n",s3.course);
	printf("Student Living-city=%s\n",s3.city);
	printf("Student Standerd=%d\n",s3.standard);
	printf("Student School-name=%s\n",s3.school);

}
