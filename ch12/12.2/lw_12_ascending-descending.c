#include<stdio.h>

int main()
{
    int size,n;
    printf("enter size\n");
    scanf("%d",&size);
    
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n\nascending order\n\n");
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i] > a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
        
        printf("%d\t",a[i]);
    }
    printf("\n\ndescending order\n\n");
     for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i] < a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
        
        printf("%d\t",a[i]);
    }
}