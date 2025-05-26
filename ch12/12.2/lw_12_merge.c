#include<stdio.h>

int main()
{
    int size1,size2;
    
    printf("enter size of size1 and size2\n");
    scanf("%d \t %d",&size1,&size2);
    
    
    int a[size1],b[size2],merge[size1+size2];
    
    printf("\n\n enter value of size1\n\n");
    for(int i=0;i<size1;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
         //merge[i]=a[i];
        
    }
    printf("\n\n enter value of size2\n\n");
    for(int i=0;i<size2;i++)
    {
        printf("enter b[%d]",i);
        scanf("%d",&b[i]);
        //merge[i+size1]=b[i];
        
    }
    printf("\n\n merge size1\n\n");
    for(int i=0;i<size1;i++)
    {
        merge[i]=a[i];
        printf("%d\t",a[i]);
    }
    printf("\n\n merge size2\n\n");
    for(int i=0;i<size2;i++)
    {
        merge[i+size1]=b[i];//i+size1 start with 5
        printf("%d\t",b[i]);
    }
     printf("\n\n merge array\n\n");
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d\t",merge[i]);
    }
    
}