#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,ans;
	clrscr();
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	ans=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
	printf("answer is:%d",ans);
	getch();


}