#include<stdio.h>
#include<stdio.h>

main()
{
	int num,i=1;
	clrscr();
		printf("Enter a number: ");
		scanf("%d", &num);
		do {
		 
			if (i % 2== 0) {
				printf("%d ", i);
			}
			i++;
		} while (i <= num);
	
		printf("\n");
	
		return 0;
	
	
		
	getch();
}