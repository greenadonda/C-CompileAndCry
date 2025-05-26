#include<stdio.h>
//m
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==5||i==2||i==3&&j==3)
            {
                printf(" *");  
            }
            else
            {
                printf("  ");
            }
          
        }
        printf("\n");
    }
}