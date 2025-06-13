#include<stdio.h>

int main()
{
    char a[50];

    printf("enter your name:\t");
    scanf("%[^\n]",&a);

    printf("\n");
    printf("Name is\t%s\n",a);

    int len=0;

    for(int i=0;a[i]!=NULL;i++)
    {
        len++;
    }
    printf("%d",len);
    

}