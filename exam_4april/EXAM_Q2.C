#include<stdio.h>
#include<conio.h>

main()
{       int bs,da,ta,hra,gross;
	clrscr();
	printf("enter salary");
	scanf("%d",&bs);
	hra=bs*0.15;
	da=bs*0.20;
	ta=bs*0.10;
	gross=bs+hra+da+ta;
	printf("bs(basic salary):%d\n",bs);
	printf("hra:%d\n",hra);
	printf("da:%d\n",da);
	printf("ta:%d\n",ta);
	printf("gross salary is%d\n",gross);
	getch();


}