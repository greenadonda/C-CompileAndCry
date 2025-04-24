#include <stdio.h>
#include<conio.h>

int main() {
   int a=1;
   int n;
   clrscr();
   printf("enter your number\n");
   scanf("%d",&n);
   while(a<=n)
   {
      printf("%d",a);
      a++;
   }
   getch();
}