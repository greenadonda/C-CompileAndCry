#include<stdio.h>
#include<conio.h>

 main()
{
	float b,h,area;
	clrscr();
	printf("enter the value of the b");
	scanf("%f", &b);
	printf("enter the value of the h");
	scanf("%f", &h);

	area=0.5 * b * h;

	printf("area is: %.2f\n", area);
	getch();
}