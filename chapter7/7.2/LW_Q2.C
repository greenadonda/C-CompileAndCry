#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,d;
    clrscr();
    printf("enter the value of a,b,c and d\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if(a==b && a==c && a==d && b==c && b==d && c==d)
    {
	printf("all value are the same");
    }
    else if(a==b || a==c || a==d || b==c || b==d || c==d)
    {
	printf("some value are equal");
    }
    else
    {
	if(a>b)
	{
	    if(a>c)
	    {
	       if(a>d)
	       {
			 clrscr();
			 printf("%d is max",a);
	       }
	       else
	       {
			clrscr();
			printf("%d is max",d);
	       }
	    }
	    else
	    {
		if(c>d)
		{
			clrscr();
			printf("%d is max",c);
		}
		else
		{
			clrscr();
			printf("%d is max",d);
		}
	    }
	}
	else
	{
	  if(b>c)
	  {
		if(b>d)
		{
			clrscr();
			printf("%d is max",b);
		}
		else
		{
			clrscr();
			printf("%d is max",d);
		}
	  }
	  else
	  {
		if(c>d)
		{
			clrscr();
			printf("%d is max",c);
		}
		else
		{
			clrscr();
			printf("%d is max",d);
		}
	  }
	}

    }

    getch();
}