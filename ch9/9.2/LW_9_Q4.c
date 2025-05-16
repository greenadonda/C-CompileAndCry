#include<stdio.h>
#include<conio.h>

main()
{
    int num,a=0,b=1 ,new,i,n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        printf("%d",a);
        new=a+b;
        a=b;
        b=new;
    }
    getch();
}
