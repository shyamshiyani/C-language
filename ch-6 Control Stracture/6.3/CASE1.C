#include<stdio.h>
#include<conio.h>

main()
{
	int  a,b,c,d;

	clrscr();

	printf("press 1 for English...\n");
	printf("press 2 for Hindi...\n");
	printf("press 3 for Gujarati...\n");

	printf("press number=");
	scanf("%d",&a);

	switch(a)
	{
	case 1:
		printf("press 1 for Internet Recharge\n");
		printf("press 2 for Top-up Recharge\n");
		printf("press 3 for special Recharge\n");

		printf("press number=");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			printf("You have successfully done Internet Recharge\n");
			break;
		case 2:
			printf("You have successfully done Top-up Recharge\n");
			break;
		case 3:
			printf("You have successfully done Special Recharge\n");
			break;
		default:
		printf("please Enter valid input...");

		}
	case 2:
		printf("Internet Recharge ke liye 1 dabaiye\n");
		printf("Top-up Recharge  ke liye 2 dabaiye\n");
		printf("special Recharge  ke liye 3 dabaiye\n");

		printf("press number=");
		scanf("%d",&c);
		switch(c)
		{
		case 1:
			printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
			break;
		case 2:
			printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
			break;
		case 3:
			printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
			break;
		default:
		printf("please Enter valid input...");
		break;

		}

	case 3:


		printf("Internet Recharge mate 1 dabavo\n");
		printf("Top-up Recharge mate 2 dabavo\n");
		printf("Special Recharge mate 3 dabavo\n");

		printf("press number=");
		scanf("%d",&d);
		switch(d)
		{
		case 1:
			printf("Tame safaltapurvak Internet Recharge karyu che.\n");
			break;
		case 2:
			printf("Tame safaltapurvak Top-up Recharge karyu che.\n");
			break;
		case 3:
			printf("Tame safaltapurvak Special Recharge karyu che.\n");
			break;
		default:
		printf("please Enter valid input...");
		}
		default:
		printf("please Enter valid input...");
		}

	getch();
	}