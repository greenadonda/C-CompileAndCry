#include<stdio.h>
//q
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==5||i==1||i==7||i==5&&j==3||i==6&&j==4)
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