#include<stdio.h>
//g
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1 ||i==7||  j==1||i==6 && j==4||i==5 &&j==4||i==4&&j>=3 )
            {
                printf(" *");  
            }
            else
            {
                printf("   ");
            }
          
        }
        printf("\n");
    }
}