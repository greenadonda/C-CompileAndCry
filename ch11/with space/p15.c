#include<stdio.h>

int main()
{
    
    char i,j,s;
    for(i='E';i>='A';i--)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
    
}