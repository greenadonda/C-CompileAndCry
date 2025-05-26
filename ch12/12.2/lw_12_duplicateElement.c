#include<stdio.h>

int main()
{
    int size;
    printf("enter size\t");
    scanf("%d",&size);
    
    int a[size];
    
    for(int i=0;i<size;i++)
    {
        printf("enter a[%d]:\t",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
       for(int j=i+1;j<size;j++)
       {
           if(a[i]==a[j])
            {
                 printf("duplicate %d\t",a[i]);
                 break;
            }
            
       }
       
    }
}