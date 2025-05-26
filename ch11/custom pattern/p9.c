#include<stdio.h>
//d
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==1 || i==7 || j==1||j==3)
            {
                printf(" *");  
            }
            else
            {
                printf("    ");
            }
          
        }
        printf("\n");
    }
}