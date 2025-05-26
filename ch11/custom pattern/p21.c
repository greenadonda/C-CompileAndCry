#include<stdio.h>
//p
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||i==1||i==4||j==5&&i<=3)
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