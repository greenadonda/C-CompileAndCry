#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nAfter removing duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        int Duplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                Duplicate = 1;
                break;
            }
        }

        if (!Duplicate)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}




/*#include<stdio.h>

int main()
{
    int r,c,sum=0,avg;
    printf("enter size of row");
    scanf("%d",&r);
     printf("enter size of column");
    scanf("%d",&c);
    
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("a[%d][%d]",i,j); 
           scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           sum+=a[i][j];
           avg=sum/a[i][j];
        }
        printf("%dsum\t",sum);
        printf("%davg\t",avg);

        
       
    }
}*/
