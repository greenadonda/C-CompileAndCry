#include<stdio.h>
//f
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1 || i==4 ||  j==1 )
            {
                printf("*");  
            }
            else
            {
                printf("  ");
            }
          
        }
        printf("\n");
    }
}