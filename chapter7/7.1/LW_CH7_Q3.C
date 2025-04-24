#include<stdio.h>
#include<conio.h>

main()
{

	float marks1,marks2,marks3,total,percentage;
	clrscr();
	printf("enter subject 1 marks(out of 100)\n");
	scanf("%f",&marks1);
	printf("enter subject 2 marks(out of 100)\n");
	scanf("%f",&marks2);
	printf("enter subject 3 marks(out of 100)\n");
	scanf("%f",&marks3);
	total=marks1+marks2+marks3;
	percentage=(total/300)*100;
	printf("total:%.2f\n",total);
	printf("percentage: %.2f",percentage);

	getch();


}