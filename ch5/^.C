#include<stdio.h>
#include<conio.h>

main()
{       int a,b;
	clrscr();
	printf("swap the value without using 3 types\n please enter value of a and b\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a%d\t\n",a);
	printf("b%d\t",b);





	getch();




}