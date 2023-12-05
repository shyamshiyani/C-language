#include<stdio.h>
#include<conio.h>

main()
{
	float i,j,c,r,sum=0;
	float avg;
	float array[100][100];



	clrscr();


	printf("Enter the array's row size:");
	scanf("%f",&r);
	printf("Enter the array's column size:");
	scanf("%f",&c);


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("array[%.0f][%.0f]=",i,j);
		scanf("%f",&array[i][j]);
		}
	}


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		sum=sum+array[i][j];
		avg=sum/(r*c);
		}
	}
	printf("Average of array=%.2f",avg);
	getch();
}