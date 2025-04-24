#include<stdio.h>
#include<conio.h>

main()
{       int a=1,n;
	clrscr();
	printf("enter your number");
	scanf("%d",&n);
	while(a<=n)
	{
		 if(n%2!=0)
		 {
			printf("%d",n);
		 }
		 n--;
	}
	getch();





}