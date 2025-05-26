#include<stdio.h>
//o
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==5||i==1||i==7)
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