#include<stdio.h>
#include<conio.h>

main()
{
	int age;
	clrscr();
	printf("enter the age");
	scanf("%d",&age);
	if(age >=18)
	{
		clrscr();
		printf("you can drive");

	}
	else{
		clrscr();
		printf("you can not drive");
	}

	getch();



}