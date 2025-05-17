#include<stdio.h>
#include<conio.h>

main()
{
	int i, num,sum=0;
	clrscr();
	printf("enter your number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	  sum+=i;

	}
	printf("the number is\t%d:\t%d",num,sum);


	getch();



}