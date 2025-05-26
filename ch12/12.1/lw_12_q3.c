#include<stdio.h>

int main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    
    int a[n], b[n],c[n];

    printf("\n\n enter element of a\n\n");

    for (int i = 0; i < n; i++)
    {
       printf("enter a[%d]",i);
       scanf("%d",&a[i]);
    }
    
    printf("\n\n enter element of b\n\n");

    for (int i = 0; i < n; i++)
    {
       printf("enter b[%d]",i);
       scanf("%d",&b[i]);
    }
    printf("\n\n sum of a and b in c\n\n");

    for (int i = 0; i < n; i++)
    {
       c[i]=a[i]+b[i];
       printf("sum of %d\t",c[i]);
    }
}