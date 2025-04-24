#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	clrscr();
	printf("enter the number");
	scanf("%d",&num);
	if(num < 0)
	{
		printf("number is negative");

	}
	else if(num > 0)
	{
		printf("number is positive");

	}
	else{
		printf("number is netural");
	}
	getch();



}