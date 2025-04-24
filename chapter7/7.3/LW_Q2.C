#include<stdio.h>
#include<conio.h>

main()
{       int lang,internet;
	clrscr();
	printf("\n\n\t---------------choose a language for the recharge---------------\t\n\n");
	printf("\t\t\tpress 1 for english\n");
	printf("\t\t\tpress 2 for hindi\n");
	printf("\t\t\tpress 3 for gujarati\n\n");
	printf("please enter your choice\n");
	scanf("%d",&lang);
	switch(lang)
	{
		case 1:
			clrscr();
			printf("press 1 for english\n\n");
			clrscr();

			printf("press 1 for internet recharge\n");
			printf("press 2 for top-up recharge\n");
			printf("press 3 for special recharge\n\n");
			printf("please enter your choice\n");
			scanf("%d",&internet);

			switch(internet)
			{
				case 1:
					clrscr();
					printf("press 1 for internet recharge");
					break;
				case 2:
					clrscr();
					printf("press 2 for top-up recharge");
					break;
				case 3:
					clrscr();
					printf("press 3 for special recharge");
					break;
			}
			break;
		case 2:
			clrscr();
			printf("press 2 for hindi\n\n");
			clrscr();
			printf("internet recharge ke liye 1 dabaiye\n");
			printf("top-up recharge ke liye 2 dabaiye\n");
			printf("special recharge ke liye 3 dabaiye\n\n");
			printf("please enter your choice\n");
			scanf("%d",&internet);

			switch("%d",internet)
			{
				case 1:
					clrscr();
					printf("internet recharge ke liye 1 dabaiye");
					break;
				case 2:
					clrscr();
					printf("top-up recharge ke liye 2 dabaiye");
					break;
				case 3:
					clrscr();
					printf("special recharge ke liye 3 dabaiye");
					break;
			}

			break;
		case 3:
			clrscr();
			printf("press 3 for gujarati\n\n");
			clrscr();
			printf("internet recharge mate 1 dabavo\n");
			printf("top-up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n\n");
			printf("please enter your choice\n");
			scanf("%d",&internet);
			switch(internet)
			{
				case 1:
					clrscr();
					printf("internet recharge mate 1 dabavo");
					break;
				case 2:
					clrscr();
					printf("top-up recharge mate 2 dabavo");
					break;
				case 3:
					clrscr();
					printf("special recharge mate 3 dabavo");
					break;


			}

			break;

			default:
				clrscr();
				printf("invalid choice..................!!!\n");

	}



	getch();


}
