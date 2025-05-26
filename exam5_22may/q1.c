#include<stdio.h>

int main()
{
    int size;
    
    printf("enter size:\t");
    scanf("%d",&size);
   
   
    int a[size];
    
    for(int i=0;i<size;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("negative num is");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
}