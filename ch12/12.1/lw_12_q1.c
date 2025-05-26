#include<stdio.h>

int main()
{
    int size;
    printf("enter array size");
    scanf("%d",&size);

    int a[size];
    for(int i=0; i<size; i++)
    {
        printf("enter a[%d] value",i);
        scanf("%d",&a[i]);
    }
    printf("length is %d\t",size);
    

}
