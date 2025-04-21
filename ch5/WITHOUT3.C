#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("lets swap the value without using 3rd variable \n enter value of the a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d\n",a);
	printf("b:%d",b);
	getch();




}