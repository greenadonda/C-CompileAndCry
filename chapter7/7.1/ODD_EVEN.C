#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	clrscr();
	printf("enter the number");
	scanf("%d",&num);
	if(num%2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}

	getch();


}