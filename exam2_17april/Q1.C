#include<stdio.h>
#include<conio.h>

main()
{

	float marks;
	clrscr();
	printf("please enter your marks");
	scanf("%f",&marks);

	(marks >=90 && marks<=100)

			?	printf("your grade is a")

			: 	(marks >=75 && marks<=89)

			? 	printf("grade is b")
			:	(marks>=60 && marks<=74)

			?	printf("your grade is c")
			:     	(marks>=50 && marks<=59)

			?	printf("your grade is d")
			:       (marks>=35 && marks<=49)

			?	printf("your grade is e")
			:       (marks >=0 && marks<=34)

			?	printf("you are failed")
			:       printf("invalid marks");




	getch();
}