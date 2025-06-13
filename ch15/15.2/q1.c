#include<stdio.h>

int main()
{
    char a[50];
    
    printf("enter any string\t");
    scanf("%[^\n]",&a);
    
    for(int i=0;a[i] !='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]-=32;
    }
    printf("%s",a);
}