#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,n;
	clrscr();
	printf("enter value of p");
	scanf("%f", &p);
	printf("enter value of r");
	scanf("%f", &r);
	printf("enter value of n");
	scanf("%f", &n);
	printf("PRN is %f",p*r*n/100);
	getch();
}