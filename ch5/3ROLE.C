#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("lets swap value without using 3rd variable and +- operator\n enter the value of a and b");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a:%d\n",a);
	printf("b:%d",b );
	getch();



}