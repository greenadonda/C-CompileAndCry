#include<stdio.h>
//k
int main()
{
    int i,j,s;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==1||j==6-i||j==i-5)
            {
                printf("*");  
            }
            else
            {
                printf(" ");
            }
          
        }
        printf("\n");
    }
}