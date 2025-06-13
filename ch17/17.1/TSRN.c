#include<stdio.h>

//declaratio & definition
void ret(int a,int b)
{
    printf("multiplication is:\t%d",a*b);   
}

//call
void main()
{
    ret(5,3);
}


//|----------------------------------------OR------------------------------------------------------|

#include<stdio.h>

//declaration
void ret(int a,int b);
void main()
{
    //call
    ret(7,1);
}

//definition
void ret(int a,int b)
{
    printf("subtraction is:\t%d",a-b);
}


