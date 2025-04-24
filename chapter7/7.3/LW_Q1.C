#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter a value of the first number\n");
	scanf("%d",&a);
	printf("enter a value of the second number\n");
	scanf("%d",&b);
	printf("enter a value of the third number\n");
	scanf("%d",&c);
	(a<b)
		? (a<c)
			      ?	printf("%d is min",a)
			      :	printf("%d is min",c)
		: (b<c)
			      ?printf("%d is min",b)
			      :printf("%d is min",c);

	getch();
}