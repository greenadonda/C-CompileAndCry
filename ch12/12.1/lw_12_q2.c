#include<stdio.h>

int main()
{
    int a,sum=0;
    printf("enter size");
    scanf("%d",&a);

    int ab[a];
    for(int i=0;i<a;i++)
        {
            printf("ab[%d]",i);
            scanf("%d",&ab[i]);
            sum+=ab[i];
        } 
        printf("sum is:%d\t",sum);
        printf("avg is%f",(float)sum/ a);
}