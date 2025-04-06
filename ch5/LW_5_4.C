#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,temp;
	clrscr();
	printf("enter value of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a is:%d\n",a);
	printf("b is:%d",b );
	getch();

}