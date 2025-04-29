#include<stdio.h>
#include<conio.h>

main()
{
	int num,first,last;
	clrscr();
	printf("enter your number\n");
	scanf("%d",&num);
	first=num;
	do
	{
		first=first/10;
		last=num%10;


	}
	while(first>=10);

	printf("sum of first and  last digit%d\n\t",first+last);
	getch();

}