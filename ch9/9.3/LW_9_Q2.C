#include<stdio.h>
#include<conio.h>

main()
{
	int num,fac=1,i;
	clrscr();
	printf("enter positive number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fac=fac*i;


	}
	printf("%d %d",num,fac);

	getch();



}