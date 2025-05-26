#include<stdio.h>

int main()
{
    
    char i,j,s;
    for(i='A';i<='E';i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j=i;j<='E';j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
    
}