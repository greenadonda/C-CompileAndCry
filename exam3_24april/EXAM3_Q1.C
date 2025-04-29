#include<stdio.h>
#include<conio.h>

main()
{
	char alpha='a';
	clrscr();
	do
	{
		printf("%c\t",alpha);
		alpha+=4;

	}
	while(alpha<='z');

	getch();


}