#include<stdio.h>
#include<conio.h>

main()
{     	int age;
	clrscr();
	printf("enter your age");
	scanf("%d",&age);
	(age>=18)?printf("you can drive\n"):printf("you can not drive");
	getch();
}