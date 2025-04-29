#include<stdio.h>
#include<conio.h>

main()
{
	int num,newnum=0;
	clrscr();
	printf("enter the number");
	scanf("%d",&num);
	do
	{
		num=num/10;
		newnum++;

	}
	while(num!=0);
	printf("total number of digit:%d\n",newnum);
	getch();

}