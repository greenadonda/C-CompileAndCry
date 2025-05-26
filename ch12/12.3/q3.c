#include<stdio.h>
int main()
{
    int row,column,sum=0;
    
    printf("enter row & column");
    scanf("%d %d",&row,&column);
    
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          
               printf("a[%d][%d]",i,j);
               scanf("%d",&a[i][j]);
           
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          
              if(i+j==row-1)
              {
                  printf("%d",a[i][j]);
                  sum+=a[i][j];
              }
              else
              {
                  printf(" ");
              }
           
        }
        printf("\n");
        printf("sum%d",sum);
    }
    
    
} 