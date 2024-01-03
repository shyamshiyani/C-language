
#include<stdio.h>
main()
{
	int i;
	char mail[50]="shyam123@gmail.com",pass[50]="123456",email[50],lpass[50];
	
	printf("Enter your email-id=");
	scanf("%s",email);
	
	printf("Enter your password=");
	scanf("%s",lpass);
	
	
	if(strcmp(mail,email)==0)
	{
		printf("Login successful...");
	}
	else if(strcmp(pass,lpass)==0)
	{
		printf("Login successful...");
	}
	else
	{
		printf("Login Faild...\nInvalid Credentials...");
	}
}
