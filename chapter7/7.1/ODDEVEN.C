#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	clrscr();
	printf("enter a number");
	scanf("%d",&num);
	if(num/2*2==num)
	{
		printf("the number is even\n");
	}
	else{
		printf("the number is odd");

	}
	getch();




}