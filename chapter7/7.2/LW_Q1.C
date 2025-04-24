#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	printf("enter the value of c:\n");
	scanf("%d",&c);
	if(a==b && a==c && b==c)
	{
		printf("all are the same");
	}
	else if(a==b || a==c || b==c)
	{
		printf("at least two variables are equal");
	}
	else
	{
		if(a<b)
		{
			if(a<c)
			{
				clrscr();
				printf("%d is minimum",a);
			}
			else
			{
				clrscr();
				printf("%d is maximum",c);
			}

		}
		else{
			if(b<c)
			{
				clrscr();
				printf("%d is maximum",b);
			}
			else
			{
				clrscr();
				printf("%d is maximum",c);
			}
		}
	}
	getch();


}