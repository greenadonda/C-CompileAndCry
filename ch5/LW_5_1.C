#include<stdio.h>
#include<conio.h>

main()
{       int x,y,ans;
	clrscr();
	printf("enter value for x and y");
	scanf("%d%d",&x,&y);
	ans= x*x +2*x*y+y*y;
	printf("answer is %d",ans);
	getch();


}