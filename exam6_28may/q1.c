#include<stdio.h>

int main()
{
    char str[50];
    
    printf("enter your string:\t");
    scanf("%[^\n]",&str);
    
    int len=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
    
    int  i=0;
    int  j=len-1;
    
    while(i<j)
    {
       if(str[i]!=str[j])
       break;
       i++;
       j--;
    }
    if(i>=j)
    {
        printf("is palindrome");
    }
    else
    {
        printf("is not  palindrome");  
    }
    
}