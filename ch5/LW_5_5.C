#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter value of A,B,C");
	scanf("%d%d%d",&a,&b,&c);
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);

	getch();



}