#include<stdio.h>
#include<conio.h>

main()
{
	int num,i;
	clrscr();
	printf("enter your table number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d:\n",num,i,num*i);


	}
	getch();



}