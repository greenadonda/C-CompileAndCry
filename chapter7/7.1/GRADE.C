#include<stdio.h>
#include<conio.h>

main()
{
	float marks;
	clrscr();
	printf("enter marks");
	scanf("%f",&marks);
	if(marks>=91 && marks<=100)
	{
		printf("grade:\t a+\n");

	}
	else if(marks>=81 && marks<=90)
	{
		printf("grade:\t a\n");

	}
	else if(marks >=71 && marks<=80)
	{
		printf("grade:\t b+\n");
	}
	else if(marks>=61 && marks<=70)
	{
		printf("grade:\t b\n");
	}
	else if(marks>=51 && marks<=60)
	{
		printf("grade:\t c+\n");
	}
	else if(marks>=41 && marks<=50)
	{
		printf("grade:\t c\n");
	}
	else if(marks>=33 && marks<=40)
	{
		printf("grade:\t d\n");
	}
	else if(marks>=0 && marks<=31)
	{
		printf("you are failed");
	}
	else{
		printf("invalid marks");
	}
	getch();

}