#include<stdio.h>
//h
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==1 ||j==4||i==4)
            {
                printf("*");  
            }
            else
            {
                printf("   ");
            }
          
        }
        printf("\n");
    }
}